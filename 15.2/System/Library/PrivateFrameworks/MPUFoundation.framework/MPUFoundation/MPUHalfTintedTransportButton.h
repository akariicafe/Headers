@class UIColor, MPUTransportButtonEventHandler, UIImageView, UIImage, NSString, UIButton;

@interface MPUHalfTintedTransportButton : UIControl <MPUTransportButton> {
    UIButton *_regularButton;
    UIButton *_tintedButton;
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
}

@property (readonly, nonatomic, getter=_regularButton) UIButton *regularButton;
@property (readonly, nonatomic, getter=_tintedButton) UIButton *tintedButton;
@property (retain, nonatomic) UIImage *regularImage;
@property (nonatomic) double regularImageAlpha;
@property (retain, nonatomic) UIColor *regularImageColor;
@property (readonly, nonatomic) UIImageView *regularImageView;
@property (retain, nonatomic) UIImage *tintedImage;
@property (nonatomic) double tintedImageAlpha;
@property (retain, nonatomic) UIColor *tintedImageColor;
@property (readonly, nonatomic) UIImageView *tintedImageView;
@property (readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (nonatomic) long long transportButtonImageViewContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transportButton;

- (void)layoutSubviews;
- (id)_newButton;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void)setHighlighted:(BOOL)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldTrack;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)setSelected:(BOOL)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })a0;
- (BOOL)wantsCustomHighlightAppearance;
- (BOOL)_shouldForwardSelectedState;
- (void)_updateRegularImage;
- (void)_applyImage:(id)a0 toButton:(id)a1;

@end
