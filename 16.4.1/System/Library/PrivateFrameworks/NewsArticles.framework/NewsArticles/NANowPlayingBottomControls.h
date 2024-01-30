@class UIContextMenuInteraction, MPMediaControls, NATouchInsetsButton, UIView, MPRouteButton, NSString;
@protocol NANowPlayingBottomControlsDelegate;

@interface NANowPlayingBottomControls : UIView <UIContextMenuInteractionDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NATouchInsetsButton *playbackSpeedButton;
@property (retain, nonatomic) NATouchInsetsButton *sizingPlaybackSpeedButton;
@property (retain, nonatomic) MPRouteButton *routeButton;
@property (retain, nonatomic) MPMediaControls *mediaControls;
@property (retain, nonatomic) NATouchInsetsButton *ellipsisButton;
@property (nonatomic) double inset;
@property (weak, nonatomic) id<NANowPlayingBottomControlsDelegate> delegate;
@property (retain, nonatomic) UIContextMenuInteraction *playbackSpeedInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_accessibilityValueForRate:(double)a0;
+ (id)_labelForRate:(double)a0;

- (void)setRate:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)routeDidChange:(id)a0;
- (void)playbackSpeedButtonTapped:(id)a0;
- (id)buttonTitleFont;
- (void)dismissAirplayPicker;
- (void)ellipsisButtonTapped:(id)a0;
- (double)iconCenterY;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inset:(double)a1;
- (void)layoutEllipsisButton;
- (void)layoutPlaybackSpeedButton;
- (void)layoutRouteButton;
- (void)routeButtonTapped:(id)a0;
- (void)routeButtonTouchDown:(id)a0;
- (void)routeButtonTouchUpOutside:(id)a0;
- (void)startAirplayStatusUpdates;
- (void)updateRouteButtonWithRoute:(id)a0;
- (double)widestPlaybackSpeedLabelWidth;

@end
