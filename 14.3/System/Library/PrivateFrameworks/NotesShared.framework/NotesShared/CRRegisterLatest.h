@class CRTimestamp;
@protocol CRDataType;

@interface CRRegisterLatest : CRRegister {
    id<CRDataType> _contents;
}

@property (retain, nonatomic) CRTimestamp *timestamp;

- (id)initWithContents:(id)a0 document:(id)a1;
- (void).cxx_destruct;
- (id)contents;
- (id)initWithContents:(id)a0 timestamp:(id)a1 document:(id)a2;
- (void)encodeIntoProtobufRegisterLatest:(struct RegisterLatest { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct Timestamp *x4; struct ObjectID *x5; } *)a0 coder:(id)a1;
- (void)mergeWithRegisterLatest:(id)a0;
- (id)initWithProtobufRegisterLatest:(const struct RegisterLatest { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct Timestamp *x4; struct ObjectID *x5; } *)a0 decoder:(id)a1;
- (BOOL)isEqualContents:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)_setContents:(id)a0;
- (void)mergeWith:(id)a0;
- (id)description;
- (void)setContents:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;

@end
