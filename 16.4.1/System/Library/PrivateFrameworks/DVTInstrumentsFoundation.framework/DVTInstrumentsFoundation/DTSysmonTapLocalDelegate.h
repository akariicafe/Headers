@class DTSysmonTapConfig, NSString, DTTapLocal, NSArray, NSSet, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray;
@protocol OS_sysmon_request, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface DTSysmonTapLocalDelegate : NSObject <DTTapLocalDelegate> {
    DTTapLocal *_tap;
    DTSysmonTapConfig *_config;
    NSSet *_pidFilter;
    BOOL _isWindowed;
    unsigned long long _lastWindowPurgeTime;
    unsigned long long _purgeEveryNTicks;
    unsigned long long _effectiveWindowSize;
    BOOL _stopWasCalled;
    NSObject<OS_dispatch_source> *_pollTimer;
    NSObject<OS_dispatch_queue> *_serialQ;
    NSObject<OS_dispatch_semaphore> *_samplesLock;
    NSMutableArray *_samples;
    NSMutableDictionary *_newAttributesSample;
    NSDictionary *_processesFromLastSample;
    NSDictionary *_coalitionsFromLastSample;
    NSMutableDictionary *_processesAtWindowBeginning;
    NSMutableDictionary *_systemAtWindowBeginning;
    NSMutableDictionary *_coalitionsAtWindowBeginning;
    NSArray *_processAttributes;
    NSArray *_systemAttributes;
    NSArray *_coalitionAttributes;
    NSObject<OS_sysmon_request> *_processRequest;
    NSObject<OS_sysmon_request> *_systemRequest;
    NSObject<OS_sysmon_request> *_coalitionRequest;
    unsigned long long _processLastSampleTime;
    unsigned long long _systemLastSampleTime;
    unsigned long long _coalitionLastSampleTime;
    unsigned int _cpuCount;
    struct processor_cpu_load_info { unsigned int x0[4]; } *_savedTicks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)dealloc;
- (void)stop;
- (id)initWithConfig:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)setTap:(id)a0;
- (void)unpause;
- (id)validateConfig;
- (void)_purgeOldSamplesForCurrentTime:(unsigned long long)a0;
- (void)_addCPUUsageToSample:(id)a0;
- (void)_addSample:(id)a0;
- (void)_createAttributesSample;
- (id)_getSessionMetadata;
- (void)_handleSysmonCoalitionTable:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2;
- (void)_handleSysmonProcessTable:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2;
- (void)_handleSysmonSystemTable:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2;
- (BOOL)canFetchWhileArchiving;
- (void)fetchDataForReason:(unsigned long long)a0 block:(id /* block */)a1;

@end
