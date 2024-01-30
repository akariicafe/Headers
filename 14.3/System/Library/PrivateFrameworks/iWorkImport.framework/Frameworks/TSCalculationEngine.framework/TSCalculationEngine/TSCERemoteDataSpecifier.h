@class NSString;

@interface TSCERemoteDataSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long hashVal;
@property (readonly, nonatomic) int functionIndex;
@property (readonly, nonatomic) NSString *symbol;
@property (readonly, nonatomic) long long attribute;
@property (readonly, nonatomic) long long year;
@property (readonly, nonatomic) long long month;
@property (readonly, nonatomic) long long day;
@property (readonly, nonatomic) BOOL isCold;
@property (readonly, nonatomic) NSString *functionName;
@property (readonly, nonatomic) BOOL isCurrency;
@property (readonly, nonatomic) struct TSCEValue { struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } x0; unsigned long long x1[19]; int x2; } invalidAttributeErrorValue;
@property (readonly, nonatomic) struct TSCEValue { struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } x0; unsigned long long x1[19]; int x2; } invalidSymbolErrorValue;

+ (id)specifierWithFunctionIndex:(int)a0 symbol:(id)a1 attribute:(long long)a2 year:(long long)a3 month:(long long)a4 day:(long long)a5;
+ (id)specifierWithFunctionIndex:(int)a0 symbol:(id)a1 attribute:(long long)a2;
+ (id)specifierFromArchive:(const struct RemoteDataSpecifierArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; unsigned int x5; unsigned int x6; double x7; } *)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initFromArchive:(const struct RemoteDataSpecifierArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; unsigned int x5; unsigned int x6; double x7; } *)a0;
- (void)encodeToArchive:(struct RemoteDataSpecifierArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; unsigned int x5; unsigned int x6; double x7; } *)a0;
- (BOOL)hasDateEqualToDate:(id)a0;
- (id)initWithFunctionIndex:(int)a0 symbol:(id)a1 attribute:(long long)a2 year:(long long)a3 month:(long long)a4 day:(long long)a5;
- (double)p_timeInterval;
- (id)specifierByChangingAttributeTo:(long long)a0;

@end
