@interface SignatureAlignmentTrackerResult : NSObject

@property (readonly, nonatomic) double queryStart;
@property (readonly, nonatomic) double queryEnd;
@property (readonly, nonatomic) double referenceStart;
@property (readonly, nonatomic) double referenceEnd;
@property (readonly, nonatomic) float confidence;

- (id)initWithQueryStart:(double)a0 queryEnd:(double)a1 referenceStart:(double)a2 referenceEnd:(double)a3 confidence:(float)a4;

@end
