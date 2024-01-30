@interface NSNotificationCenter : NSObject {
    void *_impl;
    void *_callback;
    void *_pad[11];
}

@property (class, readonly) NSNotificationCenter *defaultCenter;

+ (id)_defaultCenterWithoutCreating;
+ (void)load;

- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (unsigned long long)_addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3 options:(unsigned long long)a4;
- (id)addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (void)_removeObserver:(unsigned long long)a0;
- (void)removeObserver:(id)a0;
- (id)_initWithCFNotificationCenter:(struct __CFNotificationCenter { } *)a0;
- (id)description;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (BOOL)isEmpty;
- (id)init;
- (void)dealloc;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (id)debugDescription;
- (void)postNotification:(id)a0;

@end
