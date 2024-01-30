@class UIView, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer, NSNumberFormatter, PKCurrencyAmount, NSObject, PKPeerPaymentMessagesRoundedButton, NSDecimalNumber, UILabel;
@protocol OS_dispatch_source;

@interface PKPeerPaymentMessagesAmountStepperView : UIView <UIGestureRecognizerDelegate> {
    PKPeerPaymentMessagesRoundedButton *_plusButton;
    PKPeerPaymentMessagesRoundedButton *_minusButton;
    UIView *_centerView;
    UILabel *_amountLabel;
    UILabel *_showKeypadLabel;
    NSString *_amountString;
    NSString *_amountCurrency;
    NSNumberFormatter *_currencyFormatter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSObject<OS_dispatch_source> *_longPressTimer;
    BOOL _longPressTimerSuspended;
    BOOL _nextNumberPadActionCausesReset;
    BOOL _usesAccessibilityLayout;
    BOOL _usedStepper;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } referenceSize;

@property (copy, nonatomic) PKCurrencyAmount *amount;
@property (copy, nonatomic) NSDecimalNumber *minAmount;
@property (copy, nonatomic) NSDecimalNumber *maxAmount;
@property (copy, nonatomic) id /* block */ amountChangedHandler;
@property (copy, nonatomic) id /* block */ amountTappedHandler;
@property (nonatomic) BOOL canShowKeypad;
@property (nonatomic, getter=isKeypadVisible) BOOL keypadVisible;
@property (nonatomic) BOOL usedKeypad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_handleTap:(id)a0;
- (void)_handleLongPress:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_updateContent;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (id)_stringForAction:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)_posixFormatter;
- (void)_cleanupPosixString;
- (id)_decimalNumberFromPosixString:(id)a0;
- (void)_decrementAmount;
- (void)_incrementAmount;
- (BOOL)_isCompactUI;
- (BOOL)_plusAndMinusVisible;
- (id)_posixLocale;
- (id)_posixStringFromDecimalNumber:(id)a0;
- (void)_shakeAmountLabel;
- (id)_updatePosixString:(id)a0 withAction:(unsigned long long)a1 maxDigits:(unsigned long long)a2 maxDecimalPlaces:(unsigned long long)a3;
- (void)handleNumberPadAction:(unsigned long long)a0;
- (void)setPlusAndMinusVisible:(BOOL)a0;
- (void)validateNumberPadInput;

@end
