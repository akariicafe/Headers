@class NSBackgroundActivityScheduler;
@protocol ANAnalyticsDailyDelegate, ANRapportConnectionProvider;

@interface ANAnalyticsDaily : NSObject <ANAnalyticsDailyProtocol>

@property (readonly, nonatomic) NSBackgroundActivityScheduler *backgroundActivity;
@property (readonly, nonatomic) id<ANRapportConnectionProvider> rapportConnection;
@property (weak, nonatomic) id<ANAnalyticsDailyDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)announcementSent:(id)a0 inHome:(id)a1;
- (void)_registerRapportDailyRequest;
- (void)_recordExecutionTime;
- (void)_executeBackgroundActivity;
- (id)_collectPayload;
- (void)_collectForAnnounce:(id)a0;
- (void)_collectForHome:(id)a0 homes:(id)a1;
- (void)_collectForAnnouncementsInHome:(id)a0;
- (BOOL)_isCoordinationDevice;
- (BOOL)isDeviceElectedOutOf:(id)a0;
- (void)_resetDailyAnnouncements;
- (id)_dailyResponse;

@end
