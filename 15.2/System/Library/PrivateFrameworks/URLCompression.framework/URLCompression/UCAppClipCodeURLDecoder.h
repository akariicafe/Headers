@class NSString;

@interface UCAppClipCodeURLDecoder : NSObject <UCAppClipCodeURLDecoding> {
    struct unique_ptr<UC::SUE::SegmentedURLDecoderImpl, std::default_delete<UC::SUE::SegmentedURLDecoderImpl>> { struct __compressed_pair<UC::SUE::SegmentedURLDecoderImpl *, std::default_delete<UC::SUE::SegmentedURLDecoderImpl>> { struct SegmentedURLDecoderImpl *__value_; } __ptr_; } _decoder;
    long long _codingVersion;
}

@property (readonly, nonatomic) long long codingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decoderWithVersion:(long long)a0;

- (void)clearCaches;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCodingVersion:(long long)a0;
- (id)_errorWithCoderErrorCode:(long long)a0 message:(id)a1;
- (struct unique_ptr<UC::UCBitVector, std::default_delete<UC::UCBitVector>> { struct __compressed_pair<UC::UCBitVector *, std::default_delete<UC::UCBitVector>> { struct UCBitVector *x0; } x0; })_bitVectorFromData:(id)a0;
- (id)decodeURLWithData:(id)a0 error:(id *)a1;

@end
