@class TTArray, NSString, CRDocument, NSUUID, CRDictionary, NSObject;
@protocol CRUndoDelegate;

@interface CRArray : NSObject <CRCoding, CRUndoDelegate, CRDataType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TTArray *array;
@property (retain, nonatomic) CRDictionary *contents;
@property (nonatomic) BOOL moveClock;
@property (weak, nonatomic) CRDocument *document;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObject:(id)a0;
- (void)removeLastObject;
- (id)_addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)mergeWith:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDocument:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)tombstone;
- (void).cxx_destruct;
- (BOOL)wantsUndoCommands;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (id)_insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)_insertObject:(id)a0 withIdentifier:(id)a1 atIndex:(unsigned long long)a2 forUndo:(BOOL)a3;
- (void)encodeWithCRCoder:(id)a0 array:(void *)a1;
- (unsigned long long)firstIndexOf:(id)a0 fromIndex:(unsigned long long)a1;
- (id)initWithCRCoder:(id)a0 array:(const void *)a1;
- (id)initWithTTArray:(id)a0 contents:(id)a1 document:(id)a2;
- (void)moveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0 forUndo:(BOOL)a1;

@end
