@interface SBHVisualStylingView : UIView

+ (id)visualStyleSetNameForUserInterfaceStyle:(long long)a0;

- (void)_updateVisualStyling;
- (void)didMoveToSuperview;
- (void)traitCollectionDidChange:(id)a0;
- (void)didMoveToWindow;

@end
