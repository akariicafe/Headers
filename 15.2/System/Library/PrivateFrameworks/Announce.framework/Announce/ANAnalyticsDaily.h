@class ANAnalyticsStorage, ANHomeManager;
@protocol ANBackgroundActivityProtocol, ANAnalyticsDailyMessagingProtocol, ANDefaultsProtocol, ANAnalyticsDailyDelegate;

@interface ANAnalyticsDaily : NSObject <ANAnalyticsDailyProtocol>

@property (retain, nonatomic) id<ANBackgroundActivityProtocol> backgroundActivity;
@property (retain, nonatomic) id<ANDefaultsProtocol> defaults;
@property (readonly, nonatomic) ANAnalyticsStorage *eventStorage;
@property (retain, nonatomic) ANHomeManager *homeManager;
@property (retain, nonatomic) id<ANAnalyticsDailyMessagingProtocol> messagingConnection;
@property (weak, nonatomic) id<ANAnalyticsDailyDelegate> delegate;

- (void)_cleanup;
- (void)_recordExecutionTime;
- (void)_collectForHome:(id)a0 homes:(id)a1;
- (void)_collectPayload:(id /* block */)a0;
- (void)start;
- (BOOL)_isCoordinationDevice;
- (void)_reportEventStorage;
- (void).cxx_destruct;
- (void)_collectForAnnouncementsInHome:(id)a0 completion:(id /* block */)a1;
- (void)announcementSent:(id)a0 inHome:(id)a1;
- (id)init;
- (id)initWithBackgroundActivity:(id)a0 defaults:(id)a1 homeManager:(id)a2 messagingConnection:(id)a3;
- (id)_stringForDeferredResult:(long long)a0;
- (id)_dailyResponse;
- (void)_registerRapportDailyRequest;
- (void)recordReachableHomes:(id)a0;
- (void)_executeBackgroundActivity:(id /* block */)a0;
- (void)_resetDailyAnnouncements;
- (void)_collectForAnnounce:(id)a0;

@end
