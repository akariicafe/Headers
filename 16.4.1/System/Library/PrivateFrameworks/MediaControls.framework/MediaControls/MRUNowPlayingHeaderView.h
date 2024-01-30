@class MRUNowPlayingLabelView, MRUTransportButton, MRUVisualStylingProvider, MRUWaveformView;

@interface MRUNowPlayingHeaderView : UIView

@property (retain, nonatomic) MRUWaveformView *waveformView;
@property (readonly, nonatomic) MRUNowPlayingLabelView *labelView;
@property (readonly, nonatomic) MRUTransportButton *routingButton;
@property (readonly, nonatomic) MRUTransportButton *transportButton;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) BOOL showTransportButton;
@property (nonatomic) BOOL showRoutingButton;
@property (nonatomic) BOOL showWaveform;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double textCenterOffsetY;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateVisibility;
- (id)initWithWaveformView:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
