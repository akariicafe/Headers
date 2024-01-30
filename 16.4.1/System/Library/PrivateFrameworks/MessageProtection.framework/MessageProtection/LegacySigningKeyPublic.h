@interface LegacySigningKeyPublic : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (BOOL)verifySignature:(id)a0 ofData:(id)a1;
- (void).cxx_destruct;

@end
