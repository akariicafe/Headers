@interface SecKeyRSAPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)publicKey;
- (id)decryptData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
