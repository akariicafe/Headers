@interface CKSignatureGenerator : NSObject

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) BOOL valid;

+ (id)signatureWithFileDescriptor:(int)a0 error:(id *)a1;
+ (BOOL)isValidSignature:(id)a0;
+ (id)signatureForStreamingAsset;
+ (BOOL)isValidV2Signature:(id)a0;

- (void)updateWithData:(id)a0;
- (char *)_newSignatureByFinishingGenerator;
- (void)updateWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)dataByFinishingSignature;
- (id)init;
- (void)dealloc;

@end
