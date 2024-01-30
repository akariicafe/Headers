@interface NSNotificationCenter : NSObject {
    void *_impl;
    void *_callback;
    void *_pad[11];
}

@property (class, readonly) NSNotificationCenter *defaultCenter;

+ (id)_defaultCenterWithoutCreating;

- (void)_removeObserver:(unsigned long long)a0;
- (BOOL)isEmpty;
- (id)init;
- (unsigned long long)_addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3 options:(unsigned long long)a4;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)_initWithCFNotificationCenter:(struct __CFNotificationCenter { } *)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (id)description;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (id)addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (void)postNotification:(id)a0;
- (id)debugDescription;

@end
