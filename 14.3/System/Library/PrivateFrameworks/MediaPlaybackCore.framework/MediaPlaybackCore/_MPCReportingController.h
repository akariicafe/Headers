@class MPCReportingPlaybackObserver, NSString, MPAssistantAnalyticsReportingController, MPRTCReportingController, MPCJinglePlayActivityReportingController, MPCLyricsReportingController, MPCPlaybackEngine, MPCPlaybackHistoryController;

@interface _MPCReportingController : NSObject <ICEnvironmentMonitorObserver>

@property (retain, nonatomic) MPAssistantAnalyticsReportingController *assistantAnalyticsController;
@property (retain, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController;
@property (retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver;
@property (retain, nonatomic) MPRTCReportingController *rtcReportingController;
@property (retain, nonatomic) MPCPlaybackHistoryController *playbackHistoryController;
@property (retain, nonatomic) MPCLyricsReportingController *lyricsReportingController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaybackEngine:(id)a0;
- (void)reportUserSeekFromTime:(double)a0 toTime:(double)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)recordLyricsViewEvent:(id)a0;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;

@end
