@class NSNumber, NSString;

@interface HFAnalyticsAnnouncePlaybackEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *playbackDuration;
@property (retain, nonatomic) NSNumber *playbackFailed;
@property (nonatomic) BOOL playbackInterruptedByUser;
@property (nonatomic) BOOL playbackInterruptedBySystem;
@property (nonatomic) BOOL playbackInterruptedByRouteChange;
@property (retain, nonatomic) NSNumber *routeChangeInterruptionReason;
@property (retain, nonatomic) NSString *playbackAnnouncementID;
@property (retain, nonatomic) NSNumber *audioTranscriptionsAreEnabled;
@property (retain, nonatomic) NSString *processName;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
