@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface NURenderTransaction : NSObject {
    long long _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) NSArray *pendingRequests;

+ (id)currentTransaction;
+ (void)commit;
+ (void)begin;
+ (void)group:(id /* block */)a0;
+ (void)setCurrentTransaction:(id)a0;
+ (void)commitAndNotifyOnQueue:(id)a0 withBlock:(id /* block */)a1;
+ (id)ensureCurrentTransaction;
+ (id)assertCurrentTransaction;
+ (void)_commit:(id)a0;
+ (void)withCurrentTransaction:(id /* block */)a0;

- (void)flush;
- (BOOL)commit;
- (BOOL)begin;
- (void).cxx_destruct;
- (void)submitRequest:(id)a0;
- (id)init;
- (void)notifyCompletion:(id)a0 block:(id /* block */)a1;
- (void)submitPendingRequests;
- (void)resetPendingRequests;

@end
