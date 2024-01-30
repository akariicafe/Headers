@class NSString, UILabel;

@interface SKUIRedeemResultMessageView : UIView {
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;

@end
