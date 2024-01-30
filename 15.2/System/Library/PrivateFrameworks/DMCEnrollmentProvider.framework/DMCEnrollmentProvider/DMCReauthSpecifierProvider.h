@class PSListController;

@interface DMCReauthSpecifierProvider : DMCSpecifierProvider

@property (readonly, weak, nonatomic) PSListController *presenter;

- (BOOL)handleURL:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1;
- (id)_reauthSpecifier;
- (void)presentReauthFlow:(id)a0;
- (BOOL)_shouldAutoPresentReauthFlow;
- (id)initWithAccount:(id)a0 presenter:(id)a1;

@end
