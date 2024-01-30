@class UILabel, NSString, UITextView, PKNumberPadSuggestionsView, PKAccountBillPaymentAmountContainerView, PKAccountServiceAccountResolutionCofiguration, PKAccount, NSDecimalNumber, PKBillPaymentSuggestedAmountList;
@protocol PKAccountBillPaymentAmountDescriptionViewDelegate;

@interface PKAccountBillPaymentAmountDescriptionView : UIView <PKNumberPadSuggestionsViewDelegate, UITextViewDelegate, PKEnterCurrencyAmountViewDelegate> {
    UILabel *_suggestedAmountTitleLabel;
    UITextView *_suggestedAmountDescriptionView;
    PKNumberPadSuggestionsView *_suggestionView;
    NSDecimalNumber *_enteredAmount;
    NSString *_learnMoreString;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    PKAccount *_account;
    PKAccountServiceAccountResolutionCofiguration *_configuration;
}

@property (weak, nonatomic) id<PKAccountBillPaymentAmountDescriptionViewDelegate> delegate;
@property (readonly, nonatomic) PKAccountBillPaymentAmountContainerView *amountContainerView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSDecimalNumber *minimumAmount;
@property (copy, nonatomic) NSDecimalNumber *maximumAmount;
@property (nonatomic) BOOL showAmount;
@property (nonatomic) BOOL showDescriptionLabels;
@property (nonatomic) BOOL showDescriptionSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)dismissKeyboard;
- (void)layoutSubviews;
- (void)showKeyboard;
- (id)initWithSuggestedAmountList:(id)a0 account:(id)a1 configuration:(id)a2;
- (id)_keypadSuggestions;
- (void)_updateEnteredAmount:(id)a0;
- (BOOL)_shouldShakeWithNewAmount:(id)a0;
- (void)_updateDescriptionAlpha;
- (id)_sugestedAmountDescriptionAttributedString;
- (void)_enteredAmountDidChangeTo:(id)a0;
- (BOOL)_isEnteredAmountValid;
- (void)numberPadSuggestionsView:(id)a0 didSelectSuggestion:(id)a1;
- (BOOL)enterCurrencyAmountView:(id)a0 shouldChangeAmountFrom:(id)a1 to:(id)a2;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
