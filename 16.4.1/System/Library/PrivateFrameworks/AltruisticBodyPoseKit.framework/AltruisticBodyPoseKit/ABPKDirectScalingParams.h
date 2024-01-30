@interface ABPKDirectScalingParams : NSObject

@property (readonly, nonatomic) float heightScale;
@property (readonly, nonatomic) float widthScale;

- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0 andOutputResolution:(struct CGSize { double x0; double x1; })a1;

@end
