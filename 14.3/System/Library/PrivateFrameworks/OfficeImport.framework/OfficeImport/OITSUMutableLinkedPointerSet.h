@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *mDictionary;
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mTail;
}

- (id)array;
- (id)reverseObjectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)firstObject;
- (id)init;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (unsigned long long)hash;
- (id)objectEnumerator;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)a0;
- (id)objectEnumeratorAfterObject:(id)a0;
- (BOOL)hasObjects;
- (void)insertFirstObject:(id)a0;

@end
