@class NSString, NSArray, NSUUID, TTMergeableAttributedString, CRDocument, NSObject;
@protocol CRUndoDelegate;

@interface TTArray : NSObject <CRCoding, TTMergeableStringDelegate, CRDataType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TTMergeableAttributedString *contents;
@property (readonly, nonatomic) NSArray *nsArray;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (weak, nonatomic) CRDocument *document;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)endEditing;
- (void)removeLastObject;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)beginEditing;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithContents:(id)a0;
- (void)addObject:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (id)initWithDocument:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (unsigned long long)indexOfObject:(id)a0;
- (BOOL)wantsUndoCommands;
- (void)saveToArchive:(void *)a0;
- (id)initWithArchive:(const void *)a0 andReplicaID:(id)a1;
- (id)textAttachmentAtIndex:(unsigned long long)a0;
- (void)addUndoCommand:(id)a0;
- (id)initWithCRCoder:(id)a0 stringArray:(const void *)a1;
- (id)serializeDataFromArchive:(const void *)a0;

@end
