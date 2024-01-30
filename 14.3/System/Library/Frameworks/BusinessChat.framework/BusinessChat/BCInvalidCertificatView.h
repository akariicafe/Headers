@class NSString, UIImageView, UILabel, UIView;

@interface BCInvalidCertificatView : UIView

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) UIImageView *insecureIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIView *contentView;

- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)initWithHost:(id)a0;

@end
