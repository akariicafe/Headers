@class CPUISongDetailsView, NSArray, CPUIPlayModeControlView, CPUIProgressView, UIFocusContainerGuide, CPUIShadowImageView, CPUITransportControlView, NSLayoutConstraint;
@protocol CPUINowPlayingLayoutProtocol;

@interface CPUINowPlayingView : UIView

@property (retain, nonatomic) UIFocusContainerGuide *controlsFocusContainerGuide;
@property (retain, nonatomic) UIFocusContainerGuide *bottomRegionFocusContainerGuide;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) NSArray *verticalSpacerLayoutGuides;
@property (retain, nonatomic) NSLayoutConstraint *songDetailsViewHeightConstraint;
@property (readonly, nonatomic) id<CPUINowPlayingLayoutProtocol> nowPlayingLayout;
@property (readonly, nonatomic) CPUITransportControlView *transportControlView;
@property (readonly, nonatomic) CPUIPlayModeControlView *playModeControlView;
@property (readonly, nonatomic) CPUIProgressView *progressView;
@property (readonly, nonatomic) CPUISongDetailsView *songDetailsView;
@property (readonly, nonatomic) CPUIShadowImageView *artworkViewBrick;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_constraintsForNowPlayingLayout:(id)a0;
- (id)_verticalSpacerLayoutGuidesForNowPlayingLayout:(id)a0;
- (void)recalculateLayout:(BOOL)a0 allowsAlbumArt:(BOOL)a1 hasDataSource:(BOOL)a2 viewArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 safeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 rightHandDrive:(BOOL)a5;

@end
