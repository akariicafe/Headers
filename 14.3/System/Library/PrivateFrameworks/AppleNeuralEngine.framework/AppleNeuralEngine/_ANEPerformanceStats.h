@class NSData;

@interface _ANEPerformanceStats : NSObject

@property (readonly, nonatomic) NSData *perfCounterData;
@property (readonly, nonatomic) unsigned long long hwExecutionTime;

+ (id)new;
+ (unsigned int)driverMaskForANEFMask:(unsigned int)a0;
+ (id)statsWithRequestPerformanceBuffer:(void **)a0 statsBufferSize:(unsigned int *)a1;
+ (id)statsWithHardwareExecutionNS:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)emitPerfcounterSignpostsWithModelStringID:(unsigned long long)a0;
- (id)performanceCounters;
- (id)initWithHardwareExecution:(unsigned long long)a0 perfCounterData:(id)a1;
- (id)initWithRequestPerformanceBuffer:(void **)a0 statsBufferSize:(unsigned int *)a1;
- (id)stringForPerfCounter:(int)a0;

@end
