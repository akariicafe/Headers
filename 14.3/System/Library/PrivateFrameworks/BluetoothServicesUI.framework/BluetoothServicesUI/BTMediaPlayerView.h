@class AVPlayerLooper, AVQueuePlayer;

@interface BTMediaPlayerView : UIView {
    AVPlayerLooper *_avLooper;
    AVQueuePlayer *_avPlayer;
}

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)stop;
- (void)startMovieLoopWithPath:(id)a0;
- (void)startMovieLoopWithPath:(id)a0 assetType:(int)a1 adjustmentsURL:(id)a2;

@end
