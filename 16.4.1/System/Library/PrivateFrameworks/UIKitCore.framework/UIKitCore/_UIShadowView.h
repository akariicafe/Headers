@interface _UIShadowView : UIImageView

@property (nonatomic) BOOL useLowerIntensity;

- (void)_updateShadowVisualStyling;
- (void)didMoveToSuperview;

@end
