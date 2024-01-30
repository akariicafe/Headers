@class NSString, WBSWebBrowserPasskey, NSData;

@interface ASAuthorizationWebBrowserPlatformPublicKeyCredential : NSObject

@property (readonly, nonatomic) WBSWebBrowserPasskey *corePasskey;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *relyingParty;
@property (readonly, nonatomic) NSData *credentialID;
@property (readonly, nonatomic) NSData *userHandle;

- (void).cxx_destruct;
- (id)initWithCorePasskey:(id)a0;

@end
