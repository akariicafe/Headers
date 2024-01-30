@class RTMapServiceManager, RTWiFiManager, NSMutableArray, RTFingerprintManager, RTLocationManager, NSObject;
@protocol OS_dispatch_queue;

@interface RTCurrentMapItemProvider : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) RTFingerprintManager *fingerprintManager;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTMapServiceManager *mapServiceManager;
@property (readonly, nonatomic) RTWiFiManager *wifiManager;
@property (readonly, nonatomic) NSMutableArray *futureLocations;
@property (readonly, nonatomic) NSMutableArray *futureAccessPoints;
@property (nonatomic) BOOL registeredForNotifications;

+ (id)convertMapItemsToPredictedLocationsOfInterest:(id)a0;
+ (void)logMapItems:(id)a0 prestring:(id)a1;
+ (void)logPredictedLocationsOfInterest:(id)a0 prestring:(id)a1;

- (void)_shutdown;
- (void)onLocationNotification:(id)a0;
- (void)shutdown;
- (void)onWiFiScanNotification:(id)a0;
- (void)performBluePOIQueryLookingBack:(double)a0 lookingAhead:(double)a1 handler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchCurrentMapItemsLookingBack:(double)a0 lookingAhead:(double)a1 handler:(id /* block */)a2;
- (id)_filterLocations:(id)a0;
- (id)_filterWiFiAccessPoints:(id)a0;
- (void)_performBluePOIQueryLookingBack:(double)a0 lookingAhead:(double)a1 handler:(id /* block */)a2;
- (id)_pickMinimumHorizontalUncertainty:(id)a0;
- (void)fetchCurrentMapItemsLookingBack:(double)a0 lookingAhead:(double)a1 handler:(id /* block */)a2;
- (id)initWithFingerprintManager:(id)a0 locationManager:(id)a1 mapServiceManager:(id)a2 wifiManager:(id)a3;

@end
