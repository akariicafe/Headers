@class NSArray, NSString, NSMutableDictionary, NSSet;

@interface IMDAccountController : NSObject <IDSAccountDelegate> {
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    NSSet *_operationalAccountsCache;
    BOOL _isFirstLoad;
}

@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) NSArray *activeAccounts;
@property (readonly, nonatomic) NSArray *connectedAccounts;
@property (readonly, nonatomic) NSArray *connectingAccounts;
@property (readonly, nonatomic) NSArray *activeSessions;
@property (nonatomic) BOOL networkDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedAccountController;

- (void)removeAccount:(id)a0;
- (void)addAccount:(id)a0;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)deactivateAccounts:(id)a0 force:(BOOL)a1;
- (id)accountForIDSAccountUniqueID:(id)a0;
- (void)load;
- (void)deactivateAccount:(id)a0;
- (id)sessionForAccount:(id)a0;
- (id)activeAliases;
- (BOOL)_isOperationalForAccount:(id)a0;
- (void)_checkPowerAssertion;
- (BOOL)hasActivePhoneAccount;
- (id)accountForHandle:(id)a0;
- (void)save;
- (id)accountsForLoginID:(id)a0 onService:(id)a1;
- (void)activateAccount:(id)a0;
- (void)deferredSave;
- (id)anySessionForServiceName:(id)a0;
- (id)_operationalAccounts;
- (id)accountsForService:(id)a0;
- (BOOL)activeAccountsAreEligibleForHawking;
- (BOOL)accountAssociatedWithHandle:(id)a0;
- (BOOL)_isAccountActive:(id)a0 forService:(id)a1;
- (void)dealloc;
- (id)activeAccountsForService:(id)a0;
- (BOOL)receiverIsCandidateForJunk:(id)a0 forAccount:(id)a1;
- (id)init;
- (BOOL)receiverIsCandidateForHawking:(id)a0;
- (id)connectingAccountsForService:(id)a0;
- (void)_daemonWillShutdown:(id)a0;
- (id)_nicknameController;
- (void)deactivateAccount:(id)a0 force:(BOOL)a1;
- (void)deactivateAccounts:(id)a0;
- (id)connectedAccountsForService:(id)a0;
- (void).cxx_destruct;
- (void)_rebuildOperationalAccountsCache;
- (BOOL)isAccountActive:(id)a0;
- (id)accountForAccountID:(id)a0;
- (void)activateAccounts:(id)a0;

@end
