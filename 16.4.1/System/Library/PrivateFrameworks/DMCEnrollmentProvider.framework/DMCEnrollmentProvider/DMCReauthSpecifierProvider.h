@class PSListController;

@interface DMCReauthSpecifierProvider : DMCSpecifierProvider

@property (readonly, weak, nonatomic) PSListController *presenter;

- (id)initWithAccount:(id)a0;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1;
- (void)presentReauthFlow:(id)a0;
- (BOOL)_shouldAutoPresentReauthFlow;
- (id)_reauthSpecifier;
- (id)specifiers;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;

@end
