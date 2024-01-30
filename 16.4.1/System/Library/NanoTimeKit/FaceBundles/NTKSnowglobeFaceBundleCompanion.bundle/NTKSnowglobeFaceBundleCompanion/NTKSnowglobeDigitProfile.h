@interface NTKSnowglobeDigitProfile : NSObject

@property (readonly, nonatomic) float kickMultiplier;
@property (readonly, nonatomic) float randomMotionMultiplier;
@property (readonly, nonatomic) float springMultiplier;
@property (readonly, nonatomic) float accelerometerFactor;
@property (readonly, nonatomic) float blinkDuration;
@property (readonly, nonatomic) float blinkTime;
@property (readonly, nonatomic) float squintRatio;

+ (id)profileForCharacter:(unsigned long long)a0;

@end
