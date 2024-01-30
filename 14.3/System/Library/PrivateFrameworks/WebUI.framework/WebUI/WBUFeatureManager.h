@class ACMonitoredAccountStore, NSString, STManagementState, OTClique, ACAccount, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface WBUFeatureManager : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACMonitoredAccountStore *_accountStore;
    ACAccount *_account;
    NSNumber *_cachedShouldRequestMoreTime;
    STManagementState *_managementState;
    OTClique *_keychainClique;
    NSString *_primaryAccountAltDSID;
}

@property (readonly, nonatomic, getter=isAutoFillAvailable) BOOL autoFillAvailable;
@property (readonly, nonatomic, getter=isBookmarksAvailable) BOOL bookmarksAvailable;
@property (readonly, nonatomic, getter=isReadingListAvailable) BOOL readingListAvailable;
@property (readonly, nonatomic, getter=isOfflineReadingListAvailable) BOOL offlineReadingListAvailable;
@property (readonly, nonatomic, getter=isCloudKitBookmarksAvailable) BOOL cloudKitBookmarksAvailable;
@property (readonly, nonatomic, getter=isCloudTabsAvailable) BOOL cloudTabsAvailable;
@property (readonly, nonatomic, getter=isCloudSyncAvailable) BOOL cloudSyncAvailable;
@property (readonly, nonatomic, getter=isCloudHistorySyncAvailable) BOOL cloudHistorySyncAvailable;
@property (readonly, nonatomic, getter=isCreditCardStorageAvailable) BOOL creditCardStorageAvailable;
@property (readonly, nonatomic, getter=isPrivateBrowsingAvailable) BOOL privateBrowsingAvailable;
@property (readonly, nonatomic, getter=isInMemoryBookmarkChangeTrackingAvailable) BOOL inMemoryBookmarkChangeTrackingAvailable;
@property (readonly, nonatomic, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property (readonly, nonatomic, getter=isUserRemotelyManagedAndLocallyRestricted) BOOL userRemotelyManagedAndLocallyRestricted;
@property (readonly, nonatomic, getter=isAirDropPasswordsAvailable) BOOL airDropPasswordsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)accessLevel;
+ (BOOL)shouldOfferVirtualCards;
+ (id)webui_sharedFeatureManager;

- (void)_setAccountOnInternalQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(id /* block */)a0;
- (void)accountWasRemoved:(id)a0;
- (void)accountWasModified:(id)a0;
- (BOOL)_isCloudTabsAvailableUsingManagedAppleID:(BOOL)a0;
- (BOOL)_isUsingManagedAppleID;
- (void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(id /* block */)a0;
- (void)_updateKeychainSyncingStatus;
- (void)_updateFeatureAvailabilityByAccessLevel;
- (void)accountWasAdded:(id)a0;
- (void)_setAccount:(id)a0;

@end
