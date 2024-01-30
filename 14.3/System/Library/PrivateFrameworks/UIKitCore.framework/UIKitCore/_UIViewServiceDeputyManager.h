@class NSString, _UIAsyncInvocation, NSMutableDictionary, NSMutableSet, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    NSMutableSet *_deputies;
    id /* block */ _terminationHandler;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

@property id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)a0;

- (void)_invalidateUnconditionallyThen:(id /* block */)a0;
- (void)forwardInvocation:(id)a0;
- (int)__automatic_invalidation_logic;
- (void)unregisterDeputyClass:(Class)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)registerDeputyClass:(Class)a0 withConnectionHandler:(id /* block */)a1;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)a0 replyHandler:(id /* block */)a1;
- (unsigned long long)retainCount;
- (id)retain;
- (void)checkDeputyForRotation:(id)a0;
- (Class)_deputyClassForConnectionSelector:(SEL)a0;
- (void)viewControllerOperator:(id)a0 didCreateServiceViewControllerOfClass:(Class)a1;
- (void)__requestConnectionToDeputyOfClass:(Class)a0 fromHostObject:(byref id)a1 replyHandler:(id /* block */)a2;
- (void)invalidate;

@end
