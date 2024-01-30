@class NSString, UITextInputPasswordRules, NSMutableString, NSArray;
@protocol PRXPasscodeEntryViewDelegate;

@interface PRXPasscodeEntryView : UIControl <UIKeyInput> {
    NSMutableString *_text;
    NSArray *_wells;
}

@property (weak, nonatomic) id<PRXPasscodeEntryViewDelegate> delegate;
@property (readonly, nonatomic) long long numberOfDigits;
@property (readonly, nonatomic) BOOL useMonospacedFont;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long keyboardType;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
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

+ (struct CGSize { double x0; double x1; })preferredSizeForNumberOfDigits:(long long)a0;
+ (id)fontForNumberOfDigits:(long long)a0 useMonospacedFont:(BOOL)a1;
+ (double)interWellSpacingForNumberOfDigits:(long long)a0;
+ (double)wellCornerRadiusForNumberOfDigits:(long long)a0;
+ (struct CGSize { double x0; double x1; })wellSizeForNumberOfDigits:(long long)a0;

- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertText:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)deleteBackward;
- (void).cxx_destruct;
- (void)_updateWells;
- (id)initWithNumberOfDigits:(long long)a0 useMonospacedFont:(BOOL)a1 delegate:(id)a2;

@end
