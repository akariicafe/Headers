@class NSDictionary;
@protocol ANRapportConnectionProvider;

@interface ANAnalyticsDailyMessaging : NSObject <ANAnalyticsDailyMessagingProtocol>

@property (readonly, nonatomic) id<ANRapportConnectionProvider> rapportConnection;
@property (readonly, nonatomic) NSDictionary *devicesCountingAnnouncements;
@property (readonly, nonatomic) BOOL isDeviceAnalyticsCoordinator;

- (void)sendDailyRequest:(id)a0 handler:(id /* block */)a1;
- (void)registerDailyRequest:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
