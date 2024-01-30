@class UIImageView, UILabel;

@interface CLSNotificationBannerView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (readonly, nonatomic) double preferredWidthPad;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)bundle;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)bannerTitleAttributes;
+ (id)bannerMessageAttributes;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 image:(id)a1 message:(id)a2;
- (void)callCompletionHandler;
- (void)layoutSubviews;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (void)hideBanner;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (id)initWithTitle:(id)a0 imageView:(id)a1 message:(id)a2;

@end
