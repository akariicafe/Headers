@class NSString;

@interface ACUIDefaultAddAccountDataSource : NSObject <ACUIAddAccountDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountControllerCompletedWithAccount:(id)a0 action:(long long)a1 data:(id)a2 specifier:(id)a3 viewController:(id)a4 completion:(id /* block */)a5;
- (void)configureAccountCreationController:(id)a0;
- (void)configureSpecifierForOtherAccountSpecifier:(id)a0;
- (Class)controllerClassForCreatingAccountWithType:(id)a0 withViewProviderManager:(id)a1;
- (void)hasAccountWithType:(id)a0 accountStore:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldAddSpecifierForAccountTypeID:(id)a0;
- (Class)viewControllerClassForCreatingAccountWithType:(id)a0 withViewProviderManager:(id)a1;
- (Class)viewControllerClassForCreatingOtherAccountTypes;

@end
