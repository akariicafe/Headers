@class MPUMarqueeView, UILabel, MediaControlsRoutingButtonView, _UICursorInteraction, UIView, MPRouteLabel, MPCPlayerPath, NSString, UIButton, MTMaterialView, MPButton, MTVisualStylingProvider, UIImageView;

@interface MediaControlsHeaderView : UIView <_UICursorInteractionDelegate>

@property (retain, nonatomic) _UICursorInteraction *cursorInteraction;
@property (retain, nonatomic) MTMaterialView *artworkBackground;
@property (retain, nonatomic) UIView *shadow;
@property (retain, nonatomic) MPUMarqueeView *primaryMarqueeView;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) MPUMarqueeView *secondaryMarqueeView;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (nonatomic) BOOL shouldUseOverrideSize;
@property (retain, nonatomic) UIView *artworkContentView;
@property (copy, nonatomic) MPCPlayerPath *playerPath;
@property (retain, nonatomic) UIImageView *artworkView;
@property (retain, nonatomic) UIImageView *placeholderArtworkView;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic) long long style;
@property (retain, nonatomic) MPRouteLabel *routeLabel;
@property (copy, nonatomic) NSString *primaryString;
@property (copy, nonatomic) NSString *secondaryString;
@property (copy, nonatomic) NSString *placeholderString;
@property (nonatomic) BOOL showPlaceholderString;
@property (retain, nonatomic) MediaControlsRoutingButtonView *routingButton;
@property (retain, nonatomic) MPButton *doneButton;
@property (retain, nonatomic) UIButton *launchNowPlayingAppButton;
@property (nonatomic) BOOL marqueeEnabled;
@property (nonatomic) long long buttonType;
@property (nonatomic, getter=isRouting) BOOL routing;
@property (nonatomic) BOOL scalePlaceholderImage;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (nonatomic) struct CGSize { double width; double height; } overrideSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_updateStyle;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)a0;
- (void)updateArtworkStyle;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })layoutTextInAvailableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 setFrames:(BOOL)a1;
- (void)clearOverrideSize;
- (void)_updateRTL;
- (void)launchNowPlayingAppButtonPressed;

@end
