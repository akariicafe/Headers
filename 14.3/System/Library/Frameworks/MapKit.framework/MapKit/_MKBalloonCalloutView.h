@class UIColor, UIImageView, UIImage, UIView, _MKBezierPathView;

@interface _MKBalloonCalloutView : MKCalloutView {
    UIView *_shadowView;
    UIView *_containerView;
    UIImageView *_balloonBodyImageView;
    UIImageView *_tailView;
    UIView *_innerBackgroundView;
    UIImageView *_imageView;
    struct CGSize { double width; double height; } _intrinsicSize;
    struct CGSize { double width; double height; } _shadowSize;
    double _croppedImageScale;
    UIImageView *_contentViewMaskView;
    _MKBezierPathView *_backgroundView;
    BOOL _centerAnnotationWhenOffscreen;
    BOOL _dismissed;
}

@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL originatesAsSmallBalloon;
@property (nonatomic) double smallBalloonScale;
@property (copy, nonatomic) UIColor *balloonTintColor;
@property (copy, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) UIColor *innerStrokeColor;
@property (copy, nonatomic) UIColor *imageTintColor;
@property (nonatomic) BOOL showsArrow;

- (void)_updateStyle;
- (void)_commonInit;
- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithAnnotationView:(id)a0;
- (void)showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)dismissAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_idealFrame;
- (BOOL)calloutContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerFrame;
- (double)_innerDiameter;
- (void)setShowsArrow:(BOOL)a0 animated:(BOOL)a1;
- (void)_handleTapOnCallout:(id)a0;
- (void)_configureForArrowStateWithDuration:(double)a0;
- (void)_updateCroppedImage;
- (void)_showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)updateWithNewCalloutOffset;
- (void)showCalloutAnimated:(BOOL)a0;
- (void)hideCalloutAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
