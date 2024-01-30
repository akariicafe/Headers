@interface CKDMMCSPackageSignatureGenerator : NSObject

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) BOOL valid;

- (id)init;
- (void)dealloc;
- (id)dataByFinishingSignature;
- (void)updateWithData:(id)a0;
- (char *)_finishGenerator;

@end
