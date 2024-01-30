@class NSRecursiveLock, NSHashTable;

@interface AVObjectRegistry : NSObject {
    NSHashTable *_registeredObjects;
    NSRecursiveLock *_lock;
}

+ (id)defaultObjectRegistry;

- (id)init;
- (void)safePostDelayedNotificationFromMainThreadTarget:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void)dealloc;
- (void)safePerformTarget:(id)a0 selector:(SEL)a1 object:(id)a2 delay:(double)a3;
- (void)registerObjectForSafeRetain:(id)a0;
- (void)safeInvokeWithDescriptionDelayed:(id)a0;
- (void)safePerformOnThread:(id)a0 target:(id)a1 selector:(SEL)a2 object:(id)a3;
- (void)safePerformOnMainThreadTarget:(id)a0 selector:(SEL)a1 object:(id)a2 delay:(double)a3;
- (void)safePerformOnMainThreadTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)safeInvokeWithDescription:(id)a0;
- (BOOL)safeRetainObject:(id)a0;
- (void)safePostDelayedNotificationFromThread:(id)a0 target:(id)a1 name:(id)a2 userInfo:(id)a3;
- (void)registerObject:(id)a0;
- (void)safePostNotificationFromThread:(id)a0 target:(id)a1 name:(id)a2 userInfo:(id)a3;
- (void)unregisterObject:(id)a0;
- (void)safePostNotificationFromMainThreadTarget:(id)a0 name:(id)a1 userInfo:(id)a2;

@end
