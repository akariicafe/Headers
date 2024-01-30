@class NSString, UILabel;

@interface SUTextContentView : UITextContentView {
    UILabel *_placeholderLabel;
}

@property (retain, nonatomic) NSString *placeholder;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)dealloc;
- (void)keyboardInputChangedSelection:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)setText:(id)a0;

@end
