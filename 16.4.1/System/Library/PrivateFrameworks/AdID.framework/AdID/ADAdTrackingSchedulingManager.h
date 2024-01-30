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

- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)forceExpiration;
- (BOOL)_shouldSaveConfig;
- (void)registerForLockStateNotification;
- (id)retrieveNewsRecord:(id *)a0;
- (void)pushEnable;
- (void)handleConfiguration;
- (void)migratePersonalizedAdsOnboarding;
- (void)migratePersonalizedAdsFromLAT;
- (BOOL)isNewsOrStocksEnabledLocality;
- (void)dealloc;
- (void)refreshConfiguration:(id /* block */)a0;
- (long long)latestPersonalizedConsentVersion;
- (BOOL)isAdEnabledLocality;
- (BOOL)isSearchAdsEnabled;
- (id)init;
- (void)pushDisable;
- (void)handleAccountChange;
- (BOOL)isSearchOrSegmentEnabled;
- (void).cxx_destruct;
- (id)currentBundleID;

@end
