@interface SBHVisualStylingView : UIView

+ (id)visualStyleSetNameForUserInterfaceStyle:(long long)a0;

- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)_updateVisualStyling;
- (void)traitCollectionDidChange:(id)a0;

@end
