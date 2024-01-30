@interface AppStoreKitInternal.AccountPresenter : AppStoreKitInternal.BasePresenter {
    void /* unknown type, empty encoding */ appStateController;
    void /* unknown type, empty encoding */ restrictions;
    void /* unknown type, empty encoding */ gameCenterFriendRequestCoordinator;
    void /* unknown type, empty encoding */ storeAccountStore;
    void /* unknown type, empty encoding */ iCloudAccountStore;
    void /* unknown type, empty encoding */ iapStateProvider;
    void /* unknown type, empty encoding */ updatesPresenter;
    void /* unknown type, empty encoding */ activeStoreAccount;
    void /* unknown type, empty encoding */ hasManagedAppleID;
    void /* unknown type, empty encoding */ canSetupFamilySharing;
    void /* unknown type, empty encoding */ arcadeSubscriptionManager;
    void /* unknown type, empty encoding */ hasSubscriptions;
    void /* unknown type, empty encoding */ profilePictureDiameter;
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ profilePicture;
    void /* unknown type, empty encoding */ authenticating;
    void /* unknown type, empty encoding */ accountNameInputValue;
    void /* unknown type, empty encoding */ passwordInputValue;
    void /* unknown type, empty encoding */ accountLinks;
    void /* unknown type, empty encoding */ manageSubscriptionsURL;
    void /* unknown type, empty encoding */ localPlayer;
    void /* unknown type, empty encoding */ hasPrimaryiCloudAccount;
    void /* unknown type, empty encoding */ snapshotQueue;
    void /* unknown type, empty encoding */ onApplySnapshot;
    void /* unknown type, empty encoding */ contentSnapshot;
    void /* unknown type, empty encoding */ $__lazy_storage_$_notificationsAccountSectionLink;
}

- (void)restrictionsDidChange:(id)a0;
- (void)automaticUpdatesEnabledDidChange;
- (void)familyInfoDidChange;
- (void)iCloudAccountsDidChange;
- (void)profilePictureStoreDidChange;
- (void)storeAccountsDidChange;

@end
