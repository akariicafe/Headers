@interface _NCContentUnavailableView : _UIContentUnavailableView

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_titleFont;
- (void)didMoveToWindow;
- (void)_updateVisualStyling;
- (double)_labelAlpha;
- (id)_visualStylingProvider;

@end
