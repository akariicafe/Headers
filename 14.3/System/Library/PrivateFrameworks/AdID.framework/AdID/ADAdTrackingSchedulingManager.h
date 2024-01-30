@class APSConnection, NSString;
@protocol NSObject;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>

@property (retain, nonatomic) id<NSObject> storeFrontNotifyToken;
@property (retain, nonatomic) id<NSObject> accountChangedNotifyToken;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (nonatomic) BOOL isConfigRequestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)migratePersonalizedAdsFromLAT;
- (void)pushDisable;
- (void)pushEnable;
- (BOOL)_shouldSaveConfig;
- (void)refreshConfiguration:(id /* block */)a0;
- (void)handleConfiguration;
- (void)forceExpiration;
- (void)handleAccountChange;
- (BOOL)isAdEnabledLocality;
- (id)currentBundleID;

@end
