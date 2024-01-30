@class NSString, TRDeviceSetupLegacySetupActionAuthInfo;

@interface TRDeviceSetupLegacySetupAction : TRDeviceSetupLegacyAction

@property (readonly, nonatomic) TRDeviceSetupLegacySetupActionAuthInfo *authInfo;
@property (readonly, nonatomic) NSString *networkSSID;
@property (readonly, nonatomic) NSString *networkPassword;
@property (readonly, nonatomic) BOOL diagnosticsEnabled;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *homeSharingAppleID;
@property (readonly, nonatomic) NSString *homeSharingGroupID;
@property (readonly, nonatomic) BOOL rememberPassword;

- (id)initWithAuthInfo:(id)a0 networkSSID:(id)a1 networkPassword:(id)a2 diagnosticsEnabled:(BOOL)a3 language:(id)a4 countryCode:(id)a5 homeSharingAppleID:(id)a6 homeSharingGroupID:(id)a7 rememberPassword:(BOOL)a8;

@end
