@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface _CATArbitratorWaitToken : NSObject {
    _Atomic int mState;
    NSMutableDictionary *mTokenByKey;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    NSObject<OS_dispatch_group> *mGroup;
    id /* block */ mCompletionBlock;
}

- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (id)initWithDelegateQueue:(id)a0 completionBlock:(id /* block */)a1;
- (void)waitForRegistrationEntry:(id)a0 forKey:(id)a1 exclusive:(BOOL)a2;
- (void)performCompletionBlock;
- (BOOL)whenStateIs:(int)a0 atomicallySwapWith:(int)a1;

@end
