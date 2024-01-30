@interface _UIShadowView : UIImageView

@property (nonatomic) BOOL useLowerIntensity;

- (void)didMoveToSuperview;
- (void)_updateShadowVisualStyling;

@end
