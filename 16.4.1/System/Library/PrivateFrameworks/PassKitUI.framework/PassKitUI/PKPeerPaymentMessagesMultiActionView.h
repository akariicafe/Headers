@class UIActivityIndicatorView, UIView, PKPeerPaymentMessagesMultiActionViewButton;

@interface PKPeerPaymentMessagesMultiActionView : UIView {
    PKPeerPaymentMessagesMultiActionViewButton *_leadingButton;
    PKPeerPaymentMessagesMultiActionViewButton *_trailingButton;
    UIActivityIndicatorView *_leadingActivityIndicator;
    UIActivityIndicatorView *_trailingActivityIndicator;
    UIView *_leadingActivityIndicatorBackground;
    UIView *_trailingActivityIndicatorBackground;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } referenceSize;

@property (nonatomic) unsigned long long leadingAction;
@property (nonatomic) unsigned long long trailingAction;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL usesFlexibleButtonWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)_button;
- (id)_axIdentifierForAction:(unsigned long long)a0;
- (void)_handleActionButton:(id)a0;
- (id)_titleForAction:(unsigned long long)a0;
- (void)setActivityIndicatorVisible:(BOOL)a0 forAction:(unsigned long long)a1;

@end
