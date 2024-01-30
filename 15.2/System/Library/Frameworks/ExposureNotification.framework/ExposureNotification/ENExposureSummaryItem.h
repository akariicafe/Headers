@interface ENExposureSummaryItem : NSObject <CUXPCCodable>

@property (nonatomic) double maximumScore;
@property (nonatomic) double scoreSum;
@property (nonatomic) double weightedDurationSum;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void)roundDurations;

@end
