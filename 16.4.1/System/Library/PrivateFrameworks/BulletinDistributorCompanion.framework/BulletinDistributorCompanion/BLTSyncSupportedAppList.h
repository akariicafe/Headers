@class NSURL, NSSet, NSDictionary, NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, BLTSyncSupportedAppListDelegate;

@interface BLTSyncSupportedAppList : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary *_installed;
    NSMutableSet *_removed;
    NSObject<OS_dispatch_queue> *_appListQueue;
    NSURL *_syncSupportedAppListStoreURL;
    NSMutableSet *_appListStore;
}

@property (readonly, nonatomic) NSDictionary *installed;
@property (readonly, nonatomic) NSSet *removed;
@property (weak, nonatomic) id<BLTSyncSupportedAppListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationIconDidChange:(id)a0;
- (void)dealloc;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;
- (BOOL)_handleAppListInstalled:(id)a0 removed:(id)a1;
- (id)_syncSupportedAppListStoreURL;
- (void)updateStoreWithInstalled:(id)a0 removed:(id)a1;

@end
