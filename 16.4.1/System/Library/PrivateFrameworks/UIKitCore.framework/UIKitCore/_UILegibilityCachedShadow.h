@class UIImage, _UILegibilitySettings;

@interface _UILegibilityCachedShadow : NSObject

@property (retain, nonatomic) _UILegibilitySettings *settings;
@property (nonatomic) double strength;
@property (retain, nonatomic) UIImage *shadow;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)matchesSettings:(id)a0 strength:(double)a1;

@end
