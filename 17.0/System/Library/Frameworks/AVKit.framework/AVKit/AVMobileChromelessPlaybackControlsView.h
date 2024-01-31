@class AVMobileChromelessControlsStyleSheet, NSString, AVMobileChromelessPlaybackControlButton;
@protocol AVMobileChromelessPlaybackControlsViewDelegate;

@interface AVMobileChromelessPlaybackControlsView : AVView <UIPointerInteractionDelegate> {
    AVMobileChromelessPlaybackControlButton *_playPauseButton;
}

@property (readonly, nonatomic) AVMobileChromelessPlaybackControlButton *backwardSecondaryButton;
@property (readonly, nonatomic) AVMobileChromelessPlaybackControlButton *forwardSecondaryButton;
@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (nonatomic) BOOL playPauseButtonShowsPlayIcon;
@property (nonatomic) BOOL showsPlayPauseButton;
@property (nonatomic) BOOL showsBackwardSecondaryPlaybackButton;
@property (nonatomic) BOOL showsForwardSecondaryPlaybackButton;
@property (nonatomic) BOOL backwardSecondaryControlEnabled;
@property (nonatomic) BOOL forwardSecondaryControlEnabled;
@property (nonatomic) unsigned long long backwardSecondaryControlIcon;
@property (nonatomic) unsigned long long forwardSecondaryControlIcon;
@property (weak) id<AVMobileChromelessPlaybackControlsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)a0;
- (void)playPauseButtonWasPressed;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)backwardsSecondaryControlWasPressed;
- (void)forwardSecondaryControlWasPressed;
- (void)_addPlaybackControlViews:(id)a0;
- (id)initWithStyleSheet:(id)a0;
- (void)setBackwardsSecondaryControlEnabled:(BOOL)a0;
- (void)_updateForwardSecondaryControlIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateBackwardSecondaryControlIcon;
- (void)didMoveToWindow;

@end
