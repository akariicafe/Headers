@class NSMutableDictionary, TSPPersistedObjectUUIDMap, TSPObjectContext, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSPObjectUUIDMap : NSObject {
    _Atomic int _assertOnReadCount;
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_inMemoryUUIDDictionary;
    NSMutableSet *_UUIDsWithSuppressedAssertions;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
}

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)object:(id)a0 didChangeUUIDToValue:(id)a1 fromValue:(id)a2;
- (void)beginAssertOnRead;
- (void)endAssertOnRead;
- (BOOL)hasObjectUUID:(id)a0;
- (id)objectWithUUID:(id)a0 onlyIfLoaded:(BOOL)a1 validateNewObjects:(BOOL)a2 identifier:(long long *)a3;
- (BOOL)objectUUIDIsInDocument:(id)a0;
- (BOOL)shouldSuppressAssertionForObjectUUID:(id)a0;
- (void)setPersistedUUIDMap:(id)a0;
- (void)objectWasAddedToDocument:(id)a0 options:(unsigned long long)a1;
- (void)objectWillBeRemovedFromDocument:(id)a0;

@end
