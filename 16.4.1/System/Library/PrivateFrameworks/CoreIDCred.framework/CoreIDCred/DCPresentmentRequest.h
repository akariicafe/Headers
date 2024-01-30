@class NSData, NSString, NSXPCListenerEndpoint;

@interface DCPresentmentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *sessionEstablishment;
@property (retain) NSData *sessionTranscript;
@property (retain) NSData *sessionEncryptionIntermediateKeyMaterial;
@property (retain) NSData *requiredPublicKeyIdentifier;
@property (retain) NSXPCListenerEndpoint *seAccessEndpoint;
@property (retain) NSString *relyingPartyIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionEstablishment:(id)a0 sessionTranscript:(id)a1;
- (id)initWithSessionEstablishment:(id)a0 sessionTranscript:(id)a1 seAccessEndpoint:(id)a2;

@end
