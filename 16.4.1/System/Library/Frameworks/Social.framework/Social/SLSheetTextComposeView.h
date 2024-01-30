@class UILabel, UITextView;

@interface SLSheetTextComposeView : UIView

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (nonatomic) double textRightInset;

- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)restoreKeyboard;
- (void)_assembleView;

@end
