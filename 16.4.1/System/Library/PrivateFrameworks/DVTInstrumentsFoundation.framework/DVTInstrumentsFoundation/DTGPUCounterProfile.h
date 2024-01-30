@class NSString, NSMutableArray;
@protocol MTLDevice;

@interface DTGPUCounterProfile : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (nonatomic) unsigned long long defaultSampleInterval;
@property (retain, nonatomic) NSString *derivedCounterScriptPath;
@property (retain, nonatomic) NSString *profileName;
@property (readonly, nonatomic) unsigned long long profile;
@property (readonly, nonatomic) NSMutableArray *counters;

- (void)stop;
- (BOOL)prepare;
- (void).cxx_destruct;
- (void)addCounter:(id)a0;
- (id)counterProfileForHost;
- (id)initWithProfile:(unsigned long long)a0 device:(id)a1;
- (id)ringBufferCounts;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;
- (id)sampleSizes;
- (BOOL)start:(unsigned long long)a0 vendorFeatures:(id)a1;

@end
