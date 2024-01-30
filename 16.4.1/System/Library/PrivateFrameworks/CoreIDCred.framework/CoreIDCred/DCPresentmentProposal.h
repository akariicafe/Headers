@class NSString, NSData, NSDictionary;

@interface DCPresentmentProposal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *credentialIdentifier;
@property (retain) NSString *presentmentKeyIdentifier;
@property (retain) NSData *presentmentPublicKey;
@property (retain) NSString *partition;
@property (retain) NSString *docType;
@property (retain) NSDictionary *elements;
@property (retain) NSData *authACL;
@property (retain) NSString *readerIdentifier;
@property (retain) NSString *readerOrganization;
@property (retain) NSString *readerOrganizationalUnit;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCredentialIdentifier:(id)a0 presentmentKeyIdentifier:(id)a1 presentmentPublicKey:(id)a2 partition:(id)a3 docType:(id)a4 elements:(id)a5 authACL:(id)a6;
- (id)initWithCredentialIdentifier:(id)a0 presentmentKeyIdentifier:(id)a1 presentmentPublicKey:(id)a2 partition:(id)a3 docType:(id)a4 elements:(id)a5 authACL:(id)a6 readerIdentifier:(id)a7 readerOrganization:(id)a8 readerOrganizationalUnit:(id)a9;

@end
