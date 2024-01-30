@class UIStackView, UIImageView, UILabel, DBEnvironmentConfiguration, UITapGestureRecognizer;
@protocol DBLockOutViewDelegate;

@interface DBLockOutView : UIView

@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) UITapGestureRecognizer *backToOEMGestureRecognizer;
@property (readonly, nonatomic) long long mode;
@property (weak, nonatomic) id<DBLockOutViewDelegate> delegate;

- (id)_titleFont;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_buttonFont;
- (void)_buttonTapped:(id)a0;
- (void)_backToOEM;
- (id)_buttonOfType:(unsigned long long)a0;
- (id)_buttonTitleForType:(unsigned long long)a0;
- (id)initWithMode:(long long)a0 environmentConfiguration:(id)a1;

@end
