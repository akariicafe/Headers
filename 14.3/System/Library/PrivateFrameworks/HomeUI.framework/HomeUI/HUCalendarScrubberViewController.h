@class HUCalendarScrubberDataSource, NSString;
@protocol HUCalendarScrubberViewDelegate;

@interface HUCalendarScrubberViewController : UICollectionViewController <HUCalendarScrubberDataSourceChangeObserver>

@property (nonatomic) long long currentSection;
@property (retain, nonatomic) HUCalendarScrubberDataSource *dataSource;
@property (copy, nonatomic) id /* block */ scrollCompletionBlock;
@property (nonatomic) double lastBoundsWidth;
@property (weak, nonatomic) id<HUCalendarScrubberViewDelegate> scrubberDelegate;
@property (readonly, nonatomic) unsigned long long nextSection;
@property (readonly, nonatomic) unsigned long long previousSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewDidLoad;
- (void)scrubberDataSourceDidReload:(id)a0;
- (void)jumpToSection:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
