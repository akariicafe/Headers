@class MUAMSResultCache, NSObject;
@protocol OS_dispatch_queue;

@interface MUAMSResultProvider : NSObject {
    MUAMSResultCache *_amsResultCache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithCache:(id)a0;
- (void)_finishWithResults:(id)a0 error:(id)a1 onCallbackQueue:(id)a2 completion:(id /* block */)a3;
- (void)fetchResultsForAdamIds:(id)a0 options:(id)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;
- (void)fetchResultsForBundleIds:(id)a0 options:(id)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;

@end
