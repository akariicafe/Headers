@class MTPAFKit, MTMetricsData;
@protocol MTMediaPlaylistItem;

@interface MTMediaActivity : NSObject

@property (weak, nonatomic) MTPAFKit *pafKit;
@property (nonatomic) long long type;
@property (retain, nonatomic) MTMetricsData *startMetricsData;
@property (retain, nonatomic) MTMetricsData *stopMetricsData;
@property (retain, nonatomic) id<MTMediaPlaylistItem> playlistItem;

+ (unsigned long long)startOverallPositionForItem:(id)a0;

- (void).cxx_destruct;
- (BOOL)isStopped;
- (id)startEventHandler;
- (unsigned long long)positionFromOverallPosition:(unsigned long long)a0;
- (id)stopEventHandler;
- (id)initWithType:(long long)a0 playlistItem:(id)a1 pafKit:(id)a2;
- (void)startedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)stoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (id)eventDataForTransitioningEvents;

@end
