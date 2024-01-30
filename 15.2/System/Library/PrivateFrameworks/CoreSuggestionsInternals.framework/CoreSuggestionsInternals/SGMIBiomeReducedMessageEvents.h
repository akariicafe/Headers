@interface SGMIBiomeReducedMessageEvents : NSObject

@property (readonly, nonatomic) BOOL scrolledToEnd;
@property (readonly, nonatomic) BOOL userReplied;
@property (readonly, nonatomic) unsigned int numberOfMailsViewedBeforeSinceAvailable;
@property (readonly, nonatomic) double timeBeforeViewStartSinceAvailable;
@property (readonly, nonatomic) unsigned int messageViewCount;
@property (readonly, nonatomic) double messageViewMaxDwellTime;
@property (readonly, nonatomic) double messageViewTotalDwellTime;
@property (readonly, nonatomic) unsigned int numberOfUnreadMessageAtFirstViewTime;
@property (readonly, nonatomic) unsigned int numberOfMoreRecentUnreadMessageAtFirstViewTime;
@property (readonly, nonatomic) BOOL markedAsRead;
@property (readonly, nonatomic) BOOL markedAsUnread;
@property (readonly, nonatomic) BOOL mailGotFlagged;
@property (readonly, nonatomic) BOOL replyDraftStarted;
@property (readonly, nonatomic) BOOL forwardDraftStarted;
@property (readonly, nonatomic) BOOL markedAsJunk;
@property (readonly, nonatomic) BOOL linkClicked;
@property (readonly, nonatomic) double firstAppLaunchFollowingFetch;
@property (readonly, nonatomic) double messageFetchTime;

- (id)init;
- (id)initWithScrolledToEnd:(BOOL)a0 messageViewMaxDwellTime:(double)a1 messageViewTotalDwellTime:(double)a2 messageViewCount:(unsigned int)a3 timeBeforeViewStartSinceAvailable:(double)a4 numberOfMailsViewedBeforeSinceAvailable:(unsigned int)a5 userReplied:(BOOL)a6 replyDraftStarted:(BOOL)a7 forwardDraftStarted:(BOOL)a8 numberOfUnreadMessageAtFirstViewTime:(unsigned int)a9 numberOfMoreRecentUnreadMessageAtFirstViewTime:(unsigned int)a10 markedAsRead:(BOOL)a11 markedAsUnread:(BOOL)a12 markedAsJunk:(BOOL)a13 mailGotFlagged:(BOOL)a14 linkClicked:(BOOL)a15;
- (void)updateWithAppLaunchAtTime:(double)a0;
- (void)updateWithViewStartAtTime:(double)a0 unreadMessageCount:(unsigned int)a1;
- (void)updateWithViewEndWithPayload:(id)a0;
- (void)updateWithMessageFetchedEventAtTime:(double)a0;
- (void)updateWithFlagChangedEvent;
- (void)updateWithReadChangedEventWithPayload:(id)a0;
- (void)updateWithMessageMovedEventWithPayload:(id)a0;
- (void)updateWithEvent:(id)a0 eventTimestamp:(double)a1;
- (double)messageAvailableTime;
- (void)incrementNumberOfMailsViewedBeforeSinceAvailable;
- (void)incrementNumberOfMoreRecentUnreadMessageAtFirstViewTime;

@end
