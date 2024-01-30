@class UIImageView, PKPeerPaymentCredential, PKPeerPaymentHeroBubbleView;

@interface PKPeerPaymentSetupFlowHeroView : UIView {
    UIImageView *_passSnapshotView;
    PKPeerPaymentHeroBubbleView *_bubbleView;
    PKPeerPaymentCredential *_credential;
    long long _animationState;
}

- (void)startAnimation;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithPeerPaymentPassSnapShot:(id)a0 peerPaymentCredential:(id)a1;
- (void)_updateImageViewDynamicColors;
- (BOOL)_shouldShowBubbleView;
- (id)_defaultCurrencyAmount;
- (BOOL)_bubbleIsOnLeftSide;
- (void)startAnimationWithCompletion:(id /* block */)a0;

@end
