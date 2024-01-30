@class UIView, NSString, NSArray, UITextInputPasswordRules, UITapGestureRecognizer, UITextRange, NSDictionary, NSMutableString, UITextPosition, UILabel;
@protocol UITextInputDelegate, UITextInputTokenizer;

@interface ENUIVerificationCodeEntryView : UIView <UITextInput> {
    NSMutableString *_stringValue;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _passcodeFieldDisabled;
}

@property (retain, nonatomic) NSArray *generatorFields;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (readonly, nonatomic) UILabel *firstGeneratorField;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) id /* block */ didEnterDigit;
@property (copy, nonatomic) id /* block */ didEnterCode;
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

+ (id)maximumContentSizeCategory;
+ (id)textStyle;
+ (id)generatorFieldFont;

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
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (long long)baseWritingDirectionForPosition:(id)a0 inDirection:(long long)a1;
- (void)passcodeFieldTapped:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (long long)comparePosition:(id)a0 toPosition:(id)a1;
- (void)_updateFonts:(id)a0;
- (void)_syncStringValueToLabels;
- (void)emitCodeEnteredNotification;
- (void)setPasscodeFieldDisabled:(BOOL)a0;

@end
