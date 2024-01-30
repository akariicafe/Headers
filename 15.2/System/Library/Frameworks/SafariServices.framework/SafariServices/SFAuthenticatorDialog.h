@class NSString, NSArray, _SFDialogView, _WKWebAuthenticationAssertionResponse, _WKWebAuthenticationPanel;

@interface SFAuthenticatorDialog : _SFDialog <_SFAuthenticatorDialog> {
    _SFDialogView *_dialogView;
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

- (void)transitionToState:(long long)a0;
- (long long)presentationStyle;
- (void)_shake;
- (void).cxx_destruct;
- (void)dealloc;
- (id)useSecurityKeyAction;
- (void)triggerUseSecurityKey;
- (void)_didSelectRow:(id)a0;
- (void)updateWebAuthenticationPanel:(long long)a0;
- (void)requestPINWithRemainingRetries:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)selectAssertionResponse:(id)a0 source:(long long)a1 completionHandler:(id /* block */)a2;
- (void)decidePolicyForLocalAuthenticatorWithCompletionHandler:(id /* block */)a0;
- (id)initWithPanel:(id)a0;
- (id)newDialogViewRepresentation;
- (void)didCompleteWithResponse:(id)a0;

@end
