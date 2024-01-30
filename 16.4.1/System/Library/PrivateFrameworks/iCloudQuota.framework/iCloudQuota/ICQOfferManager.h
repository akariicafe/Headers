@class NSString, NSMutableDictionary, NSTimer, NSNumber, ICQUnfairLock;

@interface ICQOfferManager : NSObject {
    NSTimer *_regularOfferInvalidationTimer;
    NSTimer *_premiumOfferInvalidationTimer;
}

@property (class, readonly, nonatomic) NSString *ckBackupDeviceID;

@property (readonly, nonatomic) BOOL isDeviceStorageAlmostFull;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property (readonly, nonatomic) NSNumber *photosLibrarySize;
@property (nonatomic, getter=isBuddyOfferEnabled) BOOL buddyOfferEnabled;
@property (retain, nonatomic) NSMutableDictionary *cachedOffers;
@property (retain, nonatomic) NSMutableDictionary *registeredDarwinNotifications;
@property (retain, nonatomic) ICQUnfairLock *cachedOffersLock;

+ (id)sharedOfferManager;
+ (BOOL)buddyOfferMightNeedPresenting;
+ (id)defaultBundleIdentifier;
+ (BOOL)_legacyBuddyOfferMightNeedPresenting;
+ (id)stringWithPlaceholderFormat:(id)a0 alternateString:(id)a1;
+ (id)defaultPlaceholderKeys;

- (void)getDefaultOfferWithCompletion:(id /* block */)a0;
- (void)_funnelCloudServerOfferForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)getPremiumOfferWithCompletion:(id /* block */)a0;
- (void)forcePostFollowup;
- (id)currentPremiumOfferForBundleIdentifier:(id)a0;
- (void)getOfferForBundleIdentifier:(id)a0 offerContext:(id)a1 completion:(id /* block */)a2;
- (void)getPremiumOfferForBundleIdentifier:(id)a0 offerContext:(id)a1 completion:(id /* block */)a2;
- (void)clearFollowups;
- (void)getOfferForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getPremiumOfferForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_handlePushReceivedDarwinNotificationRequestType:(long long)a0;
- (void)setCachedOfferForType:(long long)a0 newOffer:(id)a1;
- (void)_getOfferForAccount:(id)a0 bundleIdentifier:(id)a1 options:(id)a2 offerContext:(id)a3 completion:(id /* block */)a4;
- (void)_setupTimerForInvalidationDate:(id)a0 forType:(long long)a1;
- (void)_unregisterForAllDarwinNotifications;
- (void)_getOfferForBundleIdentifier:(id)a0 options:(id)a1 offerContext:(id)a2 completion:(id /* block */)a3;
- (void)teardownCachedPremiumOffer;
- (id)currentOffer;
- (void)postBuddyOfferType:(id)a0;
- (void)_firedPremiumOfferInvalidationTimer:(id)a0;
- (id)_currentOfferForBundleIdentifier:(id)a0 options:(id)a1;
- (void)_registerForDarwinNotification:(id)a0;
- (id)_premiumOptions;
- (id)_refreshOfferWithDaemonOfferDict:(id)a0 offerRequestType:(long long)a1 bundleId:(id)a2;
- (void)getPremiumOfferAndOpportunityBubbleWithCompletion:(id /* block */)a0;
- (id)currentOfferForBundleIdentifier:(id)a0;
- (void)postOfferType:(id)a0;
- (void)dealloc;
- (void)_refetchRegularOffer;
- (void)getOfferWithCompletion:(id /* block */)a0;
- (void)teardownCachedOffer;
- (id)currentPremiumOffer;
- (void)_teardownInvalidationTimerForRequestType:(long long)a0;
- (void)updateOfferId:(id)a0 buttonId:(id)a1 info:(id)a2 completion:(id /* block */)a3;
- (void)getPremiumOfferAndOpportunityBubbleForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_refetchPremiumOffer;
- (void)_setupTimerForRegularOfferInvalidationDate:(id)a0;
- (id)currentDefaultOffer;
- (id)init;
- (void)_unregisterForDarwinNotification:(id)a0;
- (BOOL)_shouldUseOffer:(id)a0 forBundleIdentifier:(id)a1;
- (void)_setupTimerForPremiumOfferInvalidationDate:(id)a0;
- (void)_firedRegularOfferInvalidationTimer:(id)a0;
- (void)_teardownRegularOfferInvalidationTimer;
- (void)_refetchDefaultOffer;
- (BOOL)fetchOfferIfNeeded;
- (id)cachedOfferForType:(long long)a0;
- (void).cxx_destruct;
- (void)teardownCachedOffers;
- (BOOL)_offerTypeMatchesRequestOptions:(id)a0 offer:(id)a1;
- (void)teardownCachedBuddyOffer;
- (void)_teardownPremiumOfferInvalidationTimer;

@end
