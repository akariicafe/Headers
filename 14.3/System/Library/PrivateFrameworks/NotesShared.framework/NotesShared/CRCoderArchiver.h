@class NSMutableOrderedSet;

@interface CRCoderArchiver : CRCoder {
    struct vector<CRDT::Document_DocObject *, std::__1::allocator<CRDT::Document_DocObject *> > { struct Document_DocObject **__begin_; struct Document_DocObject **__end_; struct __compressed_pair<CRDT::Document_DocObject **, std::__1::allocator<CRDT::Document_DocObject *> > { struct Document_DocObject **__value_; } __end_cap_; } currentDocObjectEncodingStack;
}

@property (retain, nonatomic) NSMutableOrderedSet *uuidSet;
@property (retain, nonatomic) NSMutableOrderedSet *keySet;
@property (retain, nonatomic) NSMutableOrderedSet *encodedObjects;
@property (nonatomic) struct Document { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct VectorTimestamp *x4; struct VectorTimestamp *x5; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x0; int x1; int x2; int x3; } x6; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x9; struct VectorTimestamp *x10; } *currentDocument;

+ (void)initialize;
+ (id)encodedDataWithDocument:(id)a0;

- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeString:(id)a0 forKey:(id)a1;
- (id).cxx_construct;
- (int)indexForKey:(id)a0;
- (void)encodeUInt64:(unsigned long long)a0 forKey:(id)a1;
- (struct Document_DocObject { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; union ContentsUnion { struct RegisterLatest *x0; struct RegisterLatest *x1; struct RegisterLatest *x2; struct Dictionary *x3; struct Dictionary *x4; struct Dictionary *x5; struct Timestamp *x6; struct VectorTimestamp *x7; struct Index *x8; struct String *x9; unsigned long long x10; struct OneOf *x11; struct Document_CustomObject *x12; struct StringArray *x13; struct Array *x14; struct OrderedSet *x15; } x4; unsigned int x5[1]; } *)currentDocumentObjectForEncoding;
- (id)encodeDocument:(id)a0;
- (void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)a0;
- (struct Document_CustomObject { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<CRDT::Document_CustomObject_MapEntry> { void **x0; int x1; int x2; int x3; } x4; int x5; } *)currentCustomObjectForEncoding;
- (struct ObjectID { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; union ContentsUnion { long long x0; unsigned long long x1; double x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; unsigned int x5; } x4; unsigned int x5[1]; } *)mutableObjectIDForKey:(id)a0;
- (void)encodeObject:(id)a0 forObjectID:(struct ObjectID { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; union ContentsUnion { long long x0; unsigned long long x1; double x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; unsigned int x5; } x4; unsigned int x5[1]; } *)a1;
- (void)encodeUUID:(id)a0 forKey:(id)a1;
- (void)encodeUInt32:(unsigned int)a0 forKey:(id)a1;
- (unsigned long long)encodeUUIDIndexFromUUID:(id)a0;

@end
