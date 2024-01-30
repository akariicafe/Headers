@interface SHContinuityTrackerResult : NSObject

@property (readonly, nonatomic) double queryStart;
@property (readonly, nonatomic) double queryEnd;
@property (readonly, nonatomic) double referenceStart;
@property (readonly, nonatomic) double referenceEnd;
@property (readonly, nonatomic) float alignmentConfidence;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithQueryAlignment:(id)a0 referenceAlignment:(id)a1 alignmentConfidence:(float)a2;

@end
