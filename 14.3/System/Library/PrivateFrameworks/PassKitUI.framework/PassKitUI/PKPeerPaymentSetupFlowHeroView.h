@class UIImageView, PKPeerPaymentCredential, PKPeerPaymentHeroBubbleView;

@interface PKPeerPaymentSetupFlowHeroView : UIView {
    UIImageView *_passSnapshotView;
    PKPeerPaymentHeroBubbleView *_bubbleView;
    PKPeerPaymentCredential *_credential;
    long long _animationState;
}

- (void).cxx_destruct;
- (void)_updateImageViewDynamicColors;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (void)startAnimation;
- (BOOL)_shouldShowBubbleView;
- (id)_defaultCurrencyAmount;
- (BOOL)_bubbleIsOnLeftSide;
- (void)startAnimationWithCompletion:(id /* block */)a0;
- (id)initWithPeerPaymentPassSnapShot:(id)a0 peerPaymentCredential:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
