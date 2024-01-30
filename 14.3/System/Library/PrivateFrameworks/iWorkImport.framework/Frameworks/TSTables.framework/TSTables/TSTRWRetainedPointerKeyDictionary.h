@class TSURetainedPointerKeyDictionary;

@interface TSTRWRetainedPointerKeyDictionary : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } mRWLock;
    TSURetainedPointerKeyDictionary *mRetainedPointerKeyDictionary;
}

- (id)objectForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;

@end
