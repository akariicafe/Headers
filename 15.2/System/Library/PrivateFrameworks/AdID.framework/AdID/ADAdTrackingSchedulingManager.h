@class APSConnection, NSString, ADLoggingProfileMonitor;
@protocol NSObject;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>

@property (retain, nonatomic) ADLoggingProfileMonitor *loggingProfileMonitor;
@property (retain, nonatomic) id<NSObject> storeFrontNotifyToken;
@property (retain, nonatomic) id<NSObject> accountChangedNotifyToken;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (nonatomic) BOOL isConfigRequestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)pushEnable;
- (void)refreshConfiguration:(id /* block */)a0;
- (void)migratePersonalizedAdsOnboarding;
- (long long)latestPersonalizedConsentVersion;
- (void)migratePersonalizedAdsFromLAT;
- (BOOL)isSearchAdsEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)pushDisable;
- (void)handleConfiguration;
- (BOOL)isAdEnabledLocality;
- (id)currentBundleID;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)handleAccountChange;
- (void)forceExpiration;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (BOOL)_shouldSaveConfig;
- (BOOL)isSearchOrSegmentEnabled;
- (BOOL)isNewsOrStocksEnabledLocality;

@end
