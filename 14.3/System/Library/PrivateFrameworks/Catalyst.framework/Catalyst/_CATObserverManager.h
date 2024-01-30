@class NSString, CATOperation, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CATObserverManager : NSObject <CATOperationObserver> {
    NSMutableSet *mObservers;
    int mState;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_source> *mProgressSource;
    CATOperation *mOperation;
    CATOperation *mStrongOperation;
    BOOL mIsObserving;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)operationDidStart:(id)a0;
- (void)addObserver:(id)a0;
- (void)notifyObserversOperationDidProgress:(id)a0;
- (void)operationDidProgress:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithOperation:(id)a0;
- (void)operationDidFinish:(id)a0;

@end
