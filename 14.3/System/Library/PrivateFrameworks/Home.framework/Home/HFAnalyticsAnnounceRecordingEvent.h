@class NSNumber, NSString;

@interface HFAnalyticsAnnounceRecordingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *recordingDuration;
@property (retain, nonatomic) NSNumber *recordingFailed;
@property (retain, nonatomic) NSNumber *announceRecordingIsForHome;
@property (copy, nonatomic) NSString *announceRecordingIsForRoom;
@property (nonatomic) BOOL recordingInterruptedByUser;
@property (nonatomic) BOOL recordingInterruptedBySystem;
@property (nonatomic) BOOL recordingInterruptedByRouteChange;
@property (nonatomic) BOOL isAReply;
@property (retain, nonatomic) NSNumber *routeChangeInterruptionReason;
@property (retain, nonatomic) NSString *recipientAnnouncementID;
@property (retain, nonatomic) NSString *processName;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
