@class TITypologyProfileState;

@interface TITypologyProfileOptInManager : NSObject <TITypologyProfileOptInManaging>

@property (retain, nonatomic) TITypologyProfileState *typologyProfileState;
@property (readonly, nonatomic) BOOL isTypologyProfileInstalled;
@property (readonly, nonatomic) BOOL isProfileInstalledAndUserEnabled;

+ (id)localizedStringForKey:(id)a0;

- (void)dismissDialogWithCompletionHandler:(id /* block */)a0;
- (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)devicePasscodeSet;
- (BOOL)iCloudAccountAvailable;
- (BOOL)_isProfileInstalledAndUserEnabled;
- (void)_askUserToAllow;
- (void)_launchVPNAndDeviceManagementSettings;
- (id)notificationDetailsForType:(long long)a0;

@end
