@class NSString, NSMutableDictionary, MCProfileConnection;

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_cachedSettings;
    MCProfileConnection *_connection;
    id _homeUserMonitorToken;
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
@property (readonly, nonatomic) BOOL allowsRadioService;
@property (readonly, nonatomic) BOOL allowsMusicVideos;
@property (readonly, nonatomic) long long maximumTVShowRating;
@property (readonly, nonatomic) long long maximumMovieRating;
@property (readonly, nonatomic) BOOL hasRestrictionsPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (id)effectiveValueForSetting:(id)a0;
- (BOOL)_isRunningInStoreDemoMode;
- (void)_cacheValue:(id)a0 forSetting:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_updateWithCanPostNotifications:(BOOL)a0;

@end
