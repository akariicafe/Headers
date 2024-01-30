@class NSData, NSNumber;

@interface SignpostMetrics : NSObject

@property (readonly, nonatomic) NSData *binarySnapshot;
@property (readonly, nonatomic) NSNumber *cpuTimeNsec;
@property (readonly, nonatomic) NSNumber *dirtyMemoryKB;
@property (readonly, nonatomic) NSNumber *dirtyMemoryLifetimePeakKB;
@property (readonly, nonatomic) NSNumber *storageDirtiedKB;
@property (readonly, nonatomic) NSNumber *cpuInstructionsKI;

+ (id)_newMetricsFromData:(id)a0;
+ (id)newMetricsForSignpostEvent:(id)a0;
+ (id)_deltaDescription:(id)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSnapshotDict:(id)a0 data:(id)a1;

@end
