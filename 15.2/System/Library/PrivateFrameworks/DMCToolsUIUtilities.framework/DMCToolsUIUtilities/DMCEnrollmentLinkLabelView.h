@class UIImageView, UILabel, NSString;

@interface DMCEnrollmentLinkLabelView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ linkHandler;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *linkMessage;

- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)_textFont;
- (id)initWithIcon:(id)a0 message:(id)a1 linkMessage:(id)a2 linkHandler:(id /* block */)a3;
- (void)_populateTextLabelWithMessage:(id)a0 linkMessage:(id)a1;

@end
