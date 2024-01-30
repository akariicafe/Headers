@class NSDictionary;
@protocol ANRapportConnectionProvider;

@interface ANAnalyticsDailyMessaging : NSObject <ANAnalyticsDailyMessagingProtocol>

@property (readonly, nonatomic) id<ANRapportConnectionProvider> rapportConnection;
@property (readonly, nonatomic) NSDictionary *devicesCountingAnnouncements;
@property (readonly, nonatomic) BOOL isDeviceAnalyticsCoordinator;

- (void)registerDailyRequest:(id /* block */)a0;
- (void)sendDailyRequest:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
