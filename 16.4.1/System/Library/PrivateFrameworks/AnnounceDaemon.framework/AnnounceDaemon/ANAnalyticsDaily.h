@class ANAnalyticsStorage;
@protocol ANBackgroundActivityProtocol, ANAnalyticsDailyHomesProvider, ANDefaultsProtocol, ANAnalyticsDailyMessagingProtocol, ANAnalyticsDailyDelegate;

@interface ANAnalyticsDaily : NSObject <ANAnalyticsDailyProtocol>

@property (retain, nonatomic) id<ANBackgroundActivityProtocol> backgroundActivity;
@property (retain, nonatomic) id<ANDefaultsProtocol> defaults;
@property (readonly, nonatomic) ANAnalyticsStorage *eventStorage;
@property (retain, nonatomic) id<ANAnalyticsDailyHomesProvider> homesProvider;
@property (retain, nonatomic) id<ANAnalyticsDailyMessagingProtocol> messagingConnection;
@property (weak, nonatomic) id<ANAnalyticsDailyDelegate> delegate;

- (void)_cleanup;
- (void)_collectForAnnounce:(id)a0;
- (void)_collectForAnnouncementsInHome:(id)a0 completion:(id /* block */)a1;
- (id)_stringForDeferredResult:(long long)a0;
- (void)_executeBackgroundActivity:(id /* block */)a0;
- (BOOL)_isCoordinationDevice;
- (void)_collectPayload:(id /* block */)a0;
- (void)_resetDailyAnnouncements;
- (id)_dailyResponse;
- (void)_recordExecutionTime;
- (void)_collectForHome:(id)a0 homes:(id)a1;
- (void)_reportEventStorage;
- (id)initWithBackgroundActivity:(id)a0 defaults:(id)a1 homesProvider:(id)a2 messagingConnection:(id)a3;
- (id)init;
- (void)start;
- (void)_registerRapportDailyRequest;
- (void)recordReachableHomes:(id)a0;
- (void).cxx_destruct;
- (void)announcementSent:(id)a0 inHome:(id)a1;

@end
