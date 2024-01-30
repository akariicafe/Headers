@class NSURLSession, NSString, _ICQAccountManager, NSNumber, FLFollowUpController;

@interface ICQDaemonOfferManager : NSObject {
    FLFollowUpController *_followUpController;
}

@property (class, readonly, nonatomic) NSString *ckBackupDeviceID;

@property (readonly, nonatomic) _ICQAccountManager *accountManager;
@property (readonly, nonatomic) NSURLSession *sharedURLSession;
@property (nonatomic) BOOL shouldDirectToStorageManagement;
@property (nonatomic, getter=isBuddyOfferEnabled) BOOL buddyOfferEnabled;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property (nonatomic, getter=isLegacyDeviceStorageLevelNotificationEnabled) BOOL legacyDeviceStorageLevelNotificationEnabled;

+ (id)getCkBackupDeviceIDWithCompletionHandler:(id /* block */)a0;
+ (id)sharedDaemonOfferManager;

- (void)teardownCachedOffers;
- (void)teardownCachedBuddyOffer;
- (void)postBuddyOfferType:(id)a0;
- (void)postOfferType:(id)a0;
- (id)initWithAccountManager:(id)a0;
- (void)reconsiderOffersWithCompletion:(id /* block */)a0;
- (void)processPushNotificationDictionary:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isCachedDaemonOfferValid:(id)a0 forAccount:(id)a1;
- (id)_placeholderOfferForAccount:(id)a0 isForPremium:(BOOL)a1 isForBuddy:(BOOL)a2 error:(id)a3;
- (void)_teardownCachedPremiumOfferAndNotify:(BOOL)a0;
- (void)_reconsiderLocalOffersWithReason:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)_fetchDaemonOfferStubsForAccount:(id)a0 isForBuddy:(BOOL)a1 quotaReason:(id)a2 completion:(id /* block */)a3;
- (void)teardownCachedOffer;
- (void)clearLegacyFollowups;
- (id)_getFetchOfferStubsFromStubs:(id)a0;
- (void)_teardownCachedDefaultOfferAndNotify:(BOOL)a0;
- (void)_addCommonHeadersToRequest:(id)a0 account:(id)a1;
- (id)_storageManagementFollowupActions;
- (void)teardownOffersForAccount:(id)a0 completion:(id /* block */)a1;
- (id /* block */)_getHandlerForBundleId:(id)a0 options:(id)a1;
- (BOOL)_isCacheValidForRequestType:(long long)a0 offerStubs:(id)a1;
- (void)_processPushNotificationDictionary:(id)a0 completion:(id /* block */)a1;
- (id)soonestOfferOrStubExpirationDate;
- (void)_reconsiderOffersForAccount:(id)a0 isForBuddy:(BOOL)a1 quotaReason:(id)a2 choiceHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_teardownCachedOffersAndNotify:(BOOL)a0;
- (id)_storageManagementFollowupItem;
- (void)tearDownCachedPremiumOffer;
- (id)URLForAccount:(id)a0 quotaKey:(id)a1;
- (void)addCommonHeadersToRequest:(id)a0;
- (void)_teardownCachedOfferAndNotify:(BOOL)a0;
- (void)forcePostFollowup;
- (void)_updateOffer:(id)a0 buttonId:(id)a1 info:(id)a2 account:(id)a3 accountStore:(id)a4 completion:(id /* block */)a5;
- (void)_postStorageManagementFollowup;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (void)_reconsiderOffersForAccount:(id)a0 isForBuddy:(BOOL)a1 quotaReason:(id)a2 options:(id)a3 choiceHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_postDaemonOfferChangedDueToPushDarwinNotificationRequestType:(long long)a0;
- (void).cxx_destruct;
- (unsigned long long)daemonOfferSource;
- (void)_showDaemonAlertForOffer:(id)a0 notificationDictionary:(id)a1 store:(id)a2 account:(id)a3 completion:(id /* block */)a4;
- (id)init;
- (void)_daemonOfferStubsDictionaryForAccount:(id)a0 requestType:(long long)a1 quotaReason:(id)a2 completion:(id /* block */)a3;
- (id)_storageManagementFollowupNotification;
- (void)_teardownCachedBuddyOffer;
- (void)daemonOfferDictionaryForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)_getStubsForRequestType:(long long)a0 fromDaemonStubs:(id)a1;
- (void)_postOfferType:(id)a0 isForBuddy:(BOOL)a1;
- (BOOL)_attemptSetRequest:(id)a0 toPostWithJSONDict:(id)a1;
- (void)updateOfferForAccount:(id)a0 offerId:(id)a1 buttonId:(id)a2 info:(id)a3 completion:(id /* block */)a4;
- (Class)daemonOfferClassFromBundleId:(id)a0 options:(id)a1;
- (void)startDirectingToStorageManagement;
- (void)_clearStorageManagementFollowup;
- (BOOL)_processOfferStub:(id)a0 account:(id)a1;
- (void)addPremiumOffersHeaderIfNeededForRequest:(id)a0;
- (void)_processPushNotificationCheckHardwareIDWithDictionary:(id)a0 completion:(id /* block */)a1;
- (void)_updateQuotaForAccount:(id)a0 withServerDictionary:(id)a1;
- (void)_fetchDictionaryForAccount:(id)a0 quotaKey:(id)a1 quotaReason:(id)a2 stub:(id)a3 notificationID:(id)a4 contextDictionary:(id)a5 completion:(id /* block */)a6;
- (BOOL)_isBackupEnabledForAccount:(id)a0;
- (void)_addEntriesToPostDictionary:(id)a0 forStub:(id)a1;
- (BOOL)_useFetchOffersDataDirectly;
- (void)stopDirectingToStorageManagement;
- (void)_postFollowupForDaemonOffer:(id)a0 completion:(id /* block */)a1;
- (void)clearAllFollowupsWithCompletion:(id /* block */)a0;
- (void)_mockFetchDictionaryForAccount:(id)a0 quotaKey:(id)a1 stub:(id)a2 notificationID:(id)a3 contextDictionary:(id)a4 completion:(id /* block */)a5;
- (void)daemonBuddyOfferDictionaryForAccount:(id)a0 completion:(id /* block */)a1;
- (void)reconsiderOffersWithReason:(id)a0 reuseLocalOffers:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handlerMultipleStubs:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)clearFollowupsIsPremiumOffer:(BOOL)a0 completion:(id /* block */)a1;
- (void)_fetchDaemonOfferForAccount:(id)a0 stub:(id)a1 notificationID:(id)a2 completion:(id /* block */)a3;
- (void)_logErrorsForFetchOfferResultWithOffer:(id)a0 error:(id)a1 isForBuddy:(BOOL)a2;

@end
