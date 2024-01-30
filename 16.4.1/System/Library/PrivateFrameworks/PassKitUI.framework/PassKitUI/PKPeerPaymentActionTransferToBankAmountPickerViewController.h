@class NSString, UIScrollView, PKEnterCurrencyAmountPassView;

@interface PKPeerPaymentActionTransferToBankAmountPickerViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate, PKEnterCurrencyAmountPassViewDelegate> {
    UIScrollView *_scrollView;
    PKEnterCurrencyAmountPassView *_amountPassView;
    unsigned char _visibility;
    BOOL _keyboardVisible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKeyboardFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)keyboardWillHide:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)keyboardWillChange:(id)a0;
- (void)setCardBalance:(id)a0;
- (void)setMaxBalance:(id)a0;
- (void)setMaxLoadAmount:(id)a0;
- (void)setMinBalance:(id)a0;
- (void)setMinLoadAmount:(id)a0;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (void)_currentAmountDidChangeTo:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (BOOL)_isCurrentAmountValid;
- (id)_nextBarButton;
- (void)_nextBarButtonPressed:(id)a0;
- (BOOL)_shouldShakeWithNewAmount:(id)a0;
- (void)_updateBarButtonEnabledState;
- (void)_updateCurrentAmount:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)a0;
- (BOOL)enterCurrencyAmountView:(id)a0 shouldChangeAmountFrom:(id)a1 to:(id)a2;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)a0;
- (void)updateAccountValues;
- (void)updateFirstResponder;
- (void)willDismissViewController;

@end
