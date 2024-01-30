@class NSData, NSString;

@interface SecKeyP256Public : NSObject <P256PublicKeyProtocol>

@property struct __SecKey { } *publicKeyRef;
@property (retain) NSData *serializedKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSecKeyRef:(struct __SecKey { } *)a0;
- (void)dealloc;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (BOOL)verifySignature:(id)a0 data:(id)a1;

@end
