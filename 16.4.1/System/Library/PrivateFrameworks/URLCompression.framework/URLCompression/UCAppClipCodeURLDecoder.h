@class NSString;

@interface UCAppClipCodeURLDecoder : NSObject <UCAppClipCodeURLDecoding> {
    struct unique_ptr<UC::SUE::SegmentedURLDecoderImpl, std::default_delete<UC::SUE::SegmentedURLDecoderImpl>> { struct __compressed_pair<UC::SUE::SegmentedURLDecoderImpl *, std::default_delete<UC::SUE::SegmentedURLDecoderImpl>> { struct SegmentedURLDecoderImpl *__value_; } __ptr_; } _segmentedDecoder;
    struct unique_ptr<UC::SUE::PrefixedURLDecoderImpl, std::default_delete<UC::SUE::PrefixedURLDecoderImpl>> { struct __compressed_pair<UC::SUE::PrefixedURLDecoderImpl *, std::default_delete<UC::SUE::PrefixedURLDecoderImpl>> { struct PrefixedURLDecoderImpl *__value_; } __ptr_; } _prefixedDecoder;
    long long _codingVersion;
    long long _compressionVersion;
}

@property (readonly, nonatomic) long long codingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decoderWithVersion:(long long)a0;

- (void)clearCaches;
- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (struct unique_ptr<UC::UCBitVector, std::default_delete<UC::UCBitVector>> { struct __compressed_pair<UC::UCBitVector *, std::default_delete<UC::UCBitVector>> { struct UCBitVector *x0; } x0; })_bitVectorFromData:(id)a0;
- (id)_decodeURLWithDataV0:(id)a0 error:(id *)a1;
- (id)_decodeURLWithDataV1:(id)a0 error:(id *)a1;
- (id)_errorWithCoderErrorCode:(long long)a0 message:(id)a1;
- (id)decodeURLWithData:(id)a0 error:(id *)a1;
- (id)initWithCodingVersion:(long long)a0;

@end
