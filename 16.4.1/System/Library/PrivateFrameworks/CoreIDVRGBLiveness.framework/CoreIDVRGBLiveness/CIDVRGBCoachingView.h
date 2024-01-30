@class AVPlayerViewController, AVQueuePlayer;

@interface CIDVRGBCoachingView : UIView {
    AVPlayerViewController *_playerViewController;
    AVQueuePlayer *_player;
    id /* block */ _completion;
    BOOL _loop;
    float playrate;
}

- (id)initWithDuration:(id)a0;
- (void)_setup:(id)a0;
- (void).cxx_destruct;
- (void)setStyle:(long long)a0;
- (void)playWithCompletion:(id /* block */)a0;
- (id)_maskingCompositionForAsset:(id)a0;
- (void)_notifyStyleFinished;
- (void)_videoPlaybackDidFinish:(id)a0;
- (id)_videoURLForStyle:(long long)a0;
- (void)setStyle:(long long)a0 loop:(BOOL)a1 completion:(id /* block */)a2;
- (void)stopWithoutCompletion;

@end
