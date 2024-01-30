@class NSString, UILabel;

@interface SKUIRedeemResultMessageView : UIView {
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
