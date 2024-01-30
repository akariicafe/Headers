@class PUFilmstripWrapperView, NSString;

@interface PUFilmstripTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerTimeObserver>

@property (readonly, nonatomic) PUFilmstripWrapperView *wrapperView;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) struct CGSize { double width; double height; } expandedSize;
@property (nonatomic) struct CGSize { double width; double height; } unexpandedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExpanded:(BOOL)a0;
- (void)didChangeVisibleRect;
- (void)applyLayoutInfo:(id)a0;
- (BOOL)wantsVisibleRectChanges;
- (void).cxx_destruct;
- (void)_updateFilmstripView;
- (void)didChangeAnimating;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)loadView;
- (struct CGSize { double x0; double x1; })targetSizeForProposedTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAssetViewModel:(id)a0;
- (id)_currentIndicatorInfos;
- (void)videoPlayer:(id)a0 desiredSeekTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)becomeReusable;
- (void)videoPlayer:(id)a0 currentTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_updateFilmStripContents;

@end
