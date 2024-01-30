@class NSString;

@interface TRDeviceSetupGeneralSetupAction : TRDeviceSetupAction

@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *homeSharingID;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID;
@property (readonly, nonatomic) BOOL rememberPassword;
@property (readonly, nonatomic, getter=isDiagnosticsEnabled) BOOL diagnosticsEnabled;

- (id)init;
- (id)initWithCountryCode:(id)a0 language:(id)a1 homeSharingID:(id)a2 homeSharingGroupID:(id)a3 isDiagnosticsEnabled:(BOOL)a4 rememberPassword:(BOOL)a5;

@end
