@class NSArray, NSString, UITextInputPasswordRules, UILabel, NSMutableString, UITapGestureRecognizer;

@interface AKCodeEntryView : UIView <UIKeyInput> {
    NSMutableString *_stringValue;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _passcodeFieldDisabled;
}

@property (retain, nonatomic) NSArray *generatorFields;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (readonly, nonatomic) UILabel *firstGeneratorField;
@property (copy, nonatomic) NSString *stringValue;
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

+ (id)generatorFieldFont;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)deleteBackward;
- (void)insertText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)passcodeFieldTapped:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)setPasscodeFieldDisabled:(BOOL)a0;
- (void)_updateFonts:(id)a0;
- (void)_syncStringValueToLabels;
- (void)emitCodeEnteredNotification;

@end
