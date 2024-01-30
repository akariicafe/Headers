@class NSString, PKPassSharePendingActivation;

@interface PKPassShareActivationViewController : PKPassShareRedemptionViewController {
    NSString *_activationCode;
    PKPassSharePendingActivation *_pendingActivation;
}

- (void)cancelButtonPressed;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)_showError:(id)a0;
- (void)activationCodeDidChangeToCode:(id)a0;
- (void)continueButtonPressed;
- (id)initWithPendingActivation:(id)a0;
- (void)loadCardArt;

@end
