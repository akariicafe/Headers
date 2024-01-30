@class WBSPasswordBreachConfiguration;

@interface WBSPasswordBreachCryptographicOperations : NSObject {
    WBSPasswordBreachConfiguration *_configuration;
    struct cc_blinding_keys_ctx { unsigned long long x0; struct _CCECCryptor *x1; struct _CCECCryptor *x2; } *_blindingKeys;
}

+ (BOOL)isValidScryptHashWorkFactor:(unsigned long long)a0 blockSizeR:(unsigned long long)a1 parallelismFactorP:(unsigned long long)a2;

- (id)generateFakeEncodedPasswordForLowFrequencyBucket;
- (id)_encodePasswordForLowFrequencyBucket:(id)a0 withHashSmoothingBits:(unsigned char)a1;
- (id)_blindPasswordHash:(id)a0;
- (struct _CCECCryptor { } *)_hashToCurve:(id)a0;
- (id)_bucketIdentifierWithBitCount:(unsigned long long)a0 ofData:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (id)encodePasswordForLowFrequencyBucket:(id)a0;
- (id)generateFakeEncodedPasswordForHighFrequencyBucket;
- (void).cxx_destruct;
- (id)encodePasswordForHighFrequencyBucket:(id)a0;
- (id)unblindHash:(id)a0;
- (id)_exportHashToCurve:(id)a0;
- (id)_exportKeyFromCryptor:(struct _CCECCryptor { } *)a0;
- (void)dealloc;

@end
