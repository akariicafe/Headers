@class NSString, NSNumber;

@interface WK_RTCRtpEncodingParameters : NSObject

@property (readonly, nonatomic) struct RtpEncodingParameters { struct optional<unsigned int> { BOOL x0; union { unsigned int x0; struct dummy_type { struct empty_struct { } x0[4]; } x1; } x1; } x0; double x1; int x2; struct optional<int> { BOOL x0; union { int x0; struct dummy_type { struct empty_struct { } x0[4]; } x1; } x1; } x3; struct optional<int> { BOOL x0; union { int x0; struct dummy_type { struct empty_struct { } x0[4]; } x1; } x1; } x4; struct optional<double> { BOOL x0; union { double x0; struct dummy_type { struct empty_struct { } x0[8]; } x1; } x1; } x5; struct optional<int> { BOOL x0; union { int x0; struct dummy_type { struct empty_struct { } x0[4]; } x1; } x1; } x6; struct optional<double> { BOOL x0; union { double x0; struct dummy_type { struct empty_struct { } x0[8]; } x1; } x1; } x7; struct optional<std::string> { BOOL x0; union { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct dummy_type { struct empty_struct { } x0[24]; } x1; } x1; } x8; BOOL x9; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x10; BOOL x11; } nativeParameters;
@property (copy, nonatomic) NSString *rid;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) NSNumber *maxBitrateBps;
@property (copy, nonatomic) NSNumber *minBitrateBps;
@property (copy, nonatomic) NSNumber *maxFramerate;
@property (copy, nonatomic) NSNumber *numTemporalLayers;
@property (copy, nonatomic) NSNumber *scaleResolutionDownBy;
@property (readonly, nonatomic) NSNumber *ssrc;
@property (nonatomic) long long networkPriority;

+ (int)nativePriorityFromPriority:(long long)a0;
+ (long long)priorityFromNativePriority:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNativeParameters:(const void *)a0;

@end
