@class NSPredicate, PHFetchResult;

@interface PXResultTuple : NSObject

@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) BOOL fetchedWithReverseSortOrder;
@property (readonly, nonatomic) PHFetchResult *curatedFetchResult;
@property (readonly, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property (readonly, nonatomic) NSPredicate *filterPredicate;

- (void).cxx_destruct;
- (id)initWithFetchResult:(id)a0 fetchedWithReverseSortOrder:(BOOL)a1 curatedFetchResult:(id)a2 keyAssetsFetchResult:(id)a3 filterPredicate:(id)a4;
- (id)description;
- (id)resultTupleUpdatedWithChange:(id)a0;

@end
