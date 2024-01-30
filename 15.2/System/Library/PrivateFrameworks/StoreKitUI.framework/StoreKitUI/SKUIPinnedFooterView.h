@class UITextView, NSAttributedString;

@interface SKUIPinnedFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double horizontalPadding;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_initializeTextView;
- (void)_configureTextViewTextStyling;

@end
