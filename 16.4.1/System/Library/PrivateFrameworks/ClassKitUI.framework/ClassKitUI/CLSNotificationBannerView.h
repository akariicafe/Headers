@class UIImageView, UILabel, UIStackView;

@interface CLSNotificationBannerView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIStackView *labelsStackView;
@property (readonly, nonatomic) double preferredWidthPad;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)bundle;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)bannerMessageAttributes;
+ (id)bannerTitleAttributes;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (void)hideBanner;
- (void)applyConstraints;
- (void)callCompletionHandler;
- (id)initWithTitle:(id)a0 image:(id)a1 message:(id)a2;
- (id)initWithTitle:(id)a0 imageView:(id)a1 message:(id)a2;

@end
