@class ISOperationQueue, ISLoadURLBagOperation, ISURLBag, NSMutableArray;

@interface SKUIURLBag : SSURLBag {
    ISURLBag *_bag;
    NSMutableArray *_completionBlocks;
    BOOL _forceInvalidationForNextLoad;
    ISLoadURLBagOperation *_operation;
}

@property (class, readonly) ISOperationQueue *bagQueue;

+ (id)URLBagForContext:(id)a0;

- (void)loadWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)existingBagDictionary;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (void)_finishOperationWithURLBag:(id)a0 error:(id)a1;
- (id)storeFrontIdentifier;
- (void)getTrustForURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)_enqueueOperationWithContext:(id)a0 completionBlock:(id /* block */)a1;
- (void)invalidate;
- (void)loadValueForKey:(id)a0 completionBlock:(id /* block */)a1;

@end
