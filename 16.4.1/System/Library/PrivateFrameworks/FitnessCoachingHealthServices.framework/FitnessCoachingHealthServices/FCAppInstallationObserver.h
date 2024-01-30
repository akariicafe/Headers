@class FCCAppInstallationUtility;

@interface FCAppInstallationObserver : NSObject {
    FCCAppInstallationUtility *_appInstallationUtility;
    BOOL _isAppInstalled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

@property (readonly, nonatomic) BOOL fitnessAppInstalled;

- (void)_applicationsUninstalled:(id)a0;
- (void)_applicationsInstalled:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setAppInstalled:(BOOL)a0;
- (void)_updateApplicationInstalled;

@end
