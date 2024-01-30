@interface CKDMMCSPackageSignatureGenerator : NSObject

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) BOOL valid;

- (void)dealloc;
- (void)updateWithData:(id)a0;
- (id)init;
- (id)dataByFinishingSignature;
- (char *)_finishGenerator;

@end
