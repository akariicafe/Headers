@class NSString, NSMapTable, CRDocument;

@interface CRDictionary : NSObject <CRDataType, NSFastEnumeration, CRCoding>

@property (retain, nonatomic) NSMapTable *contents;
@property (nonatomic) long long removeClock;
@property (weak, nonatomic) CRDocument *document;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)keyEnumerator;
- (id)init;
- (void).cxx_destruct;
- (id)tombstone;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithDocument:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)mergeWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)encodeWithCRCoder:(id)a0 dictionary:(struct Dictionary { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<CRDT::Dictionary_Element> { void **x0; int x1; int x2; int x3; } x4; } *)a1;
- (void)encodeWithCRCoder:(id)a0 dictionary:(struct Dictionary { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<CRDT::Dictionary_Element> { void **x0; int x1; int x2; int x3; } x4; } *)a1 elementValueCoder:(id /* block */)a2;
- (id)initWithCRCoder:(id)a0 dictionary:(const struct Dictionary { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<CRDT::Dictionary_Element> { void **x0; int x1; int x2; int x3; } x4; } *)a1;
- (id)initWithCRCoder:(id)a0 dictionary:(const struct Dictionary { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<CRDT::Dictionary_Element> { void **x0; int x1; int x2; int x3; } x4; } *)a1 elementValueDecoder:(id /* block */)a2;
- (void)mergeWithDictionary:(id)a0;
- (void)enumerateKeysObjectsAndTimestampsUsingBlock:(id /* block */)a0;

@end
