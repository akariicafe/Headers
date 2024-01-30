@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_valueMap;
}

- (void)removeIdentity:(id)a0;
- (id)dictionary;
- (id)removeValueForIdentity:(id)a0;
- (id)allValue;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)valueForIdentity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (BOOL)containsIdentity:(id)a0;
- (id)removeValueForIdentity:(id)a0 withPredicate:(id /* block */)a1;
- (id)setValue:(id)a0 forIdentity:(id)a1;
- (id)init;
- (id)allIdentities;
- (void)addIdentity:(id)a0;
- (void).cxx_destruct;

@end
