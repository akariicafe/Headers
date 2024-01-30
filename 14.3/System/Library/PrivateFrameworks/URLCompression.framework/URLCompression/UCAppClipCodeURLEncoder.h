@class NSString;

@interface UCAppClipCodeURLEncoder : NSObject <UCAppClipCodeURLEncodingPrivate, UCAppClipCodeURLEncoding> {
    struct unique_ptr<UC::SUE::SegmentedURLEncoderImpl, std::__1::default_delete<UC::SUE::SegmentedURLEncoderImpl> > { struct __compressed_pair<UC::SUE::SegmentedURLEncoderImpl *, std::__1::default_delete<UC::SUE::SegmentedURLEncoderImpl> > { struct SegmentedURLEncoderImpl *__value_; } __ptr_; } _encoder;
    long long _codingVersion;
}

@property (readonly, nonatomic) long long codingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)encoderWithExtendedInterfaceWithVersion:(long long)a0;
+ (id)encoderWithVersion:(long long)a0;

- (void)clearCaches;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCodingVersion:(long long)a0;
- (struct shared_ptr<UC::SUE::UCSegmentedURLEncodingResult> { struct UCSegmentedURLEncodingResult *x0; struct __shared_weak_count *x1; })_encodeURL:(id)a0 error:(id *)a1;
- (id)_convertRawURLEncodingBitsToAppClipCodeData:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } *)a0;
- (id)_errorWithUnsupportedURLComponentType:(long long)a0;
- (id)_errorWithCoderErrorCode:(long long)a0 codingErrorSymbol:(id)a1 message:(id)a2;
- (id)_errorFromCoderError:(const struct CoderError { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; int x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x4; } *)a0;
- (id)encodeURL:(id)a0 error:(id *)a1;
- (id)resultForEncodingURL:(id)a0 error:(id *)a1;

@end
