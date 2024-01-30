@class NSString, UIImageView, UILabel;

@interface _MFSecureMIMEPersonHeaderLabel : UIView {
    UIImageView *_imageView;
    UILabel *_label;
}

@property (copy, nonatomic) NSString *text;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 text:(id)a1 textColor:(id)a2;

@end
