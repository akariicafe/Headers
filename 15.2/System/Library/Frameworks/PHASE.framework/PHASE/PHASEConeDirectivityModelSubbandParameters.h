@interface PHASEConeDirectivityModelSubbandParameters : NSObject

@property (nonatomic) double frequency;
@property (readonly) double innerAngle;
@property (readonly) double outerAngle;
@property (nonatomic) double outerGain;

- (id)init;
- (void)setInnerAngle:(double)a0 outerAngle:(double)a1;

@end
