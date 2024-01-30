@class UIView, NSString, AVButton, AVVolumeButtonControl, NSValue, AVStyleSheet, AVPlayerController, AVObservationController;

@interface AVTurboModePlaybackControlsPlaceholderView : UIView

@property (retain, nonatomic) UIView *prominentPlayButtonContainer;
@property (weak, nonatomic) AVButton *prominentPlayButton;
@property (retain, nonatomic) UIView *volumeButtonContainer;
@property (weak, nonatomic) AVVolumeButtonControl *volumeButton;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (nonatomic) long long includedControlType;
@property (retain, nonatomic) AVStyleSheet *styleSheet;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) long long preferredUnobscuredArea;
@property (copy, nonatomic) NSString *volumeButtonMicaPackageStateName;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } overrideTransformForProminentPlayButton;
@property (retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline;

- (id)_makeVolumeButtonAndContainer;
- (void)_makeProminentPlayButtonAndContainerIfNeeded;
- (id)_makeProminentPlayButtonAndContainer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleSheet:(id)a1;
- (BOOL)hasVisibleControls;
- (void)_updateFramesAndHitRectInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIncludedViewType:(long long)a0;
- (void)_makeVolumeButtonAndContainerIfNeeded;

@end
