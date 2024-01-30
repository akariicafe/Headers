@class PHFetchResult, PHFetchOptions, NSPredicate, PHCollection;
@protocol PXCollectionFetchOperationDelegate;

@interface PXCollectionFetchOperation : NSOperation

@property (retain, nonatomic) PHFetchResult *outputFetchResult;
@property (weak, nonatomic) id<PXCollectionFetchOperationDelegate> delegate;
@property (retain, nonatomic) PHFetchOptions *fetchOptions;
@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate;

+ (id)fetchOperationWithCollection:(id)a0 delegate:(id)a1;

- (id)init;
- (void)handleBegin;
- (void).cxx_destruct;
- (id)initWithCollection:(id)a0 assetsFilterPredicate:(id)a1;
- (void)handleFinish;
- (void)main;

@end
