@class NSURL, NSSet, NSDictionary, NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, BLTSiriActionAppListDelegate;

@interface BLTSiriActionAppList : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary *_installed;
    NSMutableSet *_removed;
    NSObject<OS_dispatch_queue> *_appListQueue;
    NSURL *_siriActionAppListStoreURL;
    NSMutableSet *_appListStore;
}

@property (readonly, nonatomic) NSDictionary *installed;
@property (readonly, nonatomic) NSSet *removed;
@property (weak, nonatomic) id<BLTSiriActionAppListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationIconDidChange:(id)a0;
- (void)dealloc;
- (id)_siriActionAppListStoreURL;
- (BOOL)_handleAppListInstalled:(id)a0 removed:(id)a1;
- (void)updateStoreWithInstalled:(id)a0 removed:(id)a1;

@end
