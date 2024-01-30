@class UIVisualEffectView, NSLayoutConstraint;

@interface _SFSettingsAlertItemBackgroundView : UIView {
    UIVisualEffectView *_highlightView;
    NSLayoutConstraint *_highlightToTopConstraint;
    NSLayoutConstraint *_highlightToLeadingConstraint;
    NSLayoutConstraint *_highlightToLeadingWithSpaceConstraint;
    NSLayoutConstraint *_highlightPixelWidthConstraint;
    NSLayoutConstraint *_highlightPixelHeightConstraint;
}

@property (nonatomic) long long mode;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)_highlightEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
