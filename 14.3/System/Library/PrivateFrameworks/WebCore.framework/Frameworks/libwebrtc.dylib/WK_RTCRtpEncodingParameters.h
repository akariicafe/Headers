@class NSString, NSNumber;

@interface WK_RTCRtpEncodingParameters : NSObject

@property (readonly, nonatomic) struct RtpEncodingParameters { struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x0; double x1; int x2; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x3; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x4; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x5; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x6; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x7; BOOL x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x9; } nativeParameters;
@property (copy, nonatomic) NSString *rid;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) NSNumber *maxBitrateBps;
@property (copy, nonatomic) NSNumber *minBitrateBps;
@property (copy, nonatomic) NSNumber *maxFramerate;
@property (copy, nonatomic) NSNumber *numTemporalLayers;
@property (copy, nonatomic) NSNumber *scaleResolutionDownBy;
@property (readonly, nonatomic) NSNumber *ssrc;
@property (nonatomic) long long networkPriority;

+ (long long)priorityFromNativePriority:(int)a0;
+ (int)nativePriorityFromPriority:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNativeParameters:(const struct RtpEncodingParameters { struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x0; double x1; int x2; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x3; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x4; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x5; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x6; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x7; BOOL x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x9; } *)a0;

@end
