@class UILabel, UIView;

@interface BCServerErrorView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *messageLabel;

- (void)setupConstraints;
- (id)init;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
