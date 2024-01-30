@class AVPlayerLooper, AVQueuePlayer, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface SFMediaPlayerView : UIView {
    AVPlayerLooper *_avLooper;
    AVQueuePlayer *_avQueuePlayer;
    NSMutableArray *_mediaItems;
    NSObject<OS_dispatch_source> *_speedUpTimer;
}

@property (nonatomic) BOOL pausesAfterEachItem;

+ (Class)layerClass;

- (void)advanceToNextItem;
- (void)play;
- (void).cxx_destruct;
- (BOOL)isPaused;
- (void)stop;
- (void)pause;
- (void)playerItemDidReachEnd:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_pause;
- (void)startMovieLoopWithPath:(id)a0;
- (void)startMovieLoopWithPath:(id)a0 assetType:(int)a1 adjustmentsURL:(id)a2;
- (void)updateViewForAssetType:(int)a0 adjustmentsURL:(id)a1;
- (void)removeMovieItem:(id)a0;
- (void)stopSpeedUpTimer;
- (void)enqueueItemsFromMediaItem:(id)a0 afterItem:(id)a1;
- (void)dequeueNonPlayingItemsFromMediaItem:(id)a0;
- (void)setUpTimeRangeNotificationsForItem:(id)a0;
- (void)addMovieItem:(id)a0;
- (void)removeAllQueuedItems;
- (void)breakFirstEnqueuedLoop;
- (void)speedUpRemainderOfCurrentItem;

@end
