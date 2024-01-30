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

- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)tombstone;
- (id)initWithDocument:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)mergeWith:(id)a0;
- (void)encodeWithCRCoder:(id)a0 orderedSet:(struct OrderedSet { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct Array *x4; struct Dictionary *x5; } *)a1;
- (id)initWithCRCoder:(id)a0 orderedSet:(const struct OrderedSet { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct Array *x4; struct Dictionary *x5; } *)a1;
- (id)initWithOrdering:(id)a0 elements:(id)a1 document:(id)a2;
- (void)wipeoutCaches;
- (void)regenerateNSOrderedIdentifierSetAndIndexMapping;
- (id)generateNSOrderedIdentifierSetWithIndexMapping:(id)a0;
- (id)identifierForObjectInCachedSet:(id)a0;
- (void)shiftCachedIndicesStartingAtIndex:(unsigned long long)a0 by:(long long)a1;
- (void)undoablyRemoveObjectIdentifiersFromElements:(id)a0;
- (BOOL)containsObjectEqualTo:(id)a0;
- (void)undoablyInsertObjectIdentifiersIntoElements:(id)a0;
- (void)_removeObjectsFromOrderingAtIndices:(id)a0;
- (void)moveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 mutableSafe:(BOOL)a2;
- (void)reinsertIdentifier:(id)a0 withMaskedIdentifiers:(id)a1 atIndex:(unsigned long long)a2 forObjectToMove:(id)a3;
- (void)safeMoveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)realizeElementMutations;
- (void)moveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (BOOL)wantsUndoCommands;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (unsigned long long)indexOfEqualObject:(id)a0;
- (void)addObject:(id)a0;
- (id)objectForIdentifier:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)moveClock;
- (void)removeObjectAtIndex:(unsigned long long)a0;

@end
