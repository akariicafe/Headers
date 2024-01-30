@class ISOperationQueue, ISLoadURLBagOperation, ISURLBag, NSMutableArray;

@interface SKUIURLBag : SSURLBag {
    ISURLBag *_bag;
    NSMutableArray *_completionBlocks;
    BOOL _forceInvalidationForNextLoad;
    ISLoadURLBagOperation *_operation;
}

@property (class, readonly) ISOperationQueue *bagQueue;

+ (id)URLBagForContext:(id)a0;

- (void)_enqueueOperationWithContext:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadWithCompletionBlock:(id /* block */)a0;
- (id)storeFrontIdentifier;
- (void)loadValueForKey:(id)a0 completionBlock:(id /* block */)a1;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)getTrustForURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)invalidate;
- (id)existingBagDictionary;
- (void)_finishOperationWithURLBag:(id)a0 error:(id)a1;

@end
