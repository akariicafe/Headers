@class UIImpactFeedbackGenerator, ISTouchLivePhotoPlaybackFilter, ISLivePhotoPlayer, NSString, UILabel, UIGestureRecognizer, CAMeshTransform;

@interface ISLivePhotoUIView : ISBasePlayerUIView <UIGestureRecognizerDelegate, ISChangeObserver> {
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

@property (retain, nonatomic, setter=_setPlaybackFilter:) ISTouchLivePhotoPlaybackFilter *_playbackFilter;
@property (nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality;
@property (readonly, nonatomic) UILabel *_overlayLabel;
@property (nonatomic, setter=_setOverlayDismissalID:) long long _overlayDismissalID;
@property (retain, nonatomic) ISLivePhotoPlayer *player;
@property (readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer;
@property (copy, nonatomic) CAMeshTransform *vitalityTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentDidChange;
- (void)setPlayer:(id)a0;
- (void)_updatePlaybackFilterInput;
- (void).cxx_destruct;
- (void)_updateVideoTransform;
- (void)_dismissOverlayLabel:(long long)a0;
- (void)_handlePlaybackRecognizer:(id)a0;
- (void)dealloc;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateGestureRecognizerParameters;
- (id)initWithCoder:(id)a0;
- (void)_showOverlayLabel;
- (void)audioSessionDidChange;
- (void)_ISLivePhotoUIViewCommonInitialization;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_playerDidChangeHinting;
- (id)livePhotoPlayer;
- (void)_playerDidChangePlaybackStyle;
- (void)_updatePlaybackFilter;

@end
