@class MTMetricsData, MTMediaActivityEventHandler, MTPAFPlaylistItem, MTPAFPlaylist;

@interface MTPAFItemActivity : NSObject

@property (retain, nonatomic) MTPAFPlaylistItem *item;
@property (retain, nonatomic) MTPAFPlaylist *playlist;
@property (retain, nonatomic) MTMediaActivityEventHandler *startEventHandler;
@property (retain, nonatomic) MTMediaActivityEventHandler *stopEventHandler;
@property (retain, nonatomic) MTMetricsData *startMetricsData;
@property (retain, nonatomic) MTMetricsData *stopMetricsData;

- (void).cxx_destruct;
- (void)populatePlaylistAndItemData:(id)a0;
- (void)startAtOverallPosition:(unsigned long long)a0 triggerType:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)stopAtOverallPosition:(unsigned long long)a0 triggerType:(id)a1 reason:(id)a2 eventData:(id)a3;

@end
