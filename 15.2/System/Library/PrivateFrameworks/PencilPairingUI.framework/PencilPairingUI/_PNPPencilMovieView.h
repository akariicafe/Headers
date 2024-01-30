@class AVPlayer;

@interface _PNPPencilMovieView : UIView {
    AVPlayer *_player;
    BOOL _repeat;
}

+ (double)_playbackRate;
+ (Class)layerClass;

- (void)teardown;
- (id)_playerLayer;
- (void)prepare;
- (void).cxx_destruct;
- (void)completeRevolutionWithCompletionBlock:(id /* block */)a0;
- (void)_applyFilterToLayer;
- (void)_playbackEnded;

@end
