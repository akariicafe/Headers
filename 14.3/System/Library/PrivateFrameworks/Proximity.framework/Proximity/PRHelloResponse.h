@class NSString, NSNumber;

@interface PRHelloResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *roseFirmwareVersion;
@property (readonly, nonatomic) unsigned char hsiVersionMajor;
@property (readonly, nonatomic) unsigned char hsiVersionMinor;
@property (readonly, nonatomic) unsigned long long hardwareVersion;
@property (copy) NSNumber *addlInfoSize;
@property (copy) NSNumber *apFirmwareVersion;
@property (copy) NSNumber *dspFirmwareVersion;
@property (copy) NSString *target;
@property (copy) NSNumber *calDataVersion;
@property (copy) NSNumber *moduleID;
@property (copy) NSNumber *modemInitVersion;
@property (copy) NSString *extraBytes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRoseFirmwareVersion:(id)a0 hsiVersionMajor:(unsigned char)a1 hsiVersionMinor:(unsigned char)a2 hardwareVersion:(unsigned long long)a3;
- (id)initWithHelloResponse:(const struct HelloResponse { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; unsigned char x1; unsigned char x2; unsigned short x3; struct optional<Rose::HelloResponse::AdditionalInfo> { union { char x0; struct AdditionalInfo { unsigned char x0; unsigned short x1; unsigned short x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; unsigned short x4; unsigned char x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x7; } x1; } x0; BOOL x1; } x4; } *)a0;

@end
