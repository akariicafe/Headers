@class NSTimer, NSObject;
@protocol TVPPlayback;

@interface TVPPlayerBookmarkMonitor : NSObject

@property (retain, nonatomic) NSTimer *bookmarkPeriodicSaveTimer;
@property (weak, nonatomic) NSObject<TVPPlayback> *player;
@property (nonatomic) BOOL playerHasFinishedLoading;

- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_playerStateWillChange:(id)a0;
- (void)_playerCurrentMediaItemWillChange:(id)a0;
- (void)_playerErrorDidOccur:(id)a0;
- (void)_updateBookmarkTimeForMediaItem:(id)a0 player:(id)a1 playbackOfMediaItemIsEnding:(BOOL)a2;
- (void)_updatePlayCountForMediaItem:(id)a0 player:(id)a1;
- (void)_bookmarkPeriodicSaveTimerFired:(id)a0;

@end
