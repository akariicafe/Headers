@interface SecKeyRSAPublic : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)initWithSecKeyRef:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (id)encryptData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
