@class NSString, UIImageView, UIImage, UILabel;

@interface PKAlertHeaderView : UIView {
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;

- (void)shakeTitleView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
