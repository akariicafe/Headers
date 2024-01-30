@class UILabel, NSString, UIBarButtonItem, _PKUIKVisibilityBackdropView, UIActivityIndicatorView, PKCurrencyAmount, PKEnterCurrencyAmountView, PKAccount, NSDecimalNumber, UIScrollView;

@interface PKPayLaterEnterAmountViewController : UIViewController <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, _PKUIKVisibilityBackdropViewDelegate, UIScrollViewDelegate> {
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PKAccount *_payLaterAccount;
    NSDecimalNumber *_amount;
    NSString *_currency;
    _PKUIKVisibilityBackdropView *_backdropView;
    PKEnterCurrencyAmountView *_enterAmountView;
    UILabel *_amountDetailsLabel;
    UIBarButtonItem *_spinningItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _showingSpinner;
    BOOL _wasBackHidden;
    BOOL _keyboardVisible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKeyboardFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastSeenValidBounds;
    unsigned char _visibility;
}

@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSDecimalNumber *minAllowedAmount;
@property (retain, nonatomic) NSDecimalNumber *maxAllowedAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillShow:(id)a0;
- (id)headerTitle;
- (id)headerSubtitle;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_keyboardWillHide:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithPayLaterAccount:(id)a0;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (void)_calculateBlur;
- (BOOL)_isCurrentAmountValid;
- (void)_keyboardWillChange:(id)a0;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (BOOL)_shouldShakeWithNewAmount:(id)a0;
- (void)_updateAmount:(id)a0;
- (void)_updateBarButtonEnabledState;
- (void)currencyAmountUpdated:(id)a0;
- (BOOL)enterCurrencyAmountView:(id)a0 shouldChangeAmountFrom:(id)a1 to:(id)a2;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)a0;
- (id)keypadSuggestions;
- (void)nextButtonTapped;
- (void)numberPadSuggestionsView:(id)a0 didSelectSuggestion:(id)a1;
- (void)setAmountDetailsText:(id)a0;
- (BOOL)shouldAllowDecimalInput;
- (void)showNavigationBarSpinner:(BOOL)a0;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;

@end
