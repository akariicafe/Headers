@class TVRCPINEntryAttributes, NSString, NSMutableString, UITextInputPasswordRules;

@interface _TVRPasscodeField : UIControl <UIKeyInput>

@property (retain, nonatomic) NSMutableString *mutablePasscode;
@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryattributes;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL useSystemColors;
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
- (struct CGSize { double x0; double x1; })_contentSize;
- (void)deleteBackward;
- (void)clear;
- (BOOL)acceptsFloatingKeyboard;
- (void).cxx_destruct;
- (BOOL)acceptsSplitKeyboard;
- (BOOL)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_contentWidthWithDotSize:(double)a0 entrySpacing:(double)a1 groupSpacing:(double)a2;

@end
