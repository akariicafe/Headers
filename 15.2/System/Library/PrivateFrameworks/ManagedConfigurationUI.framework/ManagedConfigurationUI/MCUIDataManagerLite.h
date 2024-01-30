@class NSString;

@interface MCUIDataManagerLite : NSObject <MCUIDataManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)allDeviceManagementOutMDMProfileInfo:(id *)a0 outConfigurationProfilesInfo:(id *)a1 outUninstalledProfilesInfo:(id *)a2 outEnterpriseAppSigners:(id *)a3 outFreeDevAppSigners:(id *)a4 outBlockedApplications:(id *)a5;
- (BOOL)isDeviceManagementHidden;

@end
