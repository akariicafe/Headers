@class UIResponder;
@protocol UITextInput;

@interface UISelectionTapRecognizer : UITextTapRecognizer

@property UIResponder<UITextInput> *textView;

- (BOOL)isCloseToSelection;
- (void)setState:(long long)a0;

@end
