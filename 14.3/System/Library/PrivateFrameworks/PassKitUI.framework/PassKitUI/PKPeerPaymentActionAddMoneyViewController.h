@class PKNumericSuggestionsEnterValueAlgorithm, NSString, PKNumberPadSuggestionsView, UIScrollView, PKEnterCurrencyAmountPassView;

@interface PKPeerPaymentActionAddMoneyViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPeerPaymentActionControllerDelegate, PKEnterCurrencyAmountPassViewDelegate> {
    PKNumericSuggestionsEnterValueAlgorithm *_suggestionGenerator;
    PKNumberPadSuggestionsView *_suggestionView;
    UIScrollView *_scrollView;
    PKEnterCurrencyAmountPassView *_amountPassView;
    BOOL _keyboardVisible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3;
- (void)updateFirstResponder;
- (void)updateAccountValues;
- (void)willDismissViewController;
- (void)peerPaymentActionController:(id)a0 hasChangedState:(unsigned long long)a1;
- (void)setMinBalance:(id)a0;
- (void)loadView;
- (void)keyboardWillChange:(id)a0;
- (id)_spinnerBarButton;
- (void)setMaxBalance:(id)a0;
- (void)setMinLoadAmount:(id)a0;
- (void)setMaxLoadAmount:(id)a0;
- (void)setCardBalance:(id)a0;
- (void)_showNavigationBarSpinner:(BOOL)a0;
- (void)_updateCurrentAmount:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (void)_updateBarButtonEnabledState;
- (void)_currentAmountDidChangeTo:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (BOOL)_isCurrentAmountValid;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (id)_addBarButton;
- (void)_addBarButtonPressed:(id)a0;
- (BOOL)_shouldShakeCard:(id)a0;
- (void)numberPadSuggestionsView:(id)a0 didSelectSuggestion:(id)a1;
- (BOOL)enterCurrencyAmountView:(id)a0 shouldChangeAmountFrom:(id)a1 to:(id)a2;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)viewWillLayoutSubviews;

@end
