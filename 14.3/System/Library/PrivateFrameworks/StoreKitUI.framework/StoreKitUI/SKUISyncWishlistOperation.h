@class SKUIClientContext, NSObject;
@protocol OS_dispatch_queue;

@interface SKUISyncWishlistOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _resultBlock;
}

@property (copy) id /* block */ resultBlock;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (void)main;
- (void)_sendLocalChangesForWishlist:(id)a0;
- (BOOL)_loadRemoteItemsForWishlist:(id)a0 didChange:(BOOL *)a1 error:(id *)a2;
- (BOOL)_mergeItems:(id)a0 wishlist:(id)a1 didChange:(BOOL *)a2 error:(id *)a3;

@end
