@class UIImageView, UIVisualEffectView, UIView, _UISystemBackgroundStrokeView;
@protocol _UIBackgroundConfigurationInternal;

@interface _UISystemBackgroundView : UIView {
    UIView *_colorView;
    UIVisualEffectView *_visualEffectView;
    UIImageView *_imageView;
    _UISystemBackgroundStrokeView *_strokeView;
    UIView *_shadowView;
    double _currentlyAppliedCornerRadius;
    unsigned char _subviewInsertionIndices[6];
    struct { unsigned char currentlyAppliedCornersAreContinuous : 1; unsigned char lockCornerCurve : 1; unsigned char didSetCustomViewMasking : 1; } _systemBackgroundViewFlags;
}

@property (copy, nonatomic) id<_UIBackgroundConfigurationInternal> configuration;

- (id)_encodableSubviews;
- (id)currentVisiblePathInContainerView:(id)a0;
- (void)layoutSubviews;
- (id)currentBackgroundColor;
- (void)encodeWithCoder:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsetsInContainerView:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInContainerView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)outlinePathInContainerView:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)tintColorDidChange;

@end
