@class ISBasePlayerUIView, NSString, ISWrappedAVPlayer, ISPlayerItem, NSMutableSet, UIGestureRecognizer, NSError;
@protocol ISPlayerViewDelegate;

@interface ISPlayerView : UIView <ISChangeObserver, ISBasePlayerDelegate> {
    struct { BOOL playbackStateDidChange; BOOL interactingDidChange; BOOL gestureRecognizerDidChange; } _delegateRespondsTo;
    struct { BOOL playerItemLoadingTarget; BOOL playerPlayerItem; BOOL playerView; BOOL playerMuted; BOOL status; BOOL readyForDisplay; BOOL playbackState; } _isValid;
}

@property (retain, nonatomic, setter=_setPlayerView:) ISBasePlayerUIView *_playerView;
@property (readonly, nonatomic) ISWrappedAVPlayer *_videoPlayer;
@property (retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem;
@property (retain, nonatomic, setter=_setGestureRecognizer:) UIGestureRecognizer *_gestureRecognizer;
@property (nonatomic, setter=_setStatus:) long long status;
@property (nonatomic, setter=_setPlaybackState:) long long playbackState;
@property (nonatomic, setter=_setReadyForDisplay:) BOOL readyForDisplay;
@property (readonly, nonatomic) NSMutableSet *_activeGestures;
@property (nonatomic) unsigned long long playbackStyle;
@property (nonatomic) struct CGSize { double width; double height; } dimensionsOfReservedVideoMemory;
@property (nonatomic) BOOL audioMuted;
@property (readonly, nonatomic) BOOL isReadyForDisplay;
@property (readonly, nonatomic) BOOL isInteracting;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic) id<ISPlayerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setAllowPlayerReuse:(BOOL)a0;

- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentMode:(long long)a0;
- (void)_updateStatusIfNeeded;
- (void)_updatePlaybackStateIfNeeded;
- (void)_invalidateStatus;
- (void)_invalidatePlaybackState;
- (void).cxx_destruct;
- (id)initWithVideoPlayer:(id)a0;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_setInteracting:(BOOL)a0;
- (void)prepareWithPhoto:(struct CGImage { } *)a0 videoAsset:(id)a1 photoTime:(double)a2 photoEXIFOrientation:(int)a3;
- (id)videoPlayerForPlayer:(id)a0;
- (void)_handleGesture:(id)a0;
- (void)_updatePlayerPlayerItemIfNeeded;
- (void)_invalidatePlayerMuted;
- (void)_invalidatePlayerPlayerItem;
- (void)_invalidatePlayerView;
- (void)_invalidateReadyForDisplay;
- (void)_updatePlayerMutedIfNeeded;
- (void)_updatePlayerViewIfNeeded;
- (void)_updateReadyForDisplayIfNeeded;
- (void)prepareWithPlayerItem:(id)a0;

@end
