@class HKWatchAppAvailability;

@interface HRElectrocardiogramWatchAppInstallability : NSObject

@property (retain, nonatomic) HKWatchAppAvailability *ecgAppAvailability;

+ (void)installElectrocardiogramAppOnActiveWatch:(id /* block */)a0;
+ (BOOL)isElectrocardiogramAppDeletableForActiveWatch;

- (id)init;
- (void).cxx_destruct;
- (void)electrocardiogramAppInstallStateOnActiveWatch:(id /* block */)a0;
- (void)setAllowInstallingElectrocardiogramWatchApp:(BOOL)a0;
- (void)checkElectrocardiogramAppInstallStateWithContext:(id)a0 completion:(id /* block */)a1;
- (id)installElectrocardiogramAppAlertController:(id /* block */)a0 cancel:(id /* block */)a1;

@end
