@class ATXHeroAppManager, ATXTimeBucketedRateLimiter, ATXHeroAppPredictionsServer, ATXAppClipsManager, NSObject;
@protocol ATXProactiveCDNDownloaderProtocol, OS_dispatch_queue, ATXPredictionContextBuilderProtocol;

@interface ATXCDNDownloaderTriggerManager : NSObject {
    id _restrictionChangedNotificationToken;
    int _siriSettingsChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) ATXTimeBucketedRateLimiter *rateLimiter;
@property (readonly, nonatomic) id<ATXPredictionContextBuilderProtocol> predictionContextBuilder;
@property (readonly, nonatomic) ATXHeroAppPredictionsServer *server;
@property (readonly, nonatomic) id<ATXProactiveCDNDownloaderProtocol> cdnDownloader;
@property (readonly, nonatomic) ATXHeroAppManager *heroAppManager;
@property (readonly, nonatomic) ATXAppClipsManager *appClipsManager;

+ (BOOL)_locationIsStaleOrNotAccurateEnough:(id)a0 now:(id)a1;

- (void)handleSiriSettingsChangedNotification;
- (id)init;
- (void).cxx_destruct;
- (void)handleProfileChangedNotification;
- (void)_registerForSiriSettingsChangedNotifications;
- (void)_registerForRestrictionChangedNotifications;
- (id)requestHighQualityLocationWithHundredMeterAccuracy;
- (void)forwardLocationToCDNDownloaderAndHandleReply;
- (id)initWithCDNDownloader:(id)a0 heroAppServer:(id)a1 appClipsManager:(id)a2 heroAppManager:(id)a3 predictionContextBuilder:(id)a4 nudgeRegistrar:(Class)a5;
- (id)initWithCDNDownloader:(id)a0 predictionContextBuilder:(id)a1 nudgeRegistrar:(Class)a2;
- (void)_forwardHeroAppPredictionsToHeroAppPredictionsServer:(id)a0;

@end
