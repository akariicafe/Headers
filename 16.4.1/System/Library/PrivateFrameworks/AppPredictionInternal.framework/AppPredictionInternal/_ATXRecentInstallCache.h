@class NSMutableDictionary, _ATXInternalUninstallNotification, _ATXInternalInstallNotification;

@interface _ATXRecentInstallCache : NSObject {
    double _ttl;
    _ATXInternalInstallNotification *_installNotificationMonitor;
    _ATXInternalUninstallNotification *_uninstallNotificationMonitor;
    NSMutableDictionary *_recentInstallations;
}

- (id)_getRecentInstallationsMap;
- (id)initTrackingAppsMoreRecentThan:(double)a0;
- (id)allRecentlyInstalledApplications;
- (id)initTrackingAppsMoreRecentThan:(double)a0 installMonitor:(id)a1 uninstallMonitor:(id)a2;
- (void)_notifiedOfUninstalls:(id)a0;
- (void)_notifiedOfInstalls:(id)a0;
- (id)init;
- (id)_allRecentlyInstalledApplicationsAfterExpirationDate:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
