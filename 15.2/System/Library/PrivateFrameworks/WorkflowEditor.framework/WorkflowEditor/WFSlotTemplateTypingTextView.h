@class UIFont, NSString, UIView, NSAttributedString, UITextInputPasswordRules, UITextRange, NSDictionary, UITextPosition;
@protocol WFSlotTemplateTypingTextViewDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface WFSlotTemplateTypingTextView : UITextView <WFSlotTemplateTextEntry>

@property (weak, nonatomic) id<WFSlotTemplateTypingTextViewDelegate> delegate;
@property (retain, nonatomic) UIFont *emojiOverrideFont;
@property (nonatomic) BOOL clearsZeroWhenTyping;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) UITextRange *selectedTextRange;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;

- (id)selectionRectsForRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (void)paste:(id)a0;
- (void)cut:(id)a0;
- (void)copy:(id)a0;
- (void)deleteBackward;
- (void)insertText:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)wf_replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedText:(id)a1;
- (void)wf_applyEmojiOverrideFont;

@end
