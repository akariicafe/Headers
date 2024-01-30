@class TITypologyProfileState;

@interface TITypologyProfileOptInManager : NSObject <TITypologyProfileOptInManaging>

@property (retain, nonatomic) TITypologyProfileState *typologyProfileState;
@property (readonly, nonatomic) BOOL isTypologyProfileInstalled;
@property (readonly, nonatomic) BOOL isProfileInstalledAndUserEnabled;

+ (id)localizedStringForKey:(id)a0;

- (void)_askUserToAllow;
- (BOOL)_isProfileInstalledAndUserEnabled;
- (id)notificationDetailsForType:(long long)a0;
- (BOOL)devicePasscodeSet;
- (void)dismissDialogWithCompletionHandler:(id /* block */)a0;
- (void)_launchVPNAndDeviceManagementSettings;
- (id)init;
- (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)iCloudAccountAvailable;

@end
