@class NSMutableDictionary, NSMutableIndexSet, NSDictionary, NSMutableArray;

@interface IKJSDataSource : IKJSDataObservable <IKJSDataSource, _IKJSDataSourceProxy, _IKJSDataSource> {
    BOOL _dataSourceViewsDirty;
}

@property (readonly, nonatomic) NSMutableArray *dataSourceViewPointers;
@property (readonly, nonatomic) NSMutableDictionary *loadIndexesRequestsBySegmentIndex;
@property (readonly, nonatomic) NSMutableIndexSet *loadedSegmentIndexes;
@property (readonly, copy, nonatomic) NSDictionary *indexTitles;
@property (readonly, nonatomic) long long length;
@property (readonly, nonatomic) long long segmentSize;

+ (id)_titlesByIndexFromValue:(id)a0;
+ (id)jsExportedProperties;
+ (id)makeDataSource:(id)a0 :(id)a1 :(long long)a2;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)item:(long long)a0;
- (id)_dataSourceViews;
- (void)_didAdjustSegmentIndexesFromIndex:(long long)a0;
- (void)_loadUsedIndexes;
- (void)_resetLoadedSegments;
- (void)_resetUsedIndexesAndMigrateItems:(id)a0;
- (long long)_segmentIndexForItemIndex:(long long)a0;
- (id)_spliceAtIndex:(long long)a0 deleteCount:(long long)a1 insertions:(id)a2;
- (void)_updateTitlesFromIndex:(long long)a0 deleteCount:(long long)a1 insertionCount:(long long)a2 title:(id)a3;
- (void)addDataSourceView:(id)a0;
- (id)asPrivateIKJSDataSource;
- (id)boxedItem:(long long)a0;
- (id)delete:(long long)a0 :(long long)a1;
- (id)extraInfoForChangeInPathWithAccessorSequence:(id)a0 extraInfo:(id)a1;
- (id)initWithItems:(id)a0 indexTitles:(id)a1;
- (id)initWithItems:(id)a0 indexTitles:(id)a1 segmentSize:(long long)a2;
- (void)insert:(long long)a0 :(id)a1 :(id)a2;
- (void)markDataSourceViewsUpdated;
- (void)move:(long long)a0 :(long long)a1 :(long long)a2 :(id)a3;
- (void)removeDataSourceView:(id)a0;
- (id)replace:(long long)a0 :(id)a1;
- (void)update:(id)a0 :(id)a1 :(long long)a2;
- (id)valuesForSubscripts:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 boxed:(BOOL)a1;

@end
