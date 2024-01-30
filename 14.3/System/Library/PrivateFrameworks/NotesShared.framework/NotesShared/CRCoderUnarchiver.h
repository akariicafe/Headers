@class NSUUID, CRDocument, NSMutableOrderedSet, NSMutableArray;

@interface CRCoderUnarchiver : CRCoder

@property (copy, nonatomic) NSUUID *replica;
@property (retain, nonatomic) CRDocument *document;
@property (nonatomic) struct Document { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct VectorTimestamp *x4; struct VectorTimestamp *x5; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x0; int x1; int x2; int x3; } x6; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x9; struct VectorTimestamp *x10; } *currentDocument;
@property (retain, nonatomic) NSMutableArray *allocedDocObjects;
@property (nonatomic) const struct Document_DocObject { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; union ContentsUnion { struct RegisterLatest *x0; struct RegisterLatest *x1; struct RegisterLatest *x2; struct Dictionary *x3; struct Dictionary *x4; struct Dictionary *x5; struct Timestamp *x6; struct VectorTimestamp *x7; struct Index *x8; struct String *x9; unsigned long long x10; struct OneOf *x11; struct Document_CustomObject *x12; struct StringArray *x13; struct Array *x14; struct OrderedSet *x15; } x4; unsigned int x5[1]; } *currentDocObjectForDecodingPtr;
@property (retain, nonatomic) NSMutableOrderedSet *typeSetForDecoding;
@property (retain, nonatomic) NSMutableOrderedSet *keySet;
@property (retain, nonatomic) NSMutableArray *uuidArray;
@property (retain, nonatomic) NSMutableArray *completionHandlers;

+ (void)initialize;
+ (id)decodedDocumentFromData:(id)a0 replica:(id)a1;

- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)decodeUInt64ForKey:(id)a0;
- (BOOL)hasDecodableValueForKey:(id)a0;
- (id)decodeDocumentFromData:(id)a0 replica:(id)a1;
- (BOOL)willModifySelfInInitForClass:(Class)a0;
- (id)allocedObjectAtIndex:(unsigned long long)a0 outNeedsInit:(BOOL *)a1;
- (void)sortCompletionHandlers;
- (id)decodeUUIDForKey:(id)a0;
- (const struct ObjectID { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; union ContentsUnion { long long x0; unsigned long long x1; double x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; unsigned int x5; } x4; unsigned int x5[1]; } *)currentObjectIDForKey:(id)a0;
- (unsigned int)decodeUInt32ForKey:(id)a0;
- (id)decodeUUIDFromUUIDIndex:(unsigned long long)a0;
- (id)decodeStringForKey:(id)a0;
- (unsigned long long)indexForKey:(id)a0;
- (const struct Document_DocObject { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; union ContentsUnion { struct RegisterLatest *x0; struct RegisterLatest *x1; struct RegisterLatest *x2; struct Dictionary *x3; struct Dictionary *x4; struct Dictionary *x5; struct Timestamp *x6; struct VectorTimestamp *x7; struct Index *x8; struct String *x9; unsigned long long x10; struct OneOf *x11; struct Document_CustomObject *x12; struct StringArray *x13; struct Array *x14; struct OrderedSet *x15; } x4; unsigned int x5[1]; } *)currentDocumentObjectForDecoding;
- (id)decodeObjectForProtobufObjectID:(const struct ObjectID { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; union ContentsUnion { long long x0; unsigned long long x1; double x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; unsigned int x5; } x4; unsigned int x5[1]; } *)a0;
- (void)addDecoderCompletionHandler:(id /* block */)a0 dependency:(id)a1 for:(id)a2;

@end
