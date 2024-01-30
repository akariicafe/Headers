@class UIStackView, NSString, UIImageView, UIImage, UIView, UILabel;

@interface AKAuthorizationBulletPointSubPane : AKAuthorizationSubPane

@property (readonly, nonatomic) UIView *baseView;
@property (readonly, nonatomic) UIImageView *bulletImageView;
@property (readonly, nonatomic) UIStackView *messageStackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)_iconColor;
- (id)_verticalStackView;
- (id)_imageViewWithImage:(id)a0;
- (id)_labelWithString:(id)a0 title:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_sizeForBulletImage:(id)a0;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (id)initWithImage:(id)a0 title:(id)a1 message:(id)a2;

@end
