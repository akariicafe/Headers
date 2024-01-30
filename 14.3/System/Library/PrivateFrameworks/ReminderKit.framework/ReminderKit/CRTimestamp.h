@class NSUUID, NSString;

@interface CRTimestamp : NSObject <CRDataType, CREquatable, NSCopying, CRCoding>

@property (retain, nonatomic) NSUUID *replica;
@property (nonatomic) long long counter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tombstone;
- (id)shortDescription;
- (id)initWithReplica:(id)a0 andCounter:(long long)a1;
- (long long)compare:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)mergeWith:(id)a0;
- (BOOL)isEqualToTimestamp:(id)a0;
- (id)nextTimestampForReplica:(id)a0;
- (id)nextTimestamp;
- (id)earlierTimestamp:(id)a0;
- (id)laterTimestamp:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (void)encodeIntoProtobufTimestamp:(struct Timestamp { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; unsigned long long x4; long long x5; } *)a0 coder:(id)a1;
- (id)initWithProtobufTimestamp:(const struct Timestamp { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; unsigned long long x4; long long x5; } *)a0 decoder:(id)a1;

@end
