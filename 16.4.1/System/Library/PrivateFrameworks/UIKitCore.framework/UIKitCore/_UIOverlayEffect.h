@class NSString, UIImage, UIColor;

@interface _UIOverlayEffect : UIVisualEffect

@property (copy, nonatomic) NSString *filterType;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double alpha;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (id)init;
- (void).cxx_destruct;

@end
