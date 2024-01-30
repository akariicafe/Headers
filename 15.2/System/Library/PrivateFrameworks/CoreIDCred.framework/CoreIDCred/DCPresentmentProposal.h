@class NSString, NSDictionary, NSData;

@interface DCPresentmentProposal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *credentialIdentifier;
@property (retain) NSString *partition;
@property (retain) NSString *docType;
@property (retain) NSDictionary *elements;
@property (retain) NSData *authACL;
@property (retain) NSString *readerIdentifier;
@property (retain) NSString *readerOrganization;
@property (retain) NSString *readerOrganizationalUnit;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCredentialIdentifier:(id)a0 partition:(id)a1 docType:(id)a2 elements:(id)a3 authACL:(id)a4 readerIdentifier:(id)a5 readerOrganization:(id)a6 readerOrganizationalUnit:(id)a7;
- (id)initWithCredentialIdentifier:(id)a0 partition:(id)a1 docType:(id)a2 elements:(id)a3 authACL:(id)a4;

@end
