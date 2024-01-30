@class NSDecimalNumber, NSString, UIColor, UIFont, NSNumber, PKNumberPadInputView, NSNumberFormatter, UIView, UITextField, UILabel, NSDecimalNumberHandler;
@protocol PKEnterCurrencyAmountViewDelegate;

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate> {
    UIView *_internalInputAccessoryView;
    UIColor *_keyboardColor;
}

@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) PKNumberPadInputView *numberPad;
@property (retain, nonatomic) NSDecimalNumberHandler *roundingBehavior;
@property (retain, nonatomic) NSNumberFormatter *amountFormatter;
@property (retain, nonatomic) NSNumberFormatter *currencySymbolAmountFormatter;
@property (copy, nonatomic) NSString *amountString;
@property (nonatomic) BOOL isFirstKeyboardInput;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutBoundsSize;
@property (nonatomic) double labelScaleFactor;
@property (nonatomic) BOOL showsDecimalPointButton;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL ignoreIntegralNumber;
@property (nonatomic) BOOL clearAmountOnFirstKeyboardInput;
@property (readonly, nonatomic) UITextField *amountTextField;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSDecimalNumber *currentAmount;
@property (copy, nonatomic) UIColor *keyboardColor;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIFont *amountFont;
@property (copy, nonatomic) UIFont *currencySymbolFont;
@property (copy, nonatomic) NSNumber *kerning;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (weak, nonatomic) id<PKEnterCurrencyAmountViewDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } defaultKeyboardSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultTextColor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (void)showKeyboard;
- (id)viewForLastBaselineLayout;
- (void)_updateContent;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_createSubviews;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)dismissKeyboard;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithCurrency:(id)a0 amount:(id)a1;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;
- (void)_addSuperscriptToAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_addSuperscriptToAttributedString:(id)a0 formattedCurrencyAmount:(id)a1 currencyAmountWithoutSymbols:(id)a2;
- (void)_createAmountFormatter;
- (id)_formatAmount:(id)a0 minimumFractionDigits:(unsigned long long)a1;
- (id)_decimalNumberFromString:(id)a0;
- (unsigned long long)_numberOfDecimalPlacesInString:(id)a0 decimalSeperator:(id)a1;
- (id)_formatAmountForDisplay:(id)a0 alwaysShowDecimalSeparator:(BOOL)a1 minimumFractionDigits:(unsigned long long)a2 useGroupingSeparator:(BOOL)a3;

@end
