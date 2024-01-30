@interface ISIconManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
}

@property (retain) id iconRegistry;
@property (retain) id observers;
@property (retain) id internalQueue;
@property (readonly) id iconCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)findOrRegisterIcon:(id)a0;
- (id)_init;

@end
