@class UILayoutGuide, NSLayoutConstraint, UIView;

@interface AVPlayerViewControllerCustomControlsView : UIView {
    BOOL _needsInitialConstraints;
    NSLayoutConstraint *_transportControlsVisibleConstraint;
    NSLayoutConstraint *_transportControlsHiddenConstraint;
    NSLayoutConstraint *_volumeControlsVisibleConstraint;
    NSLayoutConstraint *_volumeControlsHiddenConstraint;
}

@property (readonly, nonatomic) UIView *transportControlsAreaLayoutGuideProvidingView;
@property (readonly, nonatomic) UIView *displayModeControlsAreaLayoutGuideProvidingView;
@property (readonly, nonatomic) UIView *volumeControlsAreaLayoutGuideProvidingView;
@property (readonly, nonatomic) UIView *unobscuredTopAreaLayoutGuideProvidingView;
@property (readonly, nonatomic) UIView *unobscuredCenterAreaLayoutGuideProvidingView;
@property (readonly, nonatomic) UIView *animatedUnobscuredCenterAreaLayoutGuideProvidingView;
@property (nonatomic) BOOL areTransportControlsVisible;
@property (nonatomic) BOOL areVolumeControlsVisible;
@property (readonly, nonatomic) UILayoutGuide *transportControlsAreaLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *displayModeControlsAreaLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *volumeControlsAreaLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *unobscuredCenterAreaLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *animatedUnobscuredCenterAreaLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *unobscuredTopAreaLayoutGuide;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
