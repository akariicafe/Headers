@class NSXPCListenerEndpoint, NSString, NSDictionary, NSData, NSArray;

@interface DCPresentmentSelection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *credentialIdentifier;
@property (retain) NSDictionary *elementsToPresent;
@property (retain) NSData *authData;
@property (retain) NSXPCListenerEndpoint *seAccessEndpoint;
@property (retain) NSDictionary *deviceNamespaces;
@property (retain) NSData *sessionTranscript;
@property (retain) NSArray *responseEncryptionCertificateChain;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredentialIdentifier:(id)a0 elementsToPresent:(id)a1 authData:(id)a2 seAccessEndpoint:(id)a3;
- (id)initWithCredentialIdentifier:(id)a0 elementsToPresent:(id)a1 authData:(id)a2 seAccessEndpoint:(id)a3 deviceNamespaces:(id)a4;

@end
