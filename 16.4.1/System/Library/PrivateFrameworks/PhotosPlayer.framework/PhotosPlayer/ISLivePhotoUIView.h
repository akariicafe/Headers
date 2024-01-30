@class UIImpactFeedbackGenerator, ISTouchLivePhotoPlaybackFilter, ISLivePhotoPlayer, NSString, UILabel, UIGestureRecognizer, CAMeshTransform;
@protocol ISLivePhotoUIViewDelegate;

@interface ISLivePhotoUIView : ISBasePlayerUIView <UIGestureRecognizerDelegate, ISChangeObserver> {
    UIImpactFeedbackGenerator *_feedbackGenerator;
    struct { BOOL canBeginInteractivePlayback; BOOL extraMinimumTouchDuration; } _delegateRespondsTo;
}

@property (retain, nonatomic, setter=_setPlaybackFilter:) ISTouchLivePhotoPlaybackFilter *_playbackFilter;
@property (nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality;
@property (readonly, nonatomic) UILabel *_overlayLabel;
@property (nonatomic, setter=_setOverlayDismissalID:) long long _overlayDismissalID;
@property (retain, nonatomic) ISLivePhotoPlayer *player;
@property (readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer;
@property (copy, nonatomic) CAMeshTransform *vitalityTransform;
@property (weak, nonatomic) id<ISLivePhotoUIViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_ISLivePhotoUIViewCommonInitialization;
- (void)_updatePlaybackFilterInput;
- (id)initWithCoder:(id)a0;
- (void)_playerDidChangeHinting;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_showOverlayLabel;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateVideoTransform;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_dismissOverlayLabel:(long long)a0;
- (void)setPlayer:(id)a0;
- (void)audioSessionDidChange;
- (void)dealloc;
- (void)_handlePlaybackRecognizer:(id)a0;
- (void)_updatePlaybackFilter;
- (id)livePhotoPlayer;
- (void)contentDidChange;
- (void)_playerDidChangePlaybackStyle;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setPlaybackFilterTouchActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateGestureRecognizerParameters;

@end
