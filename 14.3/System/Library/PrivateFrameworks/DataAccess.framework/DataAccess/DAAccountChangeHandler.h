@interface DAAccountChangeHandler : NSObject

+ (BOOL)_handleAccountAddOrModify:(id)a0 withChangeInfo:(id)a1 inStore:(id)a2 accountUpdater:(id)a3;
+ (BOOL)_handleCalDAVAccountModifiedByDataAccess:(id)a0 withChangeInfo:(id)a1 inStore:(id)a2 accountUpdater:(id)a3;
+ (void)_handleAccountDelete:(id)a0 withChangeInfo:(id)a1 inStore:(id)a2;
+ (void)_cleanupStoreForDisabledAccount:(id)a0 inStore:(id)a1;
+ (void)_setupStoreForNewAccount:(id)a0;
+ (BOOL)_sanityCheckChildSubCalAccountsWithParent:(id)a0 inStore:(id)a1 accountUpdater:(id)a2;
+ (void)_sanityCheckCalDAVAccount:(id)a0 modifiedDataClasses:(id)a1;
+ (BOOL)_sanityCheckChildAccountOfType:(id)a0 withParent:(id)a1 accountChangeInfo:(id)a2 inStore:(id)a3 updater:(id)a4;
+ (BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)a0;
+ (void)_performBlockWithGenericClientDB:(id /* block */)a0;
+ (id)_accountTypeWithIdentifier:(id)a0 inStore:(id)a1;
+ (id)_pickAccountToKeepWithAccount:(id)a0 andAccount:(id)a1;
+ (BOOL)_sanityCheckChildDAVAccount:(id)a0 withParent:(id)a1 modifiedDataClasses:(id)a2;
+ (BOOL)handleAccountWillChange:(id)a0 withChangeInfo:(id)a1 store:(id)a2 accountUpdater:(id)a3;
+ (void)handleAccountDidChange:(id)a0 withChangeInfo:(id)a1 store:(id)a2;

@end
