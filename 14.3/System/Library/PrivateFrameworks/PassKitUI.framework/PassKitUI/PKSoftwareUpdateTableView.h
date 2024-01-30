@class UIColor, UITextView, UIScrollView, UILabel;

@interface PKSoftwareUpdateTableView : UITableView {
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UITextView *_messageView;
}

@property (nonatomic) long long context;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *linkColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_messageAttributedStringWithTextColor:(id)a0;

@end
