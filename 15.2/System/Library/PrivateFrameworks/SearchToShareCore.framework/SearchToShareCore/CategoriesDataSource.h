@class NSArray, NSString, NSMutableArray, STSSearchModel;
@protocol STSSearchModelUpdateDelegate, STSCategorySelectionDelegate;

@interface CategoriesDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegate, PopUpDataSource, PopUpDelegate>

@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSMutableArray *recents;
@property (retain, nonatomic) NSMutableArray *model;
@property (retain, nonatomic) STSSearchModel *searchModel;
@property BOOL isScrolling;
@property (weak, nonatomic) id<STSSearchModelUpdateDelegate> updateDelegate;
@property (weak, nonatomic) id<STSCategorySelectionDelegate> selectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfRows;
- (id)initWithSearchModel:(id)a0;
- (void)didSelectItemAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)updateRecents:(id)a0;
- (void)updateModel;
- (id)_searchResultIdentifierForSuggestion:(id)a0 recent:(BOOL)a1;
- (void)sendRankSectionsFeedback;
- (void)addQueryToRecents:(id)a0;
- (BOOL)isGroupRow:(long long)a0;
- (id)stringValueForRowAtIndex:(long long)a0;
- (id)headerTitleForRow:(long long)a0;
- (BOOL)rowHasClearButton:(long long)a0;
- (void)_commitClearRecents;
- (id)recentQueries;
- (id)visibleResultsForIndexPaths:(id)a0;

@end
