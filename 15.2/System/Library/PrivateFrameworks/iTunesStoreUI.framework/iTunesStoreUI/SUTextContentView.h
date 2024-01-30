@class NSString, UILabel;

@interface SUTextContentView : UITextContentView {
    UILabel *_placeholderLabel;
}

@property (retain, nonatomic) NSString *placeholder;

- (void)keyboardInputChangedSelection:(id)a0;
- (void)layoutSubviews;
- (void)setText:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;

@end
