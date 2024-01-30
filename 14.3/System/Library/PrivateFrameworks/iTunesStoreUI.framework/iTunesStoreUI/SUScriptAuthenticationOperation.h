@class NSNumber, UIViewController, SSMutableAuthenticationContext;

@interface SUScriptAuthenticationOperation : ISOperation {
    SSMutableAuthenticationContext *_authenticationContext;
}

@property (retain) NSNumber *authenticatedDSID;
@property (retain) UIViewController *presentingViewController;

- (void)run;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountIdentifier:(id)a0;
- (id)authenticatedAccountDSID;
- (void)sendCompletionCallback:(id)a0;
- (void)setScriptOptions:(id)a0;

@end
