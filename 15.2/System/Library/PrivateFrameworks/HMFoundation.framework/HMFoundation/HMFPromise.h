@class HMFAsyncFuture;

@interface HMFPromise : NSObject {
    HMFAsyncFuture *_future;
    id /* block */ _completion;
    struct atomic_flag { _Atomic BOOL _Value; } _resolved;
}

@property (readonly, copy) id /* block */ resolverBlock;
@property (readonly, copy) id /* block */ errorOnlyResolverBlock;
@property (readonly, copy) id /* block */ voidResolverBlock;

- (BOOL)rejectWithError:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)fulfillWithValue:(id)a0;
- (BOOL)resolveWithFuture:(id)a0;

@end
