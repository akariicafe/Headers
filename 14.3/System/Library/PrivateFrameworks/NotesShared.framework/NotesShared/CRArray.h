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

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (id)init;
- (id)_addObject:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithTTArray:(id)a0 contents:(id)a1 document:(id)a2;
- (id)tombstone;
- (id)_insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)_insertObject:(id)a0 withIdentifier:(id)a1 atIndex:(unsigned long long)a2 forUndo:(BOOL)a3;
- (void)removeObjectAtIndex:(unsigned long long)a0 forUndo:(BOOL)a1;
- (unsigned long long)firstIndexOf:(id)a0 fromIndex:(unsigned long long)a1;
- (id)initWithDocument:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)mergeWith:(id)a0;
- (void)encodeWithCRCoder:(id)a0 array:(struct Array { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct StringArray *x4; struct Dictionary *x5; } *)a1;
- (id)initWithCRCoder:(id)a0 array:(const struct Array { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct StringArray *x4; struct Dictionary *x5; } *)a1;
- (void)moveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (BOOL)wantsUndoCommands;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)addObject:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;

@end
