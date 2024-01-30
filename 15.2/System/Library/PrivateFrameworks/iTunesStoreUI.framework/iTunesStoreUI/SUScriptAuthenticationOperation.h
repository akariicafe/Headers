@class NSNumber, UIViewController, SSMutableAuthenticationContext;

@interface SUScriptAuthenticationOperation : ISOperation {
    SSMutableAuthenticationContext *_authenticationContext;
}

@property (retain) NSNumber *authenticatedDSID;
@property (retain) UIViewController *presentingViewController;

- (id)initWithAccountIdentifier:(id)a0;
- (void)run;
- (id)authenticatedAccountDSID;
- (void).cxx_destruct;
- (id)init;
- (void)sendCompletionCallback:(id)a0;
- (void)setScriptOptions:(id)a0;

@end
