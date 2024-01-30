@class NSURLSession, NSString, _ICQAccountManager, NSNumber, FLFollowUpController;

@interface ICQDaemonOfferManager : NSObject {
    FLFollowUpController *_followUpController;
}

@property (class, readonly, nonatomic) NSString *ckBackupDeviceID;

@property (readonly) _ICQAccountManager *accountManager;
@property (readonly) NSURLSession *sharedURLSession;
@property (nonatomic) BOOL shouldDirectToStorageManagement;
@property (nonatomic, getter=isBuddyOfferEnabled) BOOL buddyOfferEnabled;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property (nonatomic, getter=isLegacyDeviceStorageLevelNotificationEnabled) BOOL legacyDeviceStorageLevelNotificationEnabled;

+ (id)sharedDaemonOfferManager;

- (void)teardownCachedOffer;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (void)teardownCachedBuddyOffer;
- (void)postBuddyOfferType:(id)a0;
- (void)teardownCachedOffers;
- (void)postOfferType:(id)a0;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (void)forcePostFollowup;
- (void)daemonBuddyOfferDictionaryForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_fetchDictionaryForAccount:(id)a0 quotaKey:(id)a1 stub:(id)a2 notificationID:(id)a3 contextDictionary:(id)a4 completion:(id /* block */)a5;
- (void)_postDaemonOfferChangedDueToPushDarwinNotification;
- (void)_postFollowupForDaemonOffer:(id)a0 completion:(id /* block */)a1;
- (void)_fetchDaemonOfferForAccount:(id)a0 stub:(id)a1 notificationID:(id)a2 completion:(id /* block */)a3;
- (void)_reconsiderOffersForAccount:(id)a0 isForBuddy:(BOOL)a1 choiceHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_processPushNotificationDictionary:(id)a0 completion:(id /* block */)a1;
- (void)_teardownCachedOffersAndNotify:(BOOL)a0;
- (void)addCommonHeadersToRequest:(id)a0;
- (id)_storageManagementFollowupActions;
- (id)_storageManagementFollowupNotification;
- (id)_storageManagementFollowupItem;
- (void)_postStorageManagementFollowup;
- (void)_clearStorageManagementFollowup;
- (void)_fetchDaemonOfferStubsForAccount:(id)a0 isForBuddy:(BOOL)a1 completion:(id /* block */)a2;
- (id)_sanitizedNotificationDictionary:(id)a0 account:(id)a1;
- (void)_showDaemonAlertForOffer:(id)a0 notificationDictionary:(id)a1 store:(id)a2 account:(id)a3 completion:(id /* block */)a4;
- (void)_updateOffer:(id)a0 buttonId:(id)a1 info:(id)a2 account:(id)a3 accountStore:(id)a4 completion:(id /* block */)a5;
- (void)_mockFetchDictionaryForAccount:(id)a0 quotaKey:(id)a1 stub:(id)a2 notificationID:(id)a3 contextDictionary:(id)a4 completion:(id /* block */)a5;
- (BOOL)_useFetchOffersDataDirectly;
- (id)URLForAccount:(id)a0 quotaKey:(id)a1;
- (void)_addEntriesToPostDictionary:(id)a0 forStub:(id)a1;
- (unsigned long long)daemonOfferSource;
- (BOOL)_isBackupEnabledForAccount:(id)a0;
- (BOOL)_attemptSetRequest:(id)a0 toPostWithJSONDict:(id)a1;
- (void)_addCommonHeadersToRequest:(id)a0 account:(id)a1;
- (void)_updateQuotaForAccount:(id)a0 withServerDictionary:(id)a1;
- (id)_placeholderOfferForAccount:(id)a0 isForBuddy:(BOOL)a1 error:(id)a2;
- (void)clearFollowupsWithCompletion:(id /* block */)a0;
- (void)_teardownCachedBuddyOffer;
- (void)_teardownCachedOfferAndNotify:(BOOL)a0;
- (void)_daemonOfferStubsDictionaryForAccount:(id)a0 isForBuddy:(BOOL)a1 completion:(id /* block */)a2;
- (void)_postOfferType:(id)a0 isForBuddy:(BOOL)a1;
- (void)daemonOfferDictionaryForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)processPushNotificationDictionary:(id)a0 completion:(id /* block */)a1;
- (void)teardownOffersForAccount:(id)a0 completion:(id /* block */)a1;
- (id)soonestOfferOrStubExpirationDate;
- (void)startDirectingToStorageManagement;
- (void)stopDirectingToStorageManagement;
- (void)reconsiderOffersWithCompletion:(id /* block */)a0;
- (id)_pushNotificationDictionary;
- (void)updateOfferForAccount:(id)a0 offerId:(id)a1 buttonId:(id)a2 info:(id)a3 completion:(id /* block */)a4;

@end
