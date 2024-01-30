@class UITextInteraction, NSString, NSDictionary, UITextPosition, UIView, UITextRange, UITextInputPasswordRules;
@protocol PDFTextInputDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface PDFTextInputView : UIView <UITextInput, UIKeyInput, UITextInteractionDelegate> {
    id<PDFTextInputDelegate> _delegate;
    UITextRange *_textSelectionRange;
    UITextInteraction *_textInteraction;
    id<UITextInputDelegate> _textInputDelegate;
    id<UITextInputTokenizer> _textInputTokenizer;
}

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertText:(id)a0;
- (id)positionWithinRange:(id)a0 farthestInDirection:(long long)a1;
- (void)unmarkText;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)textInRange:(id)a0;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)textRangeFromPosition:(id)a0 toPosition:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0;
- (id)selectionRectsForRange:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (id)positionFromPosition:(id)a0 offset:(long long)a1;
- (void)replaceRange:(id)a0 withText:(id)a1;
- (void)deleteBackward;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)characterRangeByExtendingPosition:(id)a0 inDirection:(long long)a1;
- (id)positionFromPosition:(id)a0 inDirection:(long long)a1 offset:(long long)a2;
- (void)setBaseWritingDirection:(long long)a0 forRange:(id)a1;
- (BOOL)interactionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)selection;
- (void).cxx_destruct;
- (long long)baseWritingDirectionForPosition:(id)a0 inDirection:(long long)a1;
- (BOOL)canBecomeFirstResponder;
- (id)initWithDelegate:(id)a0;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (long long)comparePosition:(id)a0 toPosition:(id)a1;
- (void)setSelection:(id)a0;
- (BOOL)_allowAnimatedUpdateSelectionRectViews;
- (void)setTokenizer:(id)a0;
- (void)updateGestureRecognizerDependencies;
- (void)updateTextSelectionGraphics;
- (id)_selectionForTextRange:(id)a0;
- (id)_closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (void)handleGesture:(unsigned long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3 isIndirectTouch:(BOOL)a4;
- (id)linkRegionsConstrainedToLineAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
