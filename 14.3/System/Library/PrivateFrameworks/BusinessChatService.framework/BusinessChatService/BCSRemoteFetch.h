@interface BCSRemoteFetch : NSObject

+ (id)cloudServerRequestHelperForType:(long long)a0;
+ (id)createSessionForClientBundleID:(id)a0;
+ (id)_completionPool;
+ (id)_requestDispatchQueue;

- (void)enqueueCompletionBlock:(id /* block */)a0 forRequest:(id)a1 isDuplicateRequest:(BOOL *)a2;
- (id)dequeueCompletionBlocksForRequest:(id)a0;
- (id)_hashForRequest:(id)a0;
- (void)_enqueueCompletionBlock:(id /* block */)a0 forRequestHash:(id)a1 inCompletionPool:(id)a2 isDuplicateRequest:(BOOL *)a3;
- (id)_dequeueCompletionBlocksForRequestHash:(id)a0 inCompletionPool:(id)a1;

@end
