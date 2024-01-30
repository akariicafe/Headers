@class UIColor, NSArray, NSString, UITextInputPasswordRules, NSMutableString, NSMutableArray;
@protocol PSPasscodeFieldDelegate;

@interface PSPasscodeField : UIView <UIKeyInput> {
    NSMutableArray *_dotOutlineViews;
    NSMutableArray *_dotFullViews;
    NSMutableArray *_dashViews;
    NSMutableArray *_digitViews;
    NSMutableString *_stringValue;
}

@property (weak, nonatomic) id<PSPasscodeFieldDelegate> delegate;
@property (nonatomic) unsigned long long numberOfEntryFields;
@property (nonatomic) BOOL securePasscodeEntry;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) long long keyboardAppearance;
@property (retain, nonatomic) NSArray *fieldSpacing;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL shouldBecomeFirstResponderOnTap;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)stringValue;
- (void)deleteBackward;
- (void)insertText:(id)a0;
- (void)setStringValue:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)passcodeFieldTapped:(id)a0;
- (void)_delegateEnteredPasscode:(id)a0;
- (id)initWithNumberOfEntryFields:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;

@end
