@class FCBoostableOperationThrottler, FCFetchedValueDescriptor, NSString, FCFetchedValueObservable;
@protocol NFCopying;

@interface FCFetchedValueManager : NSObject <FCBoostableOperationThrottlerDelegate, FCFetchedValueDescriptorObserving, FCFetchedValueManagerObserving, FCFetchedValueManager>

@property (readonly, copy, nonatomic) FCFetchedValueDescriptor *descriptor;
@property (readonly, nonatomic) FCBoostableOperationThrottler *operationThrottler;
@property (readonly, nonatomic) FCFetchedValueObservable *observable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NFCopying> value;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)fetchedObjectManager:(id)a0 valueDidChange:(id)a1;
- (void)operationThrottler:(id)a0 performAsyncOperationWithQualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_optionsForCachePolicy:(unsigned long long)a0;
- (id)_updateDependentManagersPromiseWithQualityOfService:(long long)a0;
- (unsigned long long)_cachePolicyForOptions:(unsigned long long)a0;
- (void)fetchValueWithQualityOfService:(long long)a0 completion:(id /* block */)a1;
- (id)valuePromiseWithQualityOfService:(long long)a0;
- (void)fetchedValueDescriptorValueIsDirty:(id)a0;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)initWithDescriptor:(id)a0;

@end
