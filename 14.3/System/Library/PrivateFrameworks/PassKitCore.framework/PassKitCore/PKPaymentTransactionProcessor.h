@class NSHashTable, NSString, CLLocationManager, PKMerchantCategoryCodeMap, NSObject, PKUsageNotificationServer, NSMutableSet, NSMutableArray, CLGeocoder;
@protocol OS_dispatch_source, PKPaymentTransactionProcessorDataSource;

@interface PKPaymentTransactionProcessor : NSObject <CLLocationManagerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _itemsLock;
    NSMutableSet *_locationUpdateItems;
    NSMutableSet *_backgroundLocationUpdateItems;
    NSMutableArray *_reverseGeocodeItems;
    NSMutableSet *_stationsUpdateItems;
    NSMutableArray *_merchantCleanupItems;
    CLLocationManager *_locationManager;
    CLLocationManager *_backgroundMerchantLocationManager;
    CLGeocoder *_geocoder;
    NSObject<OS_dispatch_source> *_locationUpdateTimeoutTimer;
    NSObject<OS_dispatch_source> *_backgroundLocationUpdateTimer;
    BOOL _processingMerchantCleanupItems;
    PKMerchantCategoryCodeMap *_categoryCodeMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observers;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<PKPaymentTransactionProcessorDataSource> dataSource;
@property (weak, nonatomic) PKUsageNotificationServer *usageNotificationServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0;
- (void)_startUpdatingBackgroundLocationIfPossible;
- (id)initWithQueue:(id)a0;
- (void)_processPaymentTransactionForLocationUpdate:(id)a0 forTransactionSourceIdentifier:(id)a1;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)_pendingLocationUpdateItemForTransaction:(id)a0;
- (void)_reportTransactionWithFinalLocation:(id)a0;
- (void).cxx_destruct;
- (void)_markTransactionAsFullyProcessedAndNotifyDelegate:(id)a0 forTransactionSourceIdentifier:(id)a1;
- (void)_processItemForStationsCleanup:(id)a0;
- (void)_beginProcessingPaymentTransaction:(id)a0 forTransactionSourceIdentifier:(id)a1 skipLocation:(BOOL)a2;
- (id)_pendingStationsUpdateItemForTransaction:(id)a0;
- (void)_abortUpdatingLocationForAllLocationUpdateItems;
- (void)_updateLocation:(id)a0 forLocationUpdateItem:(id)a1 andMarkAsProcessed:(BOOL)a2;
- (void)_processForLocalMCCLookup:(id)a0;
- (void)_processPaymentTransactionForDemoMode:(id)a0 forTransactionSourceIdentifier:(id)a1;
- (void)_beginMerchantCleanupIfPossible;
- (id)_pendingReverseGeocodeUpdateItemForTransaction:(id)a0;
- (void)_beginReverseGeocodingIfPossible;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)_stopUpdatingLocationIfPossible;
- (void)unregisterObserver:(id)a0;
- (id)_pendingMerchantCleanupItemForTransaction:(id)a0;
- (void)processPaymentTransaction:(id)a0 forTransactionSourceIdentifier:(id)a1;
- (void)_processPaymentTransaction:(id)a0 forTransactionSourceIdentifier:(id)a1;
- (void)_startUpdatingLocationIfPossible;
- (void)_abortUpdatingLocationForLocationUpdateItem:(id)a0;
- (void)_updateActiveState;
- (void)_processItemForMerchantCleanup:(id)a0 clearingAttempt:(BOOL)a1;
- (void)_continueUpdatingLocationForTransactionUpdateItem:(id)a0;
- (void)_processPaymentTransactionForStationsUpdate:(id)a0 forTransactionSourceIdentifier:(id)a1;
- (void)_abortUpdatingLocationForAllBackgroundLocationUpdateItems;
- (void)_processPaymentTransactionForMerchantCleanup:(id)a0 forTransactionSourceIdentifier:(id)a1 clearingAttempt:(BOOL)a2;

@end
