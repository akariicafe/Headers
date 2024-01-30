@class NSString;
@protocol ANAnalyticsDailyProtocol, ANAnalyticsSystemProtocol, ANAnalyticsAssistantProtocol;

@interface ANAnalytics : NSObject <ANAnalyticsDailyDelegate>

@property (readonly) id<ANAnalyticsSystemProtocol> system;
@property (readonly) id<ANAnalyticsAssistantProtocol> assistant;
@property (readonly) id<ANAnalyticsDailyProtocol> dailyReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void).cxx_destruct;
- (void)error:(long long)a0;
- (id)initWithSystem:(id)a0 assistant:(id)a1 dailyReporter:(id)a2;
- (void)dailyReport:(id)a0 withPayload:(id)a1;
- (void)announcementSent:(id)a0 inHome:(id)a1 withError:(long long)a2 withTime:(double)a3 sendType:(unsigned long long)a4 ofGroupCount:(long long)a5;
- (void)announcementReceived:(id)a0 withTime:(double)a1 receiveTimeType:(unsigned long long)a2;
- (void)announcementPlayed:(id)a0 withTime:(double)a1 deadlineViolation:(double)a2 playbackSource:(unsigned long long)a3 ofGroupCount:(long long)a4;
- (void)announcementFinishedPlaying:(id)a0 withTime:(double)a1 ofGroupCount:(long long)a2;
- (void)announcementsExpired:(id)a0 ofGroupCount:(long long)a1;
- (void)announcementEntryAgeLimit:(id)a0 timeExceeded:(double)a1;
- (void)announcementsStorageAgeLimit:(id)a0;
- (void)playbackAction:(unsigned long long)a0 fromSource:(unsigned long long)a1;

@end
