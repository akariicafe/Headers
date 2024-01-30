@class MTMediaTimeTracker, MTMediaActivity, NSMutableArray, MTVPAFKit;
@protocol MTMediaPlaylist;

@interface MTMediaActivityTracker : NSObject

@property (weak, nonatomic) MTVPAFKit *vpafKit;
@property (retain, nonatomic) id<MTMediaPlaylist> playlist;
@property (retain, nonatomic) MTMediaActivity *playActivity;
@property (retain, nonatomic) MTMediaActivity *seekActivity;
@property (retain, nonatomic) NSMutableArray *eventData;
@property (retain, nonatomic) MTMediaTimeTracker *timeTracker;
@property (nonatomic) BOOL shouldGenerateTransitions;

+ (id /* block */)playlistItemComparator;

- (void).cxx_destruct;
- (void)seekStoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)playStartedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)seekStartedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)playStoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (id)initWithVPAFKit:(id)a0 playlist:(id)a1 eventData:(id)a2;
- (void)updateEventData:(id)a0;
- (void)playStartedWithPlaybackRate:(float)a0 overallPosition:(unsigned long long)a1 type:(id)a2 reason:(id)a3 eventData:(id)a4;
- (void)synchronizeAtOverallPosition:(unsigned long long)a0;
- (id)startActivity:(long long)a0 overallPosition:(unsigned long long)a1 type:(id)a2 reason:(id)a3 eventData:(id)a4;
- (void)generatePlaylistTransitionsIfNecessary:(unsigned long long)a0;
- (void)stopActivity:(long long)a0 overallPosition:(unsigned long long)a1 type:(id)a2 reason:(id)a3 eventData:(id)a4;
- (void)synchronizePlaybackRate:(float)a0 overallPosition:(unsigned long long)a1;
- (id)combineEventData:(id)a0 withPlaylistDataForItem:(id)a1;
- (void)playTransitionedAtOverallPosition:(unsigned long long)a0 eventData:(id)a1;

@end
