@class CKVideoPlayerReusePool, NSString, UIView, CKReusableVideoPlayer, CKMovieMediaObject;
@protocol CKVideoPlayerBalloonViewDelegate;

@interface CKVideoPlayerBalloonView : CKImageBalloonView <UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate, CKReusableVideoPlayerDelegate>

@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) CKReusableVideoPlayer *reusablePlayer;
@property (retain, nonatomic) CKVideoPlayerReusePool *playerPool;
@property (nonatomic, getter=isObservingSceneDisconnects) BOOL observingSceneDisconnects;
@property (retain, nonatomic) CKMovieMediaObject *mediaObject;
@property (weak, nonatomic) id<CKVideoPlayerBalloonViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void)applicationDidEnterBackground:(id)a0;
- (void)layoutSubviews;
- (void)tapGestureRecognized:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)playerItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)playerViewController;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)doubleTapGestureRecognized:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (void)prepareForReuse;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)willMoveToWindow:(id)a0;
- (void)reusablePlayerDidStop;
- (void)reusablePlayerDidStart;
- (BOOL)gestureIsOurGesture:(id)a0;
- (void)cleanUpPlayerIfNeeded;
- (void)showPlayerViewController;
- (void)startPlayingInlineVideo;
- (void)pausePlayback;

@end
