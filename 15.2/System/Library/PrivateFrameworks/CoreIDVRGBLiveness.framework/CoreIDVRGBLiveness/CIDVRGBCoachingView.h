@class AVPlayerViewController, AVQueuePlayer;

@interface CIDVRGBCoachingView : UIView {
    AVPlayerViewController *_playerViewController;
    AVQueuePlayer *_player;
    id /* block */ _completion;
    BOOL _loop;
    float playrate;
}

- (void)setStyle:(long long)a0;
- (void)playWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDuration:(id)a0;
- (void)_setup:(id)a0;
- (void)setStyle:(long long)a0 loop:(BOOL)a1 completion:(id /* block */)a2;
- (void)_notifyStyleFinished;
- (id)_videoURLForStyle:(long long)a0;
- (id)_maskingCompositionForAsset:(id)a0;
- (void)_videoPlaybackDidFinish:(id)a0;
- (void)stopWithoutCompletion;

@end
