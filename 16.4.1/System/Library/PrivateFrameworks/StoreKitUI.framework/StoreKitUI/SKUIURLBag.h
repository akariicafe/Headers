@class ISOperationQueue, ISLoadURLBagOperation, ISURLBag, NSMutableArray;

@interface SKUIURLBag : SSURLBag {
    ISURLBag *_bag;
    NSMutableArray *_completionBlocks;
    BOOL _forceInvalidationForNextLoad;
    ISLoadURLBagOperation *_operation;
}

@property (class, readonly) ISOperationQueue *bagQueue;

+ (id)URLBagForContext:(id)a0;

- (id)storeFrontIdentifier;
- (void)loadWithCompletionBlock:(id /* block */)a0;
- (void)getTrustForURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)_finishOperationWithURLBag:(id)a0 error:(id)a1;
- (void)_enqueueOperationWithContext:(id)a0 completionBlock:(id /* block */)a1;
- (void)invalidate;
- (void)loadValueForKey:(id)a0 completionBlock:(id /* block */)a1;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (id)existingBagDictionary;
- (void).cxx_destruct;

@end
