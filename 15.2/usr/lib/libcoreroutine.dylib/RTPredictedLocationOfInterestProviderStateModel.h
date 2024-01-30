@class RTDataProtectionManager, RTMetricManager, RTLearnedLocationManager, RTNextPredictedLocationsOfInterestCache, NSString, NSObject, RTLocationManager;
@protocol OS_dispatch_queue;

@interface RTPredictedLocationOfInterestProviderStateModel : NSObject <RTNextPredictedLocationsOfInterestCacheDelegate, RTPredictedLocationOfInterestProvider>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (readonly, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTMetricManager *metricManager;
@property (readonly, nonatomic) RTNextPredictedLocationsOfInterestCache *nextPredictedLocationsOfInterestCache;
@property (nonatomic) long long encryptedDataAvailability;
@property (nonatomic) BOOL encryptedDataAvailabilityNotificationNeeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCacheEnabledDidChange:(BOOL)a0;
- (void)fetchPredictedExitDatesWithCriteria:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (void)onDataProtectionNotification:(id)a0;
- (void)updateEncryptedDataAvailabilityNotificationNeeded;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataProtectionManager:(id)a0 learnedLocationManager:(id)a1 locationManager:(id)a2 metricManager:(id)a3 cache:(id)a4;
- (void)_onCacheEnabledDidChange:(BOOL)a0;
- (void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;

@end
