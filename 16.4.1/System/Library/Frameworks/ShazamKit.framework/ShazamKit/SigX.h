@interface SigX : NSObject

@property (nonatomic) void *mySigX;

+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })getVersion;

- (BOOL)resetWithError:(id *)a0;
- (void)dealloc;
- (BOOL)ConvertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1;
- (BOOL)FillUnknownError:(id *)a0;
- (BOOL)ConvertSystemError:(const struct system_error { void /* function */ **x0; struct __libcpp_refstring { char *x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } *)a0 toError:(id *)a1;
- (BOOL)flowBuffer:(id)a0 error:(id *)a1;
- (BOOL)flowFloatSamples:(float *)a0 sampleCount:(int)a1 channels:(int)a2 error:(id *)a3;
- (BOOL)flowFloatSamples:(float *)a0 sampleCount:(int)a1 error:(id *)a2;
- (BOOL)flowIntSamples:(short *)a0 sampleCount:(int)a1 channels:(int)a2 error:(id *)a3;
- (BOOL)flowIntSamples:(const short *)a0 sampleCount:(int)a1 error:(id *)a2;
- (BOOL)getSignature:(void *)a0 error:(id *)a1;
- (id)initWithSignatureType:(int)a0 sampleRate:(unsigned int)a1 error:(id *)a2;
- (id)initWithSignatureType:(int)a0 sampleRate:(unsigned int)a1 signatureOptions:(int)a2 error:(id *)a3;
- (BOOL)setRollingBufferSeconds:(float)a0 error:(id *)a1;

@end
