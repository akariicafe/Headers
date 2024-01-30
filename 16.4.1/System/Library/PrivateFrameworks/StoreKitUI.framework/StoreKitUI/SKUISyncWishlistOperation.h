@class SKUIClientContext, NSObject;
@protocol OS_dispatch_queue;

@interface SKUISyncWishlistOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _resultBlock;
}

@property (copy) id /* block */ resultBlock;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_loadRemoteItemsForWishlist:(id)a0 didChange:(BOOL *)a1 error:(id *)a2;
- (BOOL)_mergeItems:(id)a0 wishlist:(id)a1 didChange:(BOOL *)a2 error:(id *)a3;
- (void)_sendLocalChangesForWishlist:(id)a0;
- (id)initWithClientContext:(id)a0;

@end
