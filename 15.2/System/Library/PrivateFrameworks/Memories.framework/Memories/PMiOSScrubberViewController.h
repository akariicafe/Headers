@class PMiOSScrubberCollectionView, NSString, UIView, PMScrubberProvider;

@interface PMiOSScrubberViewController : UIViewController <PMiOSScrubberCollectionViewDelegate, PMScrubberProviderDelegate>

@property (weak, nonatomic) PMiOSScrubberCollectionView *collectionView;
@property (weak, nonatomic) UIView *playhead;
@property (nonatomic) double itemWidth;
@property (retain, nonatomic) PMScrubberProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)touchesBegan;
- (void)touchesEnded;
- (void)playbackProgressDidChange:(double)a0 provider:(id)a1;
- (void)resultUpdated:(id)a0;
- (void)setContentInsetWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateScrollWithProgress:(double)a0;
- (struct CGPoint { double x0; double x1; })scrollViewPlayheadPosition;
- (double)scrollViewProgress;

@end
