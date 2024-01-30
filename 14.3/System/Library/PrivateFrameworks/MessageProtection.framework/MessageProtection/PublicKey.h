@protocol P256PublicKeyProtocol;

@interface PublicKey : NSObject

@property (retain) id<P256PublicKeyProtocol> key;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (id)initWithKey:(id)a0;

@end
