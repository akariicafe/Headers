@class NSObject, NSString, NSMapTable, NSMutableOrderedSet, CRArray, CRSet, CRDocument;
@protocol CRUndoDelegate;

@interface CRTombstoneOrderedSet : NSObject <CRCoding, CRUndoDelegate, CRDataType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableOrderedSet *cachedIdentifierSet;
@property (readonly, nonatomic) NSMapTable *cachedIndexMapping;
@property (retain, nonatomic) CRArray *ordering;
@property (retain, nonatomic) CRSet *elements;
@property (weak, nonatomic) CRDocument *document;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)objectForIdentifier:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithDocument:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfEqualObject:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (void)moveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (BOOL)wantsUndoCommands;
- (void)moveClock;
- (void)encodeWithCRCoder:(id)a0 orderedSet:(void *)a1;
- (id)initWithCRCoder:(id)a0 orderedSet:(const void *)a1;
- (id)initWithOrdering:(id)a0 elements:(id)a1 document:(id)a2;
- (void)regenerateNSOrderedIdentifierSetAndIndexMapping;
- (id)generateNSOrderedIdentifierSetWithIndexMapping:(id)a0;
- (id)identifierForObjectInCachedSet:(id)a0;
- (void)shiftCachedIndicesStartingAtIndex:(unsigned long long)a0 by:(long long)a1;
- (void)undoablyRemoveObjectIdentifiersFromElements:(id)a0;
- (void)wipeoutCaches;
- (void)undoablyInsertObjectIdentifiersIntoElements:(id)a0;
- (void)_removeObjectsFromOrderingAtIndices:(id)a0;
- (void)moveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 mutableSafe:(BOOL)a2;
- (void)reinsertIdentifier:(id)a0 withMaskedIdentifiers:(id)a1 atIndex:(unsigned long long)a2 forObjectToMove:(id)a3;
- (BOOL)containsObjectEqualTo:(id)a0;
- (void)safeMoveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)realizeElementMutations;

@end
