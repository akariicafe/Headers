@class NSArray, NSString, NSDictionary, DTGPUCounterProfile, NSObject;
@protocol MTLDevice, DTGPUPerformanceStateControl, OS_dispatch_source, OS_dispatch_queue, DTGPUDataSourceDelegate;

@interface DTGPUDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    DTGPUCounterProfile *_collectingProfile;
    unsigned long long _windowLimit;
    unsigned long long _sampleInterval;
    unsigned long long _stopTime;
    BOOL _enableShaderProfiler;
    BOOL _isAGXDevice;
    struct vector<std::vector<DTGPUCounterSampleBuffer>, std::allocator<std::vector<DTGPUCounterSampleBuffer>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<DTGPUCounterSampleBuffer> *, std::allocator<std::vector<DTGPUCounterSampleBuffer>>> { void *__value_; } __end_cap_; } _sampleBuffers;
    NSArray *_supportedCounterProfiles;
    id<DTGPUPerformanceStateControl> _perfStateControl;
}

@property (readonly, nonatomic) NSArray *supportedCounterProfiles;
@property (readonly, nonatomic) unsigned long long minSampleInterval;
@property (readonly, weak, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSDictionary *deviceInfoDict;
@property (readonly, nonatomic) unsigned long long windowLimit;
@property (readonly, nonatomic) DTGPUCounterProfile *collectingProfile;
@property (weak, nonatomic) id<DTGPUDataSourceDelegate> delegate;

- (BOOL)run;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)reset;
- (void)_sampleCounters;
- (id)configure:(unsigned int)a0 interval:(unsigned long long)a1 windowLimit:(unsigned long long)a2;
- (id)_queryDisplayInfoDict;
- (id)currentConsistentGPUPerformanceState;
- (id)disableConsistentGPUPerformanceState;
- (BOOL)enableConsistentGPUPerformanceState:(unsigned long long)a0;
- (void)enableShaderProfiler:(BOOL)a0;
- (void)getRemainingData:(id /* block */)a0;
- (id)initWithMTLDevice:(id)a0 workQueue:(id)a1;
- (unsigned long long)timestampOfFirstSample;

@end
