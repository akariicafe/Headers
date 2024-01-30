@class NSPointerArray, NSObject;
@protocol OS_dispatch_queue, CRInvocationChainDelegate;

@interface CRInvocationChain : NSObject {
    NSObject<OS_dispatch_queue> *_chainedObjectsAccessQueue;
}

@property (retain, nonatomic, getter=_chainedObjects, setter=_setChainedObjects:) NSPointerArray *chainedObjects;
@property (weak, nonatomic) id<CRInvocationChainDelegate> delegate;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)addChainedObject:(id)a0;
- (void)_forwardInvocation:(id)a0;
- (void)_accessChainedObjectsSafely:(id /* block */)a0;
- (BOOL)_respondsToSelector:(SEL)a0;
- (id)_methodSignatureForSelector:(SEL)a0;
- (void)_addChainedObject:(id)a0;
- (void)_enumerateChainedObjectsUsingBlock:(id /* block */)a0;
- (BOOL)_isEligibleForSelector:(SEL)a0;
- (void)enumerateChainedObjectsUsingBlock:(id /* block */)a0;
- (BOOL)isEligibleForSelector:(SEL)a0;

@end
