@class NSDecimalNumber, NSString, NSNumberFormatter, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;
@protocol PKEnterValueNewBalanceViewDelegate;

@interface PKEnterValueNewBalanceView : UIView <UIGestureRecognizerDelegate> {
    NSDecimalNumber *_additionalAmount;
    BOOL _subtractAdditionalAmountFromCurrentAmount;
    BOOL _showSpinner;
    NSNumberFormatter *_currentAmountFormatter;
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (copy, nonatomic) NSString *promptText;
@property (copy, nonatomic) NSString *updatedBalancePromptText;
@property (copy, nonatomic) NSString *maxLoadAmountText;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSDecimalNumber *cardBalance;
@property (copy, nonatomic) NSDecimalNumber *maxBalance;
@property (copy, nonatomic) NSDecimalNumber *minBalance;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (weak, nonatomic) id<PKEnterValueNewBalanceViewDelegate> delegate;
@property (nonatomic) BOOL amountIsWithdrawal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_addSubviews;
- (void)_createAmountFormatter;
- (id)_minimalFormattedStringForAmount:(id)a0;
- (id)_textForPrompt:(id)a0 amount:(id)a1;
- (void)_updateAdditionalAmount:(id)a0 subtractAdditionalAmountFromCurrentAmount:(BOOL)a1;
- (void)_updateBalanceText;
- (void)addAmountToBalance:(id)a0;
- (void)currentBalanceTapRecognized;
- (id)initWithCurrencyCode:(id)a0;
- (void)showSpinner:(BOOL)a0;
- (void)subtractAmountFromBalance:(id)a0;

@end
