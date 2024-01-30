@interface CKSignatureGenerator : NSObject

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) BOOL valid;

+ (BOOL)isValidSignature:(id)a0;
+ (id)signatureWithFileDescriptor:(int)a0 error:(id *)a1;
+ (BOOL)isValidV2Signature:(id)a0;
+ (id)signatureForStreamingAsset;

- (id)init;
- (void)dealloc;
- (char *)_newSignatureByFinishingGenerator;
- (void)updateWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)dataByFinishingSignature;
- (void)updateWithData:(id)a0;

@end
