@class _UISystemBackgroundStrokeView, UIVisualEffectView, UIView;
@protocol _UIBackgroundConfigurationInternal;

@interface _UISystemBackgroundView : UIView {
    UIView *_backgroundView;
    UIVisualEffectView *_visualEffectView;
    _UISystemBackgroundStrokeView *_strokeView;
    UIView *_shadowView;
    double _currentlyAppliedCornerRadius;
    struct { unsigned char currentlyAppliedCornersAreContinuous : 1; unsigned char didSetCustomViewMasking : 1; } _systemBackgroundViewFlags;
}

@property (copy, nonatomic) id<_UIBackgroundConfigurationInternal> configuration;

- (void)tintColorDidChange;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInContainerView:(id)a0;
- (id)currentVisiblePathInContainerView:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)description;
- (void)layoutSubviews;
- (id)_encodableSubviews;
- (id)currentBackgroundColor;
- (id)outlinePathInContainerView:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsetsInContainerView:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
