@class MRUVisualStylingProvider, MRUNowPlayingLabelView, MRUArtworkView, MRUTransportButton, NSString, MRUNowPlayingRoutingButton, MPAVRoute;

@interface MRUNowPlayingHeaderView : UIControl <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (retain, nonatomic) MRUNowPlayingLabelView *labelView;
@property (readonly, nonatomic) MRUArtworkView *artworkView;
@property (readonly, nonatomic) MRUNowPlayingRoutingButton *routingButton;
@property (readonly, nonatomic) MRUTransportButton *transportButton;
@property (retain, nonatomic) MPAVRoute *route;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) BOOL showPlaceholderText;
@property (nonatomic) BOOL showArtworkView;
@property (nonatomic) BOOL showTransportButton;
@property (nonatomic) BOOL showRoutingButton;
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property (nonatomic) long long layout;
@property (nonatomic) long long context;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) double textCenterOffsetY;
@property (nonatomic) BOOL useArtworkOverrideFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } artworkOverrideFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateVisualStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateVisibility;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)textInsetForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateArtworkStyle;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
