@class UIImage;

@interface SBUILegibilityShadowView : SBUILegibilityContainerView

@property (nonatomic) double strength;
@property (readonly, nonatomic) UIImage *strengthenedImage;

- (void)setImage:(id)a0 strengthenedImage:(id)a1 strength:(double)a2;
- (BOOL)_updateFilters;
- (id)_contentColor;

@end
