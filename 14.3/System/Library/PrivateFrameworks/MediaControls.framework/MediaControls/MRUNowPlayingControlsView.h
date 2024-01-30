@class MRUNowPlayingTransportControlsView, MRUNowPlayingTimeControlsView, MRUVisualStylingProvider, MRUNowPlayingHeaderView, MRUNowPlayingVolumeControlsView;

@interface MRUNowPlayingControlsView : UIView

@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView;
@property (readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView;
@property (readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView;
@property (readonly, nonatomic) MRUNowPlayingVolumeControlsView *volumeControlsView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) long long context;
@property (nonatomic) BOOL showTimeControlsView;
@property (nonatomic) BOOL showTransportControlsView;
@property (nonatomic) BOOL supportsHorizontalLayout;

- (void).cxx_destruct;
- (void)updateVisibility;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTimeControlVisibility:(id)a0;

@end
