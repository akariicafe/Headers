@class UILabel, PKPaymentProvisioningMethodMetadata, NSDecimalNumber, PKPaymentSetupProduct, UIButton, UIView, PKNumericSuggestionsEnterValueAlgorithm, NSString, NSLayoutConstraint, UITextField, PKEnterCurrencyAmountView, UIStackView, PKNumberPadSuggestionsView;
@protocol PKPaymentSetupPurchaseAmountViewDelegate;

@interface PKPaymentSetupPurchaseAmountView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate> {
    BOOL _transferButtonEnabled;
}

@property (copy, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDecimalNumber *depositAmount;
@property (copy, nonatomic) NSDecimalNumber *minLoadedBalance;
@property (copy, nonatomic) NSDecimalNumber *maxLoadedBalance;
@property (retain, nonatomic) UIStackView *amountStackView;
@property (retain, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView;
@property (retain, nonatomic) NSDecimalNumber *currentAmount;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIView *centeringView;
@property (retain, nonatomic) NSLayoutConstraint *fixedConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centeringConstraint;
@property (nonatomic) BOOL displayingBalanceErrorMessage;
@property (retain, nonatomic) UIButton *transferBalanceButton;
@property (retain, nonatomic) PKNumberPadSuggestionsView *suggestionView;
@property (retain, nonatomic) PKNumericSuggestionsEnterValueAlgorithm *suggestionGenerator;
@property (nonatomic) BOOL showTransferButton;
@property (nonatomic, getter=isTransferButtonEnabled) BOOL transferButtonEnabled;
@property (readonly, nonatomic) UITextField *amountTextField;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } defaultKeyboardSize;
@property (weak, nonatomic) id<PKPaymentSetupPurchaseAmountViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_createConstraints;
- (id)_defaultValues;
- (id)_defaultSuggestions;
- (void)_createSubviews;
- (BOOL)_isAmountValid:(id)a0;
- (BOOL)_shouldShakeCard:(id)a0;
- (void)_transferBalanceButtonTapped:(id)a0;
- (double)_transferButtonBottomOffset;
- (void)_updateCurrentAmount:(id)a0;
- (void)_updateMessageLabelForAmount:(id)a0;
- (BOOL)enterCurrencyAmountView:(id)a0 shouldChangeAmountFrom:(id)a1 to:(id)a2;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)a0;
- (void)enterCurrencyAmountViewDidLayoutKeyboard:(id)a0;
- (id)initWithProduct:(id)a0 provisioningMethodMetadata:(id)a1 showTransferButton:(BOOL)a2;
- (void)numberPadSuggestionsView:(id)a0 didSelectSuggestion:(id)a1;

@end
