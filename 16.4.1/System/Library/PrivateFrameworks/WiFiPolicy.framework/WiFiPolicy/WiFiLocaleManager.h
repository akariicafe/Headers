@class NSString, NSDateFormatter, WiFiLocationManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, WiFiLocaleManagerDelegate;

@interface WiFiLocaleManager : NSObject <WiFiLocationManagerDelegate> {
    struct __CTServerConnection { } *_ctServerConnectionRef;
}

@property BOOL localeCheckSuspended;
@property (retain) NSString *localeCountryCode;
@property int localeSource;
@property double localeTimeout;
@property double localeLastUpdatedTime;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *localeTimer;
@property (retain) NSObject<OS_dispatch_source> *retryTimer;
@property int aggressiveRetryAttemptsRemaining;
@property (retain) NSDateFormatter *dateFormatter;
@property (retain) WiFiLocationManager *locationManager;
@property unsigned char isWaitingForLocationUpdate;
@property unsigned char testModeEnabled;
@property int testMcc;
@property (retain) NSString *testHost11d;
@property (retain) NSString *testPeer;
@property (retain) NSString *testTimeZoneCC;
@property (retain) NSString *testUserDefaults;
@property (weak, nonatomic) id<WiFiLocaleManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getStringOfLocaleSource:(int)a0;

- (void)didUpdateLocations:(id)a0;
- (int)getLocaleSource;
- (void)setCountryCode:(id)a0 source:(int)a1;
- (id)getLocaleCountryCode;
- (void)determineLocale:(unsigned char)a0;
- (id)getRestrictedCountryCodeFromTimezone;
- (void)setLocaleTestParams:(id)a0;
- (id)getLocaleFromMcc;
- (void)didFailWithError:(id)a0;
- (id)getLocaleUsingReverseGeocoder:(id)a0;
- (void)retrySetCountryCode:(id)a0 source:(int)a1;
- (BOOL)isDefaultCountryCode:(id)a0;
- (BOOL)isLocaleCheckSuspended;
- (void)didChangeAuthorizationStatus;
- (id)getLocaleFromMultiple80211d;
- (void)dealloc;
- (id)getLocaleFromPeer;
- (id)getLocaleFromUserDefaults;
- (double)getLocaleLastUpdatedTime;
- (BOOL)shouldDetermineNewLocale;
- (void)determineAndSetLocale:(unsigned char)a0;
- (id)init;
- (id)applySetCountryCodeExceptions:(id)a0;
- (id)getLocaleUsingGeoLocationCache:(id)a0;
- (id)getRestrictedCountryCodeFromRegionInfo;
- (id)getLocaleUsingBoundingBoxes:(id)a0;
- (void).cxx_destruct;
- (id)getLocaleFromCompanion;
- (unsigned char)getNetworkReachability;
- (id)getLocaleFromLocation:(id)a0;
- (id)getLocaleFromTimezone;

@end
