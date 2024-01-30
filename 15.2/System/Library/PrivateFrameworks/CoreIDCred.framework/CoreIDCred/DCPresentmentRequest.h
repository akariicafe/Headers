@class NSData, NSXPCListenerEndpoint;

@interface DCPresentmentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *sessionEstablishment;
@property (retain) NSData *sessionTranscript;
@property (retain) NSData *sessionEncryptionIntermediateKeyMaterial;
@property (retain) NSData *requiredPublicKeyIdentifier;
@property (retain) NSXPCListenerEndpoint *seAccessEndpoint;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionEstablishment:(id)a0 sessionTranscript:(id)a1 seAccessEndpoint:(id)a2;
- (id)initWithSessionEstablishment:(id)a0 sessionTranscript:(id)a1;

@end
