@protocol P256PublicKeyProtocol;

@interface PublicKey : NSObject

@property (retain) id<P256PublicKeyProtocol> key;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithKey:(id)a0;
- (id)dataRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
