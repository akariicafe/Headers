@class NSArray, MPCPlaybackAccount, MPCPlaybackEngine, NSMutableDictionary, NSObject;
@protocol OS_dispatch_group;

@interface _MPCPlaybackAccountManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_accounts;
    BOOL _needsRefreshDueToTimeout;
    NSObject<OS_dispatch_group> *_initialAccountGroup;
}

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) BOOL hasLoadedInitialAccounts;
@property (readonly, nonatomic) MPCPlaybackAccount *activeAccount;

- (void)performAfterLoadingAccounts:(id /* block */)a0;
- (id)accountForDSID:(id)a0;
- (void)_buildAccountFromDelegatedIdentity:(id)a0 completion:(id /* block */)a1;
- (void)_enumerateIdentitiesWithCompletion:(id /* block */)a0;
- (void)_buildAccountFromLocalIdentity:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldPurgeGlideSubscriptionDataForAccount:(id)a0;
- (void)_updateAccountsWithAttemptCount:(long long)a0;
- (void).cxx_destruct;
- (id)accountForUserIdentity:(id)a0;
- (void)_userIdentityStoreChangedNotification:(id)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (id)accountForHashedDSID:(id)a0;
- (void)_updateAccounts;
- (void)_subscriptionStatusChangedNotification:(id)a0;
- (void)_homeUserSettingsChangeNotification:(id)a0;

@end
