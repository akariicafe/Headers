@class NSString, NSMutableDictionary, _TtC13TSPersistence23TSPMutableIdentifierSet, NSMutableSet, NSObject, TSPPersistedObjectUUIDMap;
@protocol OS_dispatch_queue, TSPObjectUUIDMapDelegate;

@interface TSPObjectUUIDMap : NSObject <TSPObjectInDocumentContaining> {
    _Atomic int _assertOnReadCount;
    id<TSPObjectUUIDMapDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_inMemoryUUIDDictionary;
    _TtC13TSPersistence23TSPMutableIdentifierSet *_inMemoryObjectIdentifiers;
    NSMutableSet *_UUIDsWithSuppressedAssertions;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)endAssertOnRead;
- (void)beginAssertOnRead;
- (BOOL)hasObjectUUID:(id)a0;
- (BOOL)isAnyObjectIdentifierInDocument:(id)a0;
- (BOOL)isObjectIdentifierInDocument:(long long)a0;
- (void)object:(id)a0 didChangeUUIDToValue:(id)a1 fromValue:(id)a2;
- (long long)objectIdentifierForUUID:(id)a0;
- (void)objectWasAddedToDocument:(id)a0 options:(unsigned long long)a1;
- (void)objectWillBeRemovedFromDocument:(id)a0;
- (id)objectWithUUID:(id)a0 onlyIfLoaded:(BOOL)a1 validateNewObjects:(BOOL)a2 identifier:(long long *)a3;
- (void)setPersistedUUIDMap:(id)a0;
- (BOOL)shouldSuppressAssertionForObjectUUID:(id)a0;

@end
