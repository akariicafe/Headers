@class NSNumber, UIViewController, SSMutableAuthenticationContext;

@interface SUScriptAuthenticationOperation : ISOperation {
    SSMutableAuthenticationContext *_authenticationContext;
}

@property (retain) NSNumber *authenticatedDSID;
@property (retain) UIViewController *presentingViewController;

- (void)run;
- (id)authenticatedAccountDSID;
- (id)initWithAccountIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)sendCompletionCallback:(id)a0;
- (void)setScriptOptions:(id)a0;

@end
