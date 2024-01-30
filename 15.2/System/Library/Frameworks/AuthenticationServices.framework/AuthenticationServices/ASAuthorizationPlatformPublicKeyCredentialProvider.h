@class NSString;

@interface ASAuthorizationPlatformPublicKeyCredentialProvider : NSObject <ASAuthorizationProvider>

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
