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
- (void)removeLastObject;
- (id)initWithArchive:(const struct StringArray { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct String *x4; struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> { void **x0; int x1; int x2; int x3; } x5; } *)a0 andReplicaID:(id)a1;
- (id)initWithContents:(id)a0;
- (id)init;
- (void)addUndoCommand:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)textAttachmentAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)tombstone;
- (id)initWithDocument:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCRCoder:(id)a0 stringArray:(const struct StringArray { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct String *x4; struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> { void **x0; int x1; int x2; int x3; } x5; } *)a1;
- (id)serializeDataFromArchive:(const struct StringArray { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct String *x4; struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> { void **x0; int x1; int x2; int x3; } x5; } *)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)mergeWith:(id)a0;
- (BOOL)wantsUndoCommands;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)endEditing;
- (id)initWithCRCoder:(id)a0;
- (void)addObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (void)beginEditing;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)saveToArchive:(struct StringArray { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct String *x4; struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> { void **x0; int x1; int x2; int x3; } x5; } *)a0;

@end
