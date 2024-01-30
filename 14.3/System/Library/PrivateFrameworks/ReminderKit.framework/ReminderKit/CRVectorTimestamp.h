@class NSString, NSMutableDictionary;

@interface CRVectorTimestamp : NSObject <CRDataType, NSCopying, CRCoding> {
    NSMutableDictionary *_clock;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tombstone;
- (id)shortDescription;
- (unsigned long long)compare:(id)a0;
- (id)timestampForReplica:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)maxClock:(unsigned long long)a0 forUUID:(id)a1;
- (void)mergeWith:(id)a0;
- (id)allUUIDs;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (id)clockElementForUUID:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (void)encodeIntoProtobufTimestamp:(struct VectorTimestamp { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<CRDT::VectorTimestamp_Element> { void **x0; int x1; int x2; int x3; } x4; } *)a0 coder:(id)a1;
- (void)removeUUID:(id)a0;
- (id)initWithProtobufTimestamp:(const struct VectorTimestamp { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<CRDT::VectorTimestamp_Element> { void **x0; int x1; int x2; int x3; } x4; } *)a0 decoder:(id)a1;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1;
- (unsigned long long)clockForUUID:(id)a0;
- (void)minusVectorTimestamp:(id)a0;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)a0;
- (void)incrementClockForUUID:(id)a0;

@end
