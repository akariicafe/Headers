@class UIColor, NSArray, NSString, UITextInputPasswordRules, UILabel, UIView, NSMutableString;

@interface RPPINEntryView : UIView <UIKeyInput, UITextInputTraits> {
    NSMutableString *_text;
}

@property (nonatomic) BOOL alphaNumeric;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) UILabel *label1;
@property (retain, nonatomic) UILabel *label2;
@property (retain, nonatomic) UILabel *label3;
@property (retain, nonatomic) UILabel *label4;
@property (retain, nonatomic) UILabel *label5;
@property (retain, nonatomic) UILabel *label6;
@property (retain, nonatomic) UILabel *label7;
@property (retain, nonatomic) UILabel *label8;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ textChangedHandler;
@property (retain, nonatomic) NSArray *wells;
@property (retain, nonatomic) UIView *well1;
@property (retain, nonatomic) UIView *well2;
@property (retain, nonatomic) UIView *well3;
@property (retain, nonatomic) UIView *well4;
@property (retain, nonatomic) UIView *well5;
@property (retain, nonatomic) UIView *well6;
@property (retain, nonatomic) UIView *well7;
@property (retain, nonatomic) UIView *well8;
@property (retain, nonatomic) UIColor *wellFocusColor;
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

- (void)awakeFromNib;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)insertText:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)deleteBackward;
- (void).cxx_destruct;
- (void)_updateFields;

@end
