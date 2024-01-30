@interface SecKeyRSAPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)publicKey;
- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (id)decryptData:(id)a0 error:(id *)a1;

@end
