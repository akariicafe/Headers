@class NSString, SFCredentialIdentity, SFSafariCredential, NSExtension;

@interface WBSCredentialIdentityMatch : NSObject <WBSFormAutoFillItem>

@property (readonly, nonatomic) SFCredentialIdentity *credentialIdentity;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) SFSafariCredential *resolvedCredential;
@property (readonly, nonatomic) NSString *completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCredentialIdentity:(id)a0 extension:(id)a1;
- (id)resolvedMatchWithCredential:(id)a0;

@end
