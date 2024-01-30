@class MRUVolumeNowPlayingView, MediaControlsExpandableButton, MRUOutputDeviceAssetView, MRUVisualStylingProvider, MediaControlsBluetoothListeningModeButton;

@interface MRUVolumeBackgroundView : UIView

@property (retain, nonatomic) MRUOutputDeviceAssetView *primaryAssetView;
@property (retain, nonatomic) MRUOutputDeviceAssetView *secondaryAssetView;
@property (retain, nonatomic) MRUVolumeNowPlayingView *nowPlayingView;
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *primaryListeningModeButton;
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *secondaryListeningModeButton;
@property (retain, nonatomic) MediaControlsExpandableButton *spatialAudioModeButton;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) BOOL showSecondaryAssetView;
@property (nonatomic) BOOL showPrimaryListeningModeButton;
@property (nonatomic) BOOL showNowPlayingView;
@property (nonatomic) BOOL showSecondaryListeningModeButton;
@property (nonatomic) BOOL showSpatialAudioModeButton;
@property (readonly, nonatomic) BOOL hasExpandedButtons;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisibility;
- (void)layoutSubviewsVertical;
- (void).cxx_destruct;
- (void)layoutSubviewsHorizontal;
- (void)expandButton:(id)a0;
- (void)collapseExpandableButtons;

@end
