@class MTPAFKit, MTMetricsData;
@protocol MTMediaPlaylistItem;

@interface MTMediaActivity : NSObject

@property (weak, nonatomic) MTPAFKit *pafKit;
@property (nonatomic) long long type;
@property (retain, nonatomic) MTMetricsData *startMetricsData;
@property (retain, nonatomic) MTMetricsData *stopMetricsData;
@property (retain, nonatomic) id<MTMediaPlaylistItem> playlistItem;

+ (unsigned long long)startOverallPositionForItem:(id)a0;

- (BOOL)isStopped;
- (void).cxx_destruct;
- (id)eventDataForTransitioningEvents;
- (id)initWithType:(long long)a0 playlistItem:(id)a1 pafKit:(id)a2;
- (unsigned long long)positionFromOverallPosition:(unsigned long long)a0;
- (id)startEventHandler;
- (void)startedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (id)stopEventHandler;
- (void)stoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;

@end
