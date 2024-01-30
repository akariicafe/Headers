@class NSString;

@interface UCAppClipCodeURLEncoder : NSObject <UCAppClipCodeURLEncodingPrivate, UCAppClipCodeURLEncoding> {
    struct unique_ptr<UC::SUE::SegmentedURLEncoderImpl, std::default_delete<UC::SUE::SegmentedURLEncoderImpl>> { struct __compressed_pair<UC::SUE::SegmentedURLEncoderImpl *, std::default_delete<UC::SUE::SegmentedURLEncoderImpl>> { struct SegmentedURLEncoderImpl *__value_; } __ptr_; } _encoder;
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
- (id)_convertRawURLEncodingBitsToAppClipCodeData:(const void *)a0;
- (id)_errorWithUnsupportedURLComponentType:(long long)a0;
- (id)_errorWithCoderErrorCode:(long long)a0 codingErrorSymbol:(id)a1 message:(id)a2;
- (id)_errorFromCoderError:(const void *)a0;
- (id)encodeURL:(id)a0 error:(id *)a1;
- (id)resultForEncodingURL:(id)a0 error:(id *)a1;

@end
