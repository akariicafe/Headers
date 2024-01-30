@class NSString, NSTimer, CLLocationManager, WeatherPreferences, NSDate;
@protocol CLLocationManagerDelegate;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate>

@property (readonly, copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) int authorizationStatus;
@property (nonatomic) BOOL locationUpdatesEnabled;
@property (nonatomic) BOOL locationTrackingIsReady;
@property (nonatomic) unsigned long long updateInterval;
@property (nonatomic) double oldestAllowedUpdateTime;
@property (retain, nonatomic) NSTimer *delayedUpdateTimer;
@property (retain, nonatomic) NSTimer *accuracyFallbackTimer;
@property (retain, nonatomic) WeatherPreferences *preferences;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } lastLocationCoord;
@property (copy, nonatomic) NSDate *lastLocationTimeStamp;
@property (nonatomic) float lastLocationAccuracy;
@property (nonatomic) double lastLocationUpdateTime;
@property (nonatomic) double nextPlannedUpdate;
@property (nonatomic) BOOL isInternalBuild;
@property (weak, nonatomic) id<CLLocationManagerDelegate> delegate;
@property (readonly, nonatomic) double distanceFilter;
@property (readonly, nonatomic) BOOL limitsPrecision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)locationManagerAuthorizationWithEffectiveBundleId:(id)a0;
+ (void)clearSharedLocationManager;
+ (id)sharedWeatherLocationManager;

- (void)askForLocationManagerAuthorization;
- (void)clearLastLocationUpdateTime;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)scheduleDelayedUpdate:(double)a0;
- (void)forceLocationUpdate;
- (void)dealloc;
- (void)accuracyFallbackTimerDidFire:(id)a0;
- (BOOL)localWeatherAuthorized;
- (void)updateLocation:(id)a0;
- (BOOL)isLocalStaleOrOutOfDate;
- (id)location;
- (void)setLocationTrackingReady:(BOOL)a0 activelyTracking:(BOOL)a1 watchKitExtension:(BOOL)a2 shouldRequestAuthorization:(BOOL)a3;
- (void)delayedUpdateTimerDidFire:(id)a0;
- (void)forceLocationManagerAuthorization;
- (id)initWithPreferences:(id)a0 effectiveBundleIdentifier:(id)a1;
- (id)initWithPreferences:(id)a0;
- (void)stopLocationUpdate;
- (void)clearLocalWeatherUpdateState;
- (int)forceLoadingAuthorizationStatus;
- (void)setLocationTrackingActive:(BOOL)a0;
- (BOOL)isCacheOutOfDate;
- (void)monitorLocationAuthorization;
- (void)updateLocationWithNoConditionCheck;
- (void)cancelDelayedUpdateTimer;
- (void)setLocationTrackingReady:(BOOL)a0 activelyTracking:(BOOL)a1 watchKitExtension:(BOOL)a2;
- (BOOL)hasCrossedHourBoundary;
- (BOOL)isLocationWithInRange:(id)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)cancelAccuracyFallbackTimer;

@end
