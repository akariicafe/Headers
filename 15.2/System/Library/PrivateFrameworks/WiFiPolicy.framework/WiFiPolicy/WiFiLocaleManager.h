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
@property (retain) NSDateFormatter *dateFormatter;
@property (retain) WiFiLocationManager *locationManager;
@property unsigned char isWaitingForLocationUpdate;
@property unsigned char testModeEnabled;
@property int testMcc;
@property (retain) NSString *testHost11d;
@property (retain) NSString *testPeer;
@property (retain) NSString *testTimeZoneCC;
@property (weak, nonatomic) id<WiFiLocaleManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getStringOfLocaleSource:(int)a0;

- (id)getLocaleFromMultiple80211d;
- (void)didUpdateLocations:(id)a0;
- (BOOL)isLocaleCheckSuspended;
- (double)getLocaleLastUpdatedTime;
- (void)determineAndSetLocale:(unsigned char)a0;
- (unsigned char)getNetworkReachability;
- (id)getRestrictedCountryCodeFromRegionInfo;
- (id)getLocaleFromMcc;
- (void)determineLocale:(unsigned char)a0;
- (void)didFailWithError:(id)a0;
- (id)getLocaleFromCompanion;
- (id)applySetCountryCodeExceptions:(id)a0;
- (id)getLocaleFromPeer;
- (void)retrySetCountryCode:(id)a0 source:(int)a1;
- (void).cxx_destruct;
- (id)getLocaleUsingReverseGeocoder:(id)a0;
- (id)getRestrictedCountryCodeFromTimezone;
- (id)init;
- (int)getLocaleSource;
- (BOOL)isDefaultCountryCode:(id)a0;
- (id)getLocaleFromLocation:(id)a0;
- (id)getLocaleCountryCode;
- (void)setLocaleTestParams:(id)a0;
- (void)dealloc;
- (id)getLocaleUsingBoundingBoxes:(id)a0;
- (void)didChangeAuthorizationStatus;
- (id)getLocaleFromTimezone;
- (void)setCountryCode:(id)a0 source:(int)a1 retry:(BOOL)a2;

@end
