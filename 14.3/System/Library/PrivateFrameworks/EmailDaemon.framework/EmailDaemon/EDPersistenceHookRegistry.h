@interface EDPersistenceHookRegistry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct __CFDictionary { } *_hookRespondersBySelector;
    struct __CFDictionary { } *_methodSignaturesBySelector;
}

+ (id)_proxiedProtocols;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_forwardStackInvocation:(id)a0;
- (void)registerProtectedDataReconciliationHookResponder:(id)a0;
- (void)registerDatabaseChangeHookResponder:(id)a0;
- (void)registerMessageChangeHookResponder:(id)a0;
- (void)unregisterAllHookResponders;
- (void)registerAccountChangeHookResponder:(id)a0;
- (void)registerActivityHookResponder:(id)a0;
- (void)registerMessageDeliveryHookResponder:(id)a0;
- (void)unregisterHookResponder:(id)a0;
- (void)registerMailboxChangeHookResponder:(id)a0;
- (void)_initializeMethodSignatures;
- (void)_registerSelector:(SEL)a0 types:(const char *)a1;
- (void)_registerHookResponder:(id)a0 withMethodDescription:(struct objc_method_description { SEL x0; char *x1; })a1;
- (id)_copyRespondersForSelector:(SEL)a0;
- (void)_messageRespondersWithInvocation:(id)a0;
- (void)_registerHookResponder:(id)a0 protocol:(id)a1;
- (void)registerThreadChangeHookResponder:(id)a0;
- (void)registerSearchableIndexHookResponder:(id)a0;
- (void)registerMessageReadHookResponder:(id)a0;

@end
