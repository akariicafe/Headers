@class NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface DTGraphicsService : DTXService <DTGraphicsServiceAuthorizedAPI> {
    BOOL _doCollectData;
    unsigned long long _samplingRate;
    int _targetPid;
    NSMutableArray *_availableGlobalStatistics;
    NSMutableArray *_availableProcessStatistics;
    NSDictionary *_availableStatistics;
    NSMutableArray *_driverNames;
    unsigned int _lastFPSCount;
    unsigned int _maxFPS;
    double _startTime;
    double _lastTimeStampInSeconds;
    unsigned int _globalService;
    unsigned int _perProcessService;
    NSObject<OS_dispatch_semaphore> *_stopSamplingSemaphore;
    BOOL _capFPS;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void)cleanup;
- (void)setSamplingRate:(id)a0;
- (void)stopSampling;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (id)valueForSwitch:(id)a0;
- (void)_collectData;
- (id)_collectSampleForService;
- (void)_releaseIOServices;
- (void)_setupIOServices;
- (id)availableStatistics;
- (id)currentFramesPerSecond:(double)a0;
- (id)driverNames;
- (void)queryCards;
- (id)queryGlobalStatistics;
- (id)queryPidStatistics;
- (void)setValue:(id)a0 forSwitchName:(id)a1;
- (void)startSamplingAtTimeInterval:(id)a0;
- (void)startSamplingAtTimeInterval:(id)a0 processIdentifier:(id)a1;

@end
