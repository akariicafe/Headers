@class NSString, NSMutableDictionary, NSTimer, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface ICQOfferManager : NSObject {
    NSObject<OS_dispatch_queue> *_cachedOfferQueue;
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

+ (BOOL)buddyOfferMightNeedPresenting;
+ (id)stringWithPlaceholderFormat:(id)a0 alternateString:(id)a1;
+ (BOOL)_legacyBuddyOfferMightNeedPresenting;
+ (id)defaultBundleIdentifier;
+ (id)sharedOfferManager;
+ (id)defaultPlaceholderKeys;

- (void)teardownCachedOffers;
- (void)teardownCachedBuddyOffer;
- (void)postBuddyOfferType:(id)a0;
- (void)postOfferType:(id)a0;
- (id)cachedOfferForType:(long long)a0;
- (id)currentDefaultOffer;
- (void)updateOfferId:(id)a0 buttonId:(id)a1 info:(id)a2 completion:(id /* block */)a3;
- (void)_getOfferForBundleIdentifier:(id)a0 options:(id)a1 offerContext:(id)a2 completion:(id /* block */)a3;
- (void)teardownCachedOffer;
- (id)currentPremiumOfferForBundleIdentifier:(id)a0;
- (id)_refreshOfferWithDaemonOfferDict:(id)a0 offerRequestType:(long long)a1 bundleId:(id)a2;
- (void)_getOfferForAccount:(id)a0 bundleIdentifier:(id)a1 options:(id)a2 offerContext:(id)a3 completion:(id /* block */)a4;
- (void)_firedRegularOfferInvalidationTimer:(id)a0;
- (BOOL)fetchOfferIfNeeded;
- (void)getPremiumOfferForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_currentOfferForBundleIdentifier:(id)a0 options:(id)a1;
- (void)_refetchPremiumOffer;
- (void)getPremiumOfferWithCompletion:(id /* block */)a0;
- (void)_teardownInvalidationTimerForRequestType:(long long)a0;
- (BOOL)_shouldUseOffer:(id)a0 forBundleIdentifier:(id)a1;
- (void)forcePostFollowup;
- (void)clearFollowups;
- (void)getPremiumOfferAndOpportunityBubbleForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_setupTimerForInvalidationDate:(id)a0 forType:(long long)a1;
- (void).cxx_destruct;
- (void)teardownCachedPremiumOffer;
- (void)_refetchRegularOffer;
- (id)init;
- (id)_funnelCloudServerOfferForAccount:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)_offerTypeMatchesRequestOptions:(id)a0 offer:(id)a1;
- (void)_firedPremiumOfferInvalidationTimer:(id)a0;
- (void)_setupTimerForRegularOfferInvalidationDate:(id)a0;
- (void)getDefaultOfferWithCompletion:(id /* block */)a0;
- (id)currentPremiumOffer;
- (void)_teardownPremiumOfferInvalidationTimer;
- (void)_handlePushReceivedDarwinNotificationRequestType:(long long)a0;
- (void)_teardownRegularOfferInvalidationTimer;
- (void)getPremiumOfferAndOpportunityBubbleWithCompletion:(id /* block */)a0;
- (void)_registerForDarwinNotification:(id)a0;
- (id)currentOfferForBundleIdentifier:(id)a0;
- (void)_setupTimerForPremiumOfferInvalidationDate:(id)a0;
- (void)dealloc;
- (void)setCachedOfferForType:(long long)a0 newOffer:(id)a1;
- (void)getOfferForBundleIdentifier:(id)a0 offerContext:(id)a1 completion:(id /* block */)a2;
- (void)getOfferForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_premiumOptions;
- (id)currentOffer;
- (void)_unregisterForDarwinNotification:(id)a0;
- (void)_unregisterForAllDarwinNotifications;
- (void)getPremiumOfferForBundleIdentifier:(id)a0 offerContext:(id)a1 completion:(id /* block */)a2;
- (void)_refetchDefaultOffer;
- (void)getOfferWithCompletion:(id /* block */)a0;

@end
