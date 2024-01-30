@class NSPredicate, PHFetchResult;

@interface PXResultTuple : NSObject

@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) BOOL fetchedWithReverseSortOrder;
@property (readonly, nonatomic) PHFetchResult *curatedFetchResult;
@property (readonly, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property (readonly, nonatomic) id /* block */ curatedRefetchCondition;
@property (readonly, nonatomic) NSPredicate *filterPredicate;

- (id)resultTupleUpdatedWithChange:(id)a0;
- (id)initWithFetchResult:(id)a0 fetchedWithReverseSortOrder:(BOOL)a1 curatedFetchResult:(id)a2 curatedRefetchCondition:(id /* block */)a3 keyAssetsFetchResult:(id)a4 filterPredicate:(id)a5;
- (id)description;
- (void).cxx_destruct;

@end
