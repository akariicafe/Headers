@class ISBasePlayerUIView, NSString, NSMutableSet, UIGestureRecognizer;
@protocol PBUILivePhotoPlayerViewDelegate;

@interface PBUILivePhotoPlayerView : UIView <ISChangeObserver, ISBasePlayerDelegate> {
    NSMutableSet *_forcePlaybackReasons;
}

@property (nonatomic, getter=isInteracting, setter=_setInteracting:) BOOL interacting;
@property (readonly, nonatomic) BOOL _isForcingPlayback;
@property (readonly, nonatomic) ISBasePlayerUIView *_playerUIView;
@property (weak, nonatomic) id<PBUILivePhotoPlayerViewDelegate> delegate;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (readonly, nonatomic) long long playbackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerViewWithRewindPlaybackStyle:(BOOL)a0;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setContentMode:(long long)a0;
- (void).cxx_destruct;
- (void)_common_configurePlayer:(id)a0;
- (void)_common_configurePlayerView:(id)a0;
- (void)_handlePlaybackGesture:(id)a0;
- (void)_subclass_updateForForcingPlayback:(BOOL)a0;
- (void)_subclass_updatePlayerItemForUse:(id)a0;
- (void)prepareWithPhoto:(struct CGImage { } *)a0 videoAsset:(id)a1 photoTime:(double)a2 photoEXIFOrientation:(int)a3;
- (void)startPlaybackWithReason:(id)a0;
- (void)stopPlaybackWithReason:(id)a0;
- (id)videoPlayerForPlayer:(id)a0;

@end
