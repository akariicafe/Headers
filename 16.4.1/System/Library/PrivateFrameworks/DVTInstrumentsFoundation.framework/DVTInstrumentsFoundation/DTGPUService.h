@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, NSObject;

@interface DTGPUService : DTXService <DTGPUServiceAuthorizedAPI, DTGPUDataSourceDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_waitingForDeviceTimer;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    id<NSObject> _deviceObserver;
    BOOL _enableShaderProfiler;
    BOOL _enableConsistentPerfState;
    BOOL _enableMultiSourceCounters;
    unsigned long long _targetPerfState;
    NSMutableDictionary *_collectingDataSources;
    NSMutableDictionary *_dataSourceDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (void)registerCapabilities:(id)a0;

- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;
- (void)_waitForProcessMetalDevice:(int)a0 counterProfile:(unsigned int)a1 interval:(unsigned long long)a2 windowLimit:(unsigned long long)a3;
- (void)_addGPU:(id)a0;
- (void)_configureDataSourcesAndSendMessage:(id)a0 counterProfile:(unsigned int)a1 interval:(unsigned long long)a2 windowLimit:(unsigned long long)a3;
- (id)_constructMessagePayload:(const unsigned long long *)a0 sampleCount:(unsigned long long)a1 length:(unsigned long long)a2 dataSource:(id)a3 sampleType:(unsigned long long)a4 ringBufferIndex:(unsigned int)a5 sourceIndex:(unsigned int)a6;
- (id)_findDataSourcesForTargetProcess:(int)a0;
- (void)_removeGPU:(unsigned long long)a0;
- (void)_resetAllDataSources;
- (void)_sendErrorMessage:(id)a0 code:(unsigned long long)a1;
- (void)_setupDataSources;
- (void)_startHeartbeatTimer;
- (void)_stopHeartbeatTimer;
- (void)configureCounters:(unsigned long long)a0 counterProfile:(unsigned int)a1 interval:(unsigned long long)a2 windowLimit:(unsigned long long)a3 tracingPID:(int)a4;
- (id)currentConsistentGPUPerformanceState;
- (id)dataSourceFromGPUIndex:(unsigned long long)a0;
- (id)disableConsistentGPUPerformanceState:(unsigned long long)a0;
- (BOOL)enableConsistentGPUPerformanceState:(unsigned long long)a0 acceleratorID:(unsigned long long)a1;
- (void)enableMultiSourceCounters;
- (void)enableShaderProfiler;
- (id)flushRemainingData;
- (void)readyToSendData:(const unsigned long long *)a0 sampleCount:(unsigned long long)a1 length:(unsigned long long)a2 dataSource:(id)a3 sampleType:(unsigned long long)a4 ringBufferIndex:(unsigned int)a5 sourceIndex:(unsigned int)a6;
- (id)requestDeviceGPUInfo;
- (void)startCollectingCounters;
- (id)stopCollectingCounters;

@end
