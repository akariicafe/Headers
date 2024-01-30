@interface LegacySigningKeyPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)publicKey;
- (id)signData:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (void).cxx_destruct;
- (id)init;

@end
