@class UIView;

@interface SBApplicationBlurSnapshotGenerationContainerView : UIView

@property (retain, nonatomic) UIView *wallpaperView;
@property (retain, nonatomic) UIView *realSnapshotView;
@property (retain, nonatomic) UIView *liveBlurView;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
