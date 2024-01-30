@class NSArray, NSString, NSData, ASCPublicKeyCredentialDescriptor;

@interface ASAuthorizationSecurityKeyPublicKeyCredentialDescriptor : NSObject <ASAuthorizationPublicKeyCredentialDescriptor>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ASCPublicKeyCredentialDescriptor *coreDescriptor;
@property (retain, nonatomic) NSArray *transports;
@property (copy, nonatomic) NSData *credentialID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCredentialID:(id)a0 transports:(id)a1;

@end
