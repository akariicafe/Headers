@class NSString;
@protocol PBItemRepresentationDataTransferDelegate;

@interface PBItemRepresentation : NSObject {
    id /* block */ _loader;
}

@property (nonatomic) unsigned long long preferredRepresentation;
@property (weak, nonatomic) id<PBItemRepresentationDataTransferDelegate> dataTransferDelegate;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic) long long visibility;
@property (nonatomic) BOOL isDataAvailableImmediately;

- (id)copyWithDoNothingLoaderBlock;
- (id)performProgressTrackingWithLoaderBlock:(id /* block */)a0 onCancelCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 preferredRepresentation:(unsigned long long)a1 loader:(id /* block */)a2;
- (id)loadWithCompletionHandler:(id /* block */)a0;
- (id)loadDataWithCompletion:(id /* block */)a0;
- (id)loadFileCopyWithCompletion:(id /* block */)a0;
- (void)setLoaderBlock:(id /* block */)a0;
- (id)_loadCompletionBlock:(id /* block */)a0;
- (id)loadOpenInPlaceWithCompletion:(id /* block */)a0;
- (id)initWithNSItemRepresentation:(id)a0;
- (id)v2_loadCompletionBlock:(id /* block */)a0;
- (void)v2_setLoader:(id /* block */)a0;
- (id)v2_loadOpenInPlaceWithCompletion:(id /* block */)a0;

@end
