@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject <NSCopying> {
    NSMutableDictionary *_clock;
}

- (id)serialize;
- (id)init;
- (unsigned long long)compareTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)initWithArchive:(const struct VectorTimestamp { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<topotext::VectorTimestamp_Clock> { void **x0; int x1; int x2; int x3; } x4; } *)a0;
- (id)description;
- (id)allUUIDs;
- (BOOL)isEqual:(id)a0;
- (id)clockElementForUUID:(id)a0;
- (void)saveToArchive:(struct VectorTimestamp { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<topotext::VectorTimestamp_Clock> { void **x0; int x1; int x2; int x3; } x4; } *)a0;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1;
- (unsigned long long)clockForUUID:(id)a0;
- (void)mergeWithTimestamp:(id)a0;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)a0;
- (void)incrementClockForUUID:(id)a0;

@end
