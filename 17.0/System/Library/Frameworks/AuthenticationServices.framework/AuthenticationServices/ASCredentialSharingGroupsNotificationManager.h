@class NSString, UNUserNotificationCenter;

@interface ASCredentialSharingGroupsNotificationManager : NSObject <WBSAuthenticationServicesAgentCredentialSharingGroupsUserNotificationsProtocol> {
    UNUserNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setDebugIgnoreDateChecksForRecentlyDeletedNotificationsDefault:(BOOL)a0;
- (void)deleteGroupWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)groupsUpdatedWithInfos:(id)a0;
- (void)groupsUpdatedWithInfos:(id)a0 shouldForceShowingNotifications:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)leaveGroupWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyUserAboutSharedSavedAccountsInRecentlyDeleted:(id /* block */)a0;
- (void)_getNumberOfPasswords:(unsigned long long *)a0 numberOfPasskeys:(unsigned long long *)a1 inSavedAccounts:(id)a2;
- (void)_moveSavedAccountsOriginallyContributedByCurrentUserToPersonalKeychainFromGroupID:(id)a0;
- (id)_notificationBodyStringForGroupMembers:(id)a0 addedToGroup:(id)a1;
- (id)_notificationBodyStringForSharedRecentlyDeletedSavedAccount:(id)a0;
- (id)_notificationBodyStringForSharedRecentlyDeletedSavedAccounts:(id)a0;
- (id)_notificationBodyStringForSharedRecentlyDeletedSavedAccountsFromMultipleGroups:(id)a0;
- (id)_notificationBodyStringForSharedRecentlyDeletedSavedAccountsFromSingleGroup:(id)a0;
- (void)_notifyUserAboutGroupMembers:(id)a0 addedToGroup:(id)a1;
- (void)_notifyUserAboutSharedSavedAccountsInRecentlyDeleted:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentNotificationWithContent:(id)a0 completionHandler:(id /* block */)a1;

@end
