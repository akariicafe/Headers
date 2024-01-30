@class NSString, NSArray, TVImageProxy, _TVImageView, UILabel;

@interface _TVAlertView : UIView {
    _TVImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
    NSArray *_additionalLabelViews;
}

@property (retain, nonatomic) TVImageProxy *imageProxy;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *additionalLabels;

+ (id)_newLabelWithText:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
