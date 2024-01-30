@class UIImpactFeedbackGenerator, ISTouchLivePhotoPlaybackFilter, ISLivePhotoPlayer, NSString, UILabel, UIGestureRecognizer, CAMeshTransform;
@protocol ISLivePhotoUIViewDelegate;

@interface ISLivePhotoUIView : ISBasePlayerUIView <UIGestureRecognizerDelegate, ISChangeObserver> {
    UIImpactFeedbackGenerator *_feedbackGenerator;
    struct { BOOL canBeginInteractivePlayback; } _delegateRespondsTo;
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

- (void)contentDidChange;
- (id)livePhotoPlayer;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handlePlaybackRecognizer:(id)a0;
- (void)setPlayer:(id)a0;
- (void)_updateGestureRecognizerParameters;
- (void)audioSessionDidChange;
- (void)_updatePlaybackFilterInput;
- (void)_playerDidChangePlaybackStyle;
- (void)_updatePlaybackFilter;
- (void)_updateVideoTransform;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_playerDidChangeHinting;
- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)_ISLivePhotoUIViewCommonInitialization;
- (void)_dismissOverlayLabel:(long long)a0;
- (void)_showOverlayLabel;

@end
