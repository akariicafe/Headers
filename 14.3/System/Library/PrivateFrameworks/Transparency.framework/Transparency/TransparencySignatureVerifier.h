@class NSDictionary;

@interface TransparencySignatureVerifier : NSObject

@property (retain) NSDictionary *trustedKeys;
@property BOOL needsRefresh;

+ (BOOL)verifyMessage:(id)a0 signature:(id)a1 spkiHash:(id)a2 trustedKeys:(id)a3 algorithm:(struct __CFString { } *)a4 error:(id *)a5;
+ (const struct __CFString { } *)secKeyAlgorithmForProtoAlgorithm:(int)a0;
+ (int)protoAlgorithmForSecKeyAlgorithm:(struct __CFString { } *)a0;

- (void).cxx_destruct;
- (id)initWithTrustedKeys:(id)a0;
- (BOOL)verifyMessage:(id)a0 signature:(id)a1 spkiHash:(id)a2 algorithm:(struct __CFString { } *)a3 error:(id *)a4;

@end
