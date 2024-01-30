@interface ENExposureSummaryItem : NSObject <CUXPCCodable>

@property (nonatomic) double maximumScore;
@property (nonatomic) double scoreSum;
@property (nonatomic) double weightedDurationSum;

- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)roundDurations;

@end
