@class NSUUID, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface LSApplicationWorkspaceRemoteObserver : NSObject <LSInternalWorkspaceObserverProtocol, NSSecureCoding> {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_progressSubscriptionsQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (getter=isObservinglsd) BOOL observinglsd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addLocalObserver:(id)a0;
- (id)init;
- (unsigned long long)currentObserverCount;
- (void).cxx_destruct;
- (void)applicationInstallsDidChange:(id)a0;
- (void)pluginsDidInstall:(id)a0;
- (void)applicationsWillUninstall:(id)a0;
- (void)applicationsWillInstall:(id)a0;
- (void)applicationStateDidChange:(id)a0;
- (void)deviceManagementPolicyDidChange:(id)a0;
- (id)localObservers;
- (void)applicationInstallsDidCancel:(id)a0;
- (void)applicationsDidFailToInstall:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applicationInstallsDidUpdateIcon:(id)a0;
- (BOOL)messageObserversWithSelector:(SEL)a0 andApps:(id)a1;
- (void)applicationInstallsArePrioritized:(id)a0 arePaused:(id)a1;
- (void)applicationInstallsDidPause:(id)a0;
- (void)applicationInstallsDidResume:(id)a0;
- (void)networkUsageChanged:(BOOL)a0;
- (void)removeLocalObserver:(id)a0;
- (void)pluginsWillUninstall:(id)a0;
- (void)applicationInstallsDidPrioritize:(id)a0;
- (void)applicationIconDidChange:(id)a0;
- (void)applicationsDidFailToUninstall:(id)a0;
- (void)applicationInstallsDidStart:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)pluginsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
