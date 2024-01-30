@interface _NCContentUnavailableView : _UIContentUnavailableView

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateVisualStyling;
- (id)_titleFont;
- (double)_labelAlpha;
- (void)didMoveToWindow;
- (id)_visualStylingProvider;

@end
