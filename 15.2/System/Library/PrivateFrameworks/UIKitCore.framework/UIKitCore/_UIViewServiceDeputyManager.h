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
- (void)unregisterDeputyClass:(Class)a0;
- (void)viewControllerOperator:(id)a0 didCreateServiceViewControllerOfClass:(Class)a1;
- (unsigned long long)retainCount;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)a0 replyHandler:(id /* block */)a1;
- (id)retain;
- (void)registerDeputyClass:(Class)a0 withConnectionHandler:(id /* block */)a1;
- (int)__automatic_invalidation_logic;
- (Class)_deputyClassForConnectionSelector:(SEL)a0;
- (BOOL)_isDeallocating;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (void)__requestConnectionToDeputyOfClass:(Class)a0 fromHostObject:(byref id)a1 replyHandler:(id /* block */)a2;
- (BOOL)_tryRetain;
- (oneway void)release;
- (void)checkDeputyForRotation:(id)a0;

@end
