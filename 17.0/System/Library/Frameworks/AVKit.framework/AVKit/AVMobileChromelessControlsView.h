@class AVMobileChromelessVolumeControlsView, UIView, NSArray, AVMobileChromelessTimelineView, CAGradientLayer, AVMobileChromelessBackgroundGradientView, AVMobileChromelessPlaybackControlsView, AVMobileAuxiliaryControlsView, AVMobileContentTabSelectionView, AVMobileChromelessDisplayModeControlsView, AVMobileContentTagView, AVMobileTitlebarView;
@protocol AVMobileChromelessControlsViewDelegate;

@interface AVMobileChromelessControlsView : AVView {
    CAGradientLayer *_bottomFadeoutMaskLayer;
}

@property (nonatomic) struct AVMobileChromelessControlsLayoutConfiguration { unsigned long long includedControls; BOOL expanded; double controlsPadding; unsigned long long auxiliaryControlsPlacement; NSArray *pinnedAuxiliaryControls; BOOL contentTabPresented; double contentTabPresentationHeight; } layoutConfiguration;
@property (weak, nonatomic) id<AVMobileChromelessControlsViewDelegate> delegate;
@property (nonatomic) BOOL layoutAllowed;
@property (retain, nonatomic) AVMobileAuxiliaryControlsView *auxiliaryControlsView;
@property (retain, nonatomic) AVMobileChromelessBackgroundGradientView *backgroundView;
@property (retain, nonatomic) AVMobileContentTabSelectionView *contentTabSelectionView;
@property (retain, nonatomic) AVMobileChromelessDisplayModeControlsView *displayModeControlsView;
@property (retain, nonatomic) AVMobileContentTagView *liveEdgeContentTagView;
@property (retain, nonatomic) AVMobileChromelessPlaybackControlsView *playbackControlsView;
@property (retain, nonatomic) AVMobileChromelessTimelineView *timelineView;
@property (retain, nonatomic) AVMobileTitlebarView *titlebarView;
@property (retain, nonatomic) AVMobileChromelessVolumeControlsView *volumeControlsView;
@property (retain, nonatomic) UIView *contentTabView;

- (id)init;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
