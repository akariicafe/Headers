@class PHCachingImageManager, PXCMMSuggestionsDataSource, NSString, PHImageRequestOptions, PXCMMSuggestionsDataSourceManager, UIView, PXDebugCMMSuggestionCollectionViewCell, _PXCMMSizingSuggestion, PXCMMWorkflowCoordinator;
@protocol PXDebugCMMSuggestionsDelegate;

@interface PXDebugCMMSuggestionsCollectionViewController : UICollectionViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMWorkflowCoordinatorDelegate, UICollectionViewDelegateFlowLayout> {
    struct CGSize { double width; double height; } _lastUpdateReferenceSize;
    PXCMMWorkflowCoordinator *_workflowCoordinator;
    UIView *_emptyPlaceholderView;
    PXDebugCMMSuggestionCollectionViewCell *_sizingCell;
    _PXCMMSizingSuggestion *_sizingSuggestion;
}

@property (retain, nonatomic) PXCMMSuggestionsDataSource *dataSource;
@property (readonly, nonatomic) PHCachingImageManager *cachingImageManager;
@property (readonly, nonatomic) PHImageRequestOptions *imageRequestOptions;
@property (readonly, nonatomic) PXCMMSuggestionsDataSourceManager *dataSourceManager;
@property (weak, nonatomic) id<PXDebugCMMSuggestionsDelegate> suggestionsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)workflowCoordinator:(id)a0 workflowViewController:(id)a1 didFinishSession:(id)a2 withActivityState:(unsigned long long)a3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_updateCollectionViewLayout;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithDataSourceManager:(id)a0;
- (id)initWithDataSourceManager:(id)a0 scrollDirection:(long long)a1;
- (void)_updateEmptyPlaceholderView;
- (BOOL)_dataSourceIsEmpty;
- (void)_configureGadgetView:(id)a0 forSuggestion:(id)a1;
- (double)_suggestionCellWidth;

@end
