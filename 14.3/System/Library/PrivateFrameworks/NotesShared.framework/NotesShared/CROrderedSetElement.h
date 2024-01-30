@class NSString, CRRegisterLatest;
@protocol CRCoding, CRDataType;

@interface CROrderedSetElement : NSObject <CRDataType, NSCopying, CREquatable>

@property (retain, nonatomic) id<CRDataType, CRCoding> value;
@property (retain, nonatomic) CRRegisterLatest *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)temporaryElementWithValue:(id)a0;

- (id)initWithProtobufSetElement:(const struct Dictionary_Element { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct ObjectID *x4; struct ObjectID *x5; struct VectorTimestamp *x6; struct RegisterLatest *x7; } *)a0 decoder:(id)a1;
- (void)encodeIntoProtobufSetElement:(struct Dictionary_Element { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct ObjectID *x4; struct ObjectID *x5; struct VectorTimestamp *x6; struct RegisterLatest *x7; } *)a0 coder:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tombstone;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)mergeWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;

@end
