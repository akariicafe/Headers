@class UIView, MPRouteButton, MPRouteLabel, NSString, NUTouchInsetsButton, UIButton, UIContextMenuInteraction, MPMediaControls;
@protocol NUNowPlayingBottomControlsDelegate;

@interface NUNowPlayingBottomControls : UIView <UIContextMenuInteractionDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *playbackSpeedButton;
@property (retain, nonatomic) MPRouteButton *routeButton;
@property (retain, nonatomic) MPRouteLabel *routeLabel;
@property (retain, nonatomic) MPMediaControls *mediaControls;
@property (retain, nonatomic) NUTouchInsetsButton *ellipsisButton;
@property (nonatomic) double inset;
@property (weak, nonatomic) id<NUNowPlayingBottomControlsDelegate> delegate;
@property (retain, nonatomic) UIContextMenuInteraction *playbackSpeedInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_labelForRate:(double)a0;
+ (id)_accessibilityValueForRate:(double)a0;

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;
- (void)setRate:(double)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)playbackSpeedButtonTapped:(id)a0;
- (void)routeButtonTouchDown:(id)a0;
- (void)routeButtonTouchUpOutside:(id)a0;
- (void)routeButtonTapped:(id)a0;
- (void)ellipsisButtonTapped:(id)a0;
- (void)updateEllipsisButtonImage;
- (void)updatePlaybackSpeedButtonFont;
- (id)buttonTitleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inset:(double)a1;

@end
