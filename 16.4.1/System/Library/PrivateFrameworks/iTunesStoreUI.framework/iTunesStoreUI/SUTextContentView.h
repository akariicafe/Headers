@class NSString, UILabel;

@interface SUTextContentView : UITextContentView {
    UILabel *_placeholderLabel;
}

@property (retain, nonatomic) NSString *placeholder;

- (BOOL)becomeFirstResponder;
- (void)setText:(id)a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)keyboardInputChangedSelection:(id)a0;
- (BOOL)resignFirstResponder;

@end
