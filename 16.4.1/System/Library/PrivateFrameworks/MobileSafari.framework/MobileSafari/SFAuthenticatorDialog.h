@class SFDialogView, NSString, NSArray, _WKWebAuthenticationAssertionResponse, _WKWebAuthenticationPanel;

@interface SFAuthenticatorDialog : SFDialog <SFAuthenticatorDialog> {
    SFDialogView *_dialogView;
    long long _state;
    id /* block */ _pinRequestHandler;
    long long _responseSource;
    id /* block */ _selectAssertionResponseHandler;
    _WKWebAuthenticationAssertionResponse *_assertionResponse;
    long long _biometryType;
    id /* block */ _localAuthenticatorPolicyHandler;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) _WKWebAuthenticationPanel *panel;
@property (nonatomic) BOOL isForUpdateOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)presentationStyle;
- (void)transitionToState:(long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_didSelectRow:(id)a0;
- (void)_shake;
- (void)decidePolicyForLocalAuthenticatorWithCompletionHandler:(id /* block */)a0;
- (void)didCompleteWithResponse:(id)a0;
- (id)initWithPanel:(id)a0;
- (id)newDialogViewRepresentation;
- (void)requestPINWithRemainingRetries:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)selectAssertionResponse:(id)a0 source:(long long)a1 completionHandler:(id /* block */)a2;
- (void)triggerUseSecurityKey;
- (void)updateWebAuthenticationPanel:(long long)a0;
- (id)useSecurityKeyAction;

@end
