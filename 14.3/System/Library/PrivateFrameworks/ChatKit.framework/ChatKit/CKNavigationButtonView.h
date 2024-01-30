@class UIVisualEffect, NSString, UIImageView, UIImage, UILabel, UIVisualEffectView, UIButton;

@interface CKNavigationButtonView : UIButton

@property (nonatomic) BOOL wantsLongPress;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UIImage *disabledImage;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (retain, nonatomic) UIVisualEffect *disabledVibrancyEffect;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long joinButtonStyle;
@property (nonatomic) BOOL wantsVibrancy;
@property (readonly, nonatomic) UIButton *imageButton;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 disabledImage:(id)a1 text:(id)a2 wantsLongPress:(BOOL)a3;
- (id)initWithImage:(id)a0 text:(id)a1 wantsLongPress:(BOOL)a2;
- (void)layoutSubviews;
- (void)_setupIconImageView;
- (id)_imageForCurrentState;
- (void)setEnabled:(BOOL)a0;

@end
