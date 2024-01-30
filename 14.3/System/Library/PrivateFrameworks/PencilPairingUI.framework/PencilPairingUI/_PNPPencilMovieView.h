@class AVPlayer;

@interface _PNPPencilMovieView : UIView {
    AVPlayer *_player;
    BOOL _repeat;
}

+ (Class)layerClass;
+ (double)_playbackRate;

- (void)prepare;
- (void)teardown;
- (void).cxx_destruct;
- (id)_playerLayer;
- (void)completeRevolutionWithCompletionBlock:(id /* block */)a0;
- (void)_applyFilterToLayer;
- (void)_playbackEnded;

@end
