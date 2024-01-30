@class NSString, ICQOffer, NSTimer, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface ICQOfferManager : NSObject {
    NSObject<OS_dispatch_queue> *_cachedOfferQueue;
    ICQOffer *_cachedOffer;
    NSTimer *_invalidationTimer;
    BOOL _isRegisteredForDarwinNotifications;
}

@property (class, readonly, nonatomic) NSString *ckBackupDeviceID;

@property (readonly, nonatomic) BOOL isDeviceStorageAlmostFull;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property (readonly, nonatomic) NSNumber *photosLibrarySize;
@property (nonatomic, getter=isBuddyOfferEnabled) BOOL buddyOfferEnabled;
@property (retain, nonatomic) ICQOffer *cachedOffer;

+ (id)defaultPlaceholderKeys;
+ (BOOL)buddyOfferMightNeedPresenting;
+ (id)sharedOfferManager;
+ (id)stringWithPlaceholderFormat:(id)a0 alternateString:(id)a1;
+ (BOOL)_legacyBuddyOfferMightNeedPresenting;
+ (id)defaultBundleIdentifier;

- (void)teardownCachedOffer;
- (id)init;
- (void)_getOfferForAccount:(id)a0 bundleIdentifier:(id)a1 offerContext:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_setupTimerForInvalidationDate:(id)a0;
- (void)dealloc;
- (void)_registerForDarwinNotifications;
- (id)currentOffer;
- (void)_firedInvalidationTimer:(id)a0;
- (void)_unregisterForDarwinNotifications;
- (void)teardownCachedBuddyOffer;
- (void)postBuddyOfferType:(id)a0;
- (void)_handlePushReceivedDarwinNotification;
- (BOOL)fetchOfferIfNeeded;
- (void)_teardownInvalidationTimer;
- (id)currentOfferForBundleIdentifier:(id)a0;
- (void)getOfferWithCompletion:(id /* block */)a0;
- (void)_refetchOffer;
- (id)_funnelCloudServerOfferForAccount:(id)a0 options:(id)a1 error:(id *)a2;
- (void)teardownCachedOffers;
- (void)updateOfferId:(id)a0 buttonId:(id)a1 info:(id)a2 completion:(id /* block */)a3;
- (void)postOfferType:(id)a0;
- (BOOL)_shouldUseOffer:(id)a0 forBundleIdentifier:(id)a1;
- (void)getOfferForBundleIdentifier:(id)a0 offerContext:(id)a1 completion:(id /* block */)a2;
- (void)getOfferForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_getOfferForAccount:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)clearFollowups;
- (void)forcePostFollowup;

@end
