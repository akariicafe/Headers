@class ATXHeroAppManager, ATXHeroDataServer, ATXLocationManager, ATXTimeBucketedRateLimiter, ATXHeroClipManager, NSObject;
@protocol ATXProactiveCDNDownloaderProtocol, OS_dispatch_queue, ATXPredictionContextBuilderProtocol;

@interface ATXCDNDownloaderTriggerManager : NSObject {
    id _restrictionChangedNotificationToken;
    int _siriSettingsChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_queue;
    ATXLocationManager *_locationManager;
}

@property (readonly, nonatomic) ATXTimeBucketedRateLimiter *rateLimiter;
@property (readonly, nonatomic) id<ATXPredictionContextBuilderProtocol> predictionContextBuilder;
@property (readonly, nonatomic) ATXHeroDataServer *server;
@property (readonly, nonatomic) id<ATXProactiveCDNDownloaderProtocol> cdnDownloader;
@property (readonly, nonatomic) ATXHeroAppManager *heroAppManager;
@property (readonly, nonatomic) ATXHeroClipManager *heroClipManager;

+ (BOOL)_locationIsStaleOrNotAccurateEnough:(id)a0 now:(id)a1;

- (void)handleProfileChangedNotification;
- (void)_registerForRestrictionChangedNotifications;
- (void).cxx_destruct;
- (id)init;
- (void)_forwardHeroAppPredictionsToHeroAppPredictionsServer:(id)a0;
- (void)_registerForSiriSettingsChangedNotifications;
- (void)handleSiriSettingsChangedNotification;
- (id)initWithCDNDownloader:(id)a0 predictionContextBuilder:(id)a1 nudgeRegistrar:(Class)a2;
- (id)requestHighQualityLocationWithHundredMeterAccuracy;
- (id)initWithCDNDownloader:(id)a0 heroAppServer:(id)a1 heroClipManager:(id)a2 heroAppManager:(id)a3 predictionContextBuilder:(id)a4 nudgeRegistrar:(Class)a5 locationManager:(id)a6;
- (void)forwardLocationToCDNDownloaderAndHandleReply;

@end
