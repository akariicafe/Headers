@class UIView, NSString, AVButton, AVVolumeButtonControl, NSValue, AVPlayerController, AVMobileChromeControlsStyleSheet, AVObservationController;

@interface AVTurboModePlaybackControlsPlaceholderView : UIView

@property (retain, nonatomic) UIView *prominentPlayButtonContainer;
@property (weak, nonatomic) AVButton *prominentPlayButton;
@property (retain, nonatomic) UIView *volumeButtonContainer;
@property (weak, nonatomic) AVVolumeButtonControl *volumeButton;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (nonatomic) long long includedControlType;
@property (retain, nonatomic) AVMobileChromeControlsStyleSheet *styleSheet;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) long long preferredUnobscuredArea;
@property (copy, nonatomic) NSString *volumeButtonMicaPackageStateName;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } overrideTransformForProminentPlayButton;
@property (retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline;

- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIncludedViewType:(long long)a0;
- (id)_makeProminentPlayButtonAndContainer;
- (void)_makeProminentPlayButtonAndContainerIfNeeded;
- (id)_makeVolumeButtonAndContainer;
- (void)_makeVolumeButtonAndContainerIfNeeded;
- (void)_updateFramesAndHitRectInsets;
- (BOOL)hasVisibleControls;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleSheet:(id)a1;

@end
