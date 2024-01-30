@class NSMutableArray;

@interface PHRecyclableObjectVendor : NSObject {
    NSMutableArray *_recycledObjects;
    Class _targetClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _repsondsToPrepareForReuse;
    BOOL _threadSafe;
    id /* block */ _builder;
}

- (id)initWithTargetClass:(Class)a0 requiresThreadSafety:(BOOL)a1 initialPoolSize:(long long)a2;
- (void).cxx_destruct;
- (id)dequeueRecyclableObject;
- (id)initWithTargetClass:(Class)a0 requiresThreadSafety:(BOOL)a1 initialPoolSize:(long long)a2 prototypeStep:(id /* block */)a3;
- (void)recycleObject:(id)a0;

@end
