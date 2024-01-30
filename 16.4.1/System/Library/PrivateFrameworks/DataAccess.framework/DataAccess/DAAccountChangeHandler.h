@interface DAAccountChangeHandler : NSObject

+ (id)_pickAccountToKeepWithAccount:(id)a0 andAccount:(id)a1;
+ (void)_handleAccountDelete:(id)a0 withChangeInfo:(id)a1 inStore:(id)a2;
+ (id)_accountTypeWithIdentifier:(id)a0 inStore:(id)a1;
+ (void)handleAccountDidChange:(id)a0 withChangeInfo:(id)a1 store:(id)a2;
+ (BOOL)_handleCalDAVAccountModifiedByDataAccess:(id)a0 withChangeInfo:(id)a1 inStore:(id)a2 accountUpdater:(id)a3;
+ (BOOL)_sanityCheckCalDAVAccount:(id)a0 accountChangeInfo:(id)a1;
+ (BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)a0;
+ (BOOL)_updateCalendarFromAccount:(id)a0;
+ (BOOL)_sanityCheckChildAccountOfType:(id)a0 withParent:(id)a1 accountChangeInfo:(id)a2 inStore:(id)a3 updater:(id)a4;
+ (BOOL)_handleChangeToSubscribedCalendar:(id)a0 withChangeInfo:(id)a1 inStore:(id)a2 accountUpdater:(id)a3;
+ (BOOL)_sanityCheckChildSubCalAccountsWithParent:(id)a0 inStore:(id)a1 accountUpdater:(id)a2;
+ (BOOL)handleAccountWillChange:(id)a0 withChangeInfo:(id)a1 store:(id)a2 accountUpdater:(id)a3;
+ (void)_performBlockWithGenericClientDBForAccount:(id)a0 block:(id /* block */)a1;
+ (id)_supportedChildAccountTypesForParentAccountType:(id)a0;
+ (void)_setupStoreForNewAccount:(id)a0;
+ (void)_cleanupStoreForDisabledAccount:(id)a0 inStore:(id)a1;
+ (BOOL)_updateSubscribedCalendarAccountProperties:(id)a0;
+ (BOOL)_sanityCheckChildDAVAccount:(id)a0 withParent:(id)a1 accountChangeInfo:(id)a2;
+ (id)_findSubscribedCalendarForAccount:(id)a0 inEventStore:(id)a1;
+ (BOOL)_sanityCheckSubscribedCalendarAccountInfo:(id)a0;
+ (BOOL)_handleAccountAddOrModify:(id)a0 withChangeInfo:(id)a1 inStore:(id)a2 accountUpdater:(id)a3;

@end
