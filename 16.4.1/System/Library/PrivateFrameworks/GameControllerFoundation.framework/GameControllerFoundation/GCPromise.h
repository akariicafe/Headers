@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (id)future;
- (id)redactedDescription;
- (id)debugDescription;
- (void)cancel;
- (void)dealloc;
- (void)failWithError:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)succeedWithResult:(id)a0;

@end
