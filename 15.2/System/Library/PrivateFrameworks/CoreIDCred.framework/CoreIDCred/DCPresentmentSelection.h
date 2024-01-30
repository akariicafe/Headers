@class NSXPCListenerEndpoint, NSString, NSDictionary, NSData;

@interface DCPresentmentSelection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *credentialIdentifier;
@property (retain) NSDictionary *elementsToPresent;
@property (retain) NSData *authData;
@property (retain) NSXPCListenerEndpoint *seAccessEndpoint;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCredentialIdentifier:(id)a0 elementsToPresent:(id)a1 authData:(id)a2 seAccessEndpoint:(id)a3;

@end
