@class NSString, IKCollectionElement, TVCarouselLayout, _TVCarouselView, IKViewElement;

@interface _TVCarouselViewController : UIViewController <TVCarouselViewDataSource, TVCarouselViewDelegate, TVCollectionViewLockupCellDelegate, TVAppTemplateImpressionable> {
    TVCarouselLayout *_carouselLayout;
    IKCollectionElement *_collectionElement;
    _TVCarouselView *_carouselView;
    IKViewElement *_headerElement;
    struct { BOOL didAppear; BOOL indexesDirty; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headerElementFromCollectionElement:(id)a0;

- (void)_applicationWillResignActive:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_updateLayout;
- (void)_updateHeaderView;
- (id)preferredFocusEnvironments;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)_selectButtonAction:(id)a0;
- (id)carouselView:(id)a0 cellForItemAtIndex:(unsigned long long)a1;
- (void)carouselView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndex:(unsigned long long)a2;
- (void)carouselView:(id)a0 didEndDisplayingItemAtIndex:(unsigned long long)a1;
- (void)carouselView:(id)a0 didFocusItemAtIndex:(unsigned long long)a1;
- (void)carouselView:(id)a0 didSelectItemAtIndex:(unsigned long long)a1;
- (void)carouselView:(id)a0 willDisplayCell:(id)a1 forItemAtIndex:(unsigned long long)a2;
- (void)carouselView:(id)a0 willDisplayItemAtIndex:(unsigned long long)a1;
- (void)carouselViewDidScroll:(id)a0;
- (void)centerItemAtPageIndex:(long long)a0;
- (unsigned long long)numberOfItemsInCarouselView:(id)a0;
- (void)_cancelImpressionsUpdate;
- (void)_dispatchEvent:(id)a0 forItemAtIndex:(unsigned long long)a1 cell:(id)a2;
- (BOOL)_needsDefaultCarouselCells;
- (void)_playButtonAction:(id)a0;
- (void)_recordImpressionsForVisibleView;
- (void)_registerCellClasses;
- (void)_updateAutoScrollInterval;
- (void)_updateImpressions;
- (void)_updateLayoutAndReload;
- (void)collectionViewCellDidSelect:(id)a0;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (void)updateWithViewElement:(id)a0 layout:(id)a1;
- (struct CGSize { double x0; double x1; })viewSizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
