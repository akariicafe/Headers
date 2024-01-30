@class SearchUIRowModel, NSString, UICollectionViewDiffableDataSource, UICollectionView, SFInfoTuple;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIInfoValueCollectionViewController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) SFInfoTuple *tuple;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) SearchUIRowModel *rowModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (id)_collectionView:(id)a0 styleForContextMenuWithConfiguration:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isShowMoreItemAtIndexPath:(id)a0;

@end
