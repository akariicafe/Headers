@class NSString, NSMutableDictionary, MCProfileConnection, NSObject;
@protocol OS_dispatch_queue;

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSettings;
    MCProfileConnection *_connection;
}

@property (class, readonly, nonatomic) MPRestrictionsMonitor *sharedRestrictionsMonitor;

@property (nonatomic) long long maximumTVShowRatingForAgeGate;
@property (nonatomic) long long maximumMovieRatingForAgeGate;
@property (readonly, nonatomic) BOOL allowsAccountModification;
@property (readonly, nonatomic) BOOL allowsDeletion;
@property (readonly, nonatomic) BOOL allowsExplicitContent;
@property (readonly, nonatomic) BOOL allowsMusicSubscription;
@property (readonly, nonatomic) BOOL allowsStorePurchases;
@property (readonly, nonatomic) BOOL allowsRadioPurchases;
@property (readonly, nonatomic) BOOL allowsMusicVideos;
@property (readonly, nonatomic) long long maximumTVShowRating;
@property (readonly, nonatomic) long long maximumMovieRating;
@property (readonly, nonatomic) BOOL hasRestrictionsPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (id)effectiveValueForSetting:(id)a0;
- (void)_updateWithCanPostNotifications:(BOOL)a0;
- (void)_cacheValue:(id)a0 forSetting:(id)a1;
- (BOOL)_isRunningInStoreDemoMode;

@end
