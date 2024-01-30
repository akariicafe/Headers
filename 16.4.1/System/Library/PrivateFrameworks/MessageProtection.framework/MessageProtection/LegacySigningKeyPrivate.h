@interface LegacySigningKeyPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)signData:(id)a0 error:(id *)a1;
- (id)publicKey;
- (id)dataRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
