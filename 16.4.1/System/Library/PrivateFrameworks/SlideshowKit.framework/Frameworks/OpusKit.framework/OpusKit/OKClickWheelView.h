@class UILabel, NSString, OKPresentationViewAllGestureRecognizer, OFUIButton, OFUIView, CAShapeLayer, OKCircleGestureRecognizer, UIImageView, NSOperationQueue, OKAudioPlaylist, UIGestureRecognizer;
@protocol OKClickWheelViewDelegate;

@interface OKClickWheelView : OFUIView <UIGestureRecognizerDelegate, OKAudioPlaylistDelegate, CAAnimationDelegate> {
    OFUIView *_containerView;
    OFUIButton *_playButton;
    BOOL _isAnimating;
    UIGestureRecognizer *_tapGestureRecognizer;
    OKCircleGestureRecognizer *_circleGestureRecognizer;
    OKPresentationViewAllGestureRecognizer *_allGestureRecognizer;
    BOOL _delegateRespondToDidCircleGesture;
    BOOL _delegateRespondWillAppear;
    BOOL _delegateRespondWillDisappear;
    BOOL _delegateRespondShouldAppear;
    CAShapeLayer *_volumeLayer;
    CAShapeLayer *_progressLayer;
    OFUIView *_musicInformationView;
    UIImageView *_thumbnailMusic;
    UILabel *_titleMusic;
    UILabel *_artisteName;
    UILabel *_beatsSentence;
    UIImageView *_chevronView;
    NSOperationQueue *_fetchInformationsQueue;
    BOOL _isInformationLoaded;
    OFUIButton *_closeButton;
}

@property (nonatomic) BOOL wantsProgress;
@property (nonatomic) id<OKClickWheelViewDelegate> delegate;
@property (nonatomic) double progress;
@property (nonatomic) double volume;
@property (nonatomic) OKAudioPlaylist *audioPlaylist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPresented;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)handleLongPress:(id)a0;
- (void)show;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)hide;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)buttonPressed:(id)a0;
- (void)closeButtonPressed:(id)a0;
- (void)initButtons;
- (void)audioStartedPlayingWithAVAsset:(id)a0;
- (void)notifyProgress:(id)a0;
- (void)_setupLayerShadowForLabel:(id)a0;
- (void)activateProgress:(id)a0;
- (id)animationForKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2 duration:(double)a3 timmingFunctionName:(id)a4 delegate:(id)a5;
- (void)audioFinishedPlayingWithAVAsset:(id)a0;
- (void)handleAllGestures:(id)a0;
- (void)initAlbumInformationView;
- (void)initGesture;
- (id)initWithContainerView:(id)a0 andAuthoringGuidelines:(id)a1;
- (void)updateMusicInformation:(id)a0;

@end
