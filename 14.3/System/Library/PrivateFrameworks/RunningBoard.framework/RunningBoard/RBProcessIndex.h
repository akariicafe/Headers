@class NSMutableDictionary, NSMutableOrderedSet;

@interface RBProcessIndex : NSObject <NSFastEnumeration> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _capacity;
    NSMutableOrderedSet *_processes;
    NSMutableDictionary *_processByIdentity;
    NSMutableDictionary *_processByInstance;
    NSMutableDictionary *_processByIdentifier;
}

+ (id)index;
+ (id)indexWithCapacity:(unsigned long long)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (id)processForIdentifier:(id)a0;
- (BOOL)containsInstance:(id)a0;
- (BOOL)containsIdentifier:(id)a0;
- (id)processForIdentity:(id)a0;
- (id)allProcesses;
- (BOOL)addProcess:(id)a0;
- (BOOL)containsProcess:(id)a0;
- (void)removeAllObjects;
- (id)processForInstance:(id)a0;
- (BOOL)removeProcess:(id)a0;
- (BOOL)containsIdentity:(id)a0;

@end
