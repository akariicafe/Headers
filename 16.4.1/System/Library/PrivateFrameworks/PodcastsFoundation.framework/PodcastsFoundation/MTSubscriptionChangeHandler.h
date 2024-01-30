@protocol MTLegacyDownloadManagerProtocol;

@interface MTSubscriptionChangeHandler : NSObject

@property (retain, nonatomic) id<MTLegacyDownloadManagerProtocol> downloadManager;

- (void).cxx_destruct;
- (void)_unsafeRedownloadEpisodesOnSubscriptionChangeForEpisodeUuids:(id)a0 channel:(id)a1;
- (void)_unsafeSendNotificationsForNewlyEntitledEpisodes:(id)a0 latestEpisodeUUID:(id)a1 newlyEntitledEpisodeUUIDs:(id)a2;
- (void)_unsafeUpdateEntitlementStateAndCheckForNewEntitlement:(id)a0 newlyEntitledEpisodeUUIDs:(id)a1 latestEpisodeDate:(double *)a2 latestEpisodeUUID:(id)a3;
- (void)_unsafeUpdatePriceTypeAndSendNotificationsIfNeededFor:(id)a0 subscriptionActive:(BOOL)a1 episodesToRedownload:(id)a2;
- (BOOL)_updateEntitledAttributes:(id)a0 subscriptionActive:(BOOL)a1;
- (void)unsafeHandleSubscriptionChangeForChannel:(id)a0 subscriptionBecameActive:(BOOL)a1 subscriptionEnabledDate:(double)a2;

@end
