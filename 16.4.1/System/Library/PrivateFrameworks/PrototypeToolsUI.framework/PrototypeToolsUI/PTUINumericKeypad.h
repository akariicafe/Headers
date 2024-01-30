@class UIView, NSString, NSArray, NSNumber, NSMutableArray, _KeypadButton, _KeypadDismissButton, UILabel;
@protocol PTUINumericKeypadDelegate;

@interface PTUINumericKeypad : UIView <_KeypadButtonTarget> {
    id<PTUINumericKeypadDelegate> _delegate;
    BOOL _showing;
    UILabel *_valueLabel;
    NSArray *_digitButtons;
    _KeypadButton *_dotButton;
    _KeypadButton *_signButton;
    _KeypadButton *_clearButton;
    _KeypadButton *_backspaceButton;
    _KeypadDismissButton *_dismissButton;
    UIView *_backgroundView;
    NSMutableArray *_digitsBeforeDot;
    NSMutableArray *_digitsAfterDot;
    BOOL _negative;
    BOOL _hasDot;
    NSNumber *_cachedNumberValue;
    NSString *_cachedStringValue;
}

@property (nonatomic) double doubleValue;
@property (retain, nonatomic) NSString *stringValue;

+ (id)sharedKeypad;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_clear;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_backspace;
- (void)hideAnimated:(BOOL)a0;
- (void)_flash;
- (void)_appendDigit:(unsigned long long)a0;
- (void)_changeSign;
- (void)_dismissButtonPress;
- (void)_appendDot;
- (double)_layoutButtonRow:(id)a0 atY:(double)a1;
- (double)_layoutButtonRow:(id)a0 atY:(double)a1 stretch:(BOOL)a2;
- (unsigned long long)_remainingAllowedDigits;
- (void)_updateDisplayedValue;
- (void)keyPress:(id)a0;
- (void)showAnimated:(BOOL)a0 forDelegate:(id)a1;

@end
