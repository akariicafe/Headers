@class NSUUID, NSString;

@interface LSApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)applicationInstallsDidChange:(id)a0;
- (void)applicationsWillUninstall:(id)a0;
- (void)applicationsWillInstall:(id)a0;
- (void)applicationStateDidChange:(id)a0;
- (void)deviceManagementPolicyDidChange:(id)a0;
- (void)applicationInstallsDidCancel:(id)a0;
- (void)applicationsDidFailToInstall:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applicationInstallsDidUpdateIcon:(id)a0;
- (void)applicationInstallsArePrioritized:(id)a0 arePaused:(id)a1;
- (void)applicationInstallsDidPause:(id)a0;
- (void)applicationInstallsDidResume:(id)a0;
- (void)networkUsageChanged:(BOOL)a0;
- (void)applicationInstallsDidPrioritize:(id)a0;
- (void)applicationIconDidChange:(id)a0;
- (void)applicationsDidFailToUninstall:(id)a0;
- (void)applicationInstallsDidStart:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
