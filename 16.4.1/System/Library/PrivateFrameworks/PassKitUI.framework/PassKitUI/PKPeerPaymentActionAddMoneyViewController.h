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

- (void)keyboardWillHide:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)keyboardWillChange:(id)a0;
- (void)setCardBalance:(id)a0;
- (void)setMaxBalance:(id)a0;
- (void)setMaxLoadAmount:(id)a0;
- (void)setMinBalance:(id)a0;
- (void)setMinLoadAmount:(id)a0;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (id)_addBarButton;
- (void)_addBarButtonPressed:(id)a0;
- (void)_currentAmountDidChangeTo:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (BOOL)_isCurrentAmountValid;
- (BOOL)_shouldShakeCard:(id)a0;
- (void)_showNavigationBarSpinner:(BOOL)a0;
- (id)_spinnerBarButton;
- (void)_updateBarButtonEnabledState;
- (void)_updateCurrentAmount:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)a0;
- (BOOL)enterCurrencyAmountView:(id)a0 shouldChangeAmountFrom:(id)a1 to:(id)a2;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)a0;
- (void)numberPadSuggestionsView:(id)a0 didSelectSuggestion:(id)a1;
- (void)peerPaymentActionController:(id)a0 hasChangedState:(unsigned long long)a1;
- (id)presentationSceneIdentifierForPeerPaymentActionController:(id)a0;
- (void)updateAccountValues;
- (void)updateFirstResponder;
- (void)willDismissViewController;

@end
