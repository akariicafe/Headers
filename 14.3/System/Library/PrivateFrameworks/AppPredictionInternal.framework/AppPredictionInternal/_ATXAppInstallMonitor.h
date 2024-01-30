@class NSObject, NSSet, NSDictionary, ATXWebClipDataStore, _ATXAppInfoManager;
@protocol OS_dispatch_queue;

@interface _ATXAppInstallMonitor : NSObject {
    _ATXAppInfoManager *_appInfoManager;
    ATXWebClipDataStore *_webClipDataStore;
    NSDictionary *_assetData;
    NSObject<OS_dispatch_queue> *_installQueue;
    id /* block */ _updateCompletionBlock;
}

@property (retain, nonatomic) NSSet *azulNewAppSet;

+ (id)azulNewAppSet;
+ (id)removeIntersectionBetweenSet:(id)a0 set:(id)a1;
+ (id)appInfoDictWithBackDate:(BOOL)a0 assetData:(id)a1 azulNewAppSet:(id)a2 isFromNotification:(BOOL)a3 newApps:(id)a4;

- (void)receivedInstallNotification:(id)a0;
- (BOOL)restoreInProgress;
- (id)init;
- (id)webClipsForRemovedApps:(id)a0;
- (void).cxx_destruct;
- (void)_receivedUninstallNotificationWithApps:(id)a0 placeholderUninstallNotification:(BOOL)a1;
- (id)_fetchAllAppsWithInstallDateFromDatastore;
- (void)_receivedInstallNotificationWithApps:(id)a0 placeholderInstallNotification:(BOOL)a1;
- (void)dealloc;
- (void)stop;
- (id)_appInfoDictWithBackDate:(BOOL)a0 isFromNotification:(BOOL)a1 newApps:(id)a2;
- (void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)a0 andBackdate:(BOOL)a1;
- (id)_fetchAllAppsFromDatastore;
- (id)initWithAppInfoManager:(id)a0;
- (void)noSyncUpdateWithWaitTime:(unsigned long long)a0 andBackdate:(BOOL)a1;
- (void)train;
- (void)receivedStateChangeNotification:(id)a0;
- (id)initWithAppInfoManager:(id)a0 shouldSynchronousUpdate:(BOOL)a1;
- (void)start;
- (void)setUpdateCompletionBlock:(id /* block */)a0;
- (void)receivedUninstallNotification:(id)a0;
- (void)handleUninstallationOfApps:(id)a0;
- (void)synchronousUpdateAndBackdate:(BOOL)a0;
- (id)_fetchAllApps;
- (void)handleInstallationOfApps:(id)a0 isFromNotification:(BOOL)a1 andBackdate:(BOOL)a2;

@end
