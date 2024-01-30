@interface AXMVisionFeatureAestheticsResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float aestheticScore;
@property (readonly, nonatomic) float wellFramedSubjectScore;
@property (readonly, nonatomic) float pleasantCompositionScore;
@property (readonly, nonatomic) float wellChosenBackgroundScore;
@property (readonly, nonatomic) float noiseScore;
@property (readonly, nonatomic) float failureScore;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithVisionAestheticsObservation:(id)a0;

@end
