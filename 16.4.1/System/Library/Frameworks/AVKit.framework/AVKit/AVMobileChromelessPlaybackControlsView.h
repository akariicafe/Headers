@class AVButton, AVMobileChromelessControlsStyleSheet;
@protocol AVMobileChromelessPlaybackControlsViewDelegate;

@interface AVMobileChromelessPlaybackControlsView : AVView {
    AVButton *_leftSecondaryButton;
    AVButton *_rightSecondaryButton;
    AVButton *_playPauseButton;
}

@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (nonatomic) BOOL playPauseButtonShowsPlayIcon;
@property (nonatomic) BOOL leftSecondaryControlEnabled;
@property (nonatomic) BOOL rightSecondaryControlEnabled;
@property (nonatomic) unsigned long long leftSecondaryControlIcon;
@property (nonatomic) unsigned long long rightSecondaryControlIcon;
@property (weak) id<AVMobileChromelessPlaybackControlsViewDelegate> delegate;

- (void)_addPlaybackControlViews:(id)a0;
- (void)playPauseButtonWasPressed;
- (void)rightSecondaryControlWasPressed;
- (id)initWithStyleSheet:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateLeftSecondaryControlIcon;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)a0;
- (void)layoutSubviews;
- (void)_updateRightSecondaryControlIcon;
- (void)leftSecondaryControlWasPressed;
- (void).cxx_destruct;

@end
