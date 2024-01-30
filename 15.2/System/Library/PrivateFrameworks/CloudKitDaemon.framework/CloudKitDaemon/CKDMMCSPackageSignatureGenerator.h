@interface CKDMMCSPackageSignatureGenerator : NSObject

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) BOOL valid;

- (void)updateWithData:(id)a0;
- (id)dataByFinishingSignature;
- (id)init;
- (void)dealloc;
- (char *)_finishGenerator;

@end
