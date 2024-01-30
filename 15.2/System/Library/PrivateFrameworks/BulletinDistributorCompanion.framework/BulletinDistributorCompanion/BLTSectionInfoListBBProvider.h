@class NSString, LSApplicationWorkspace, BLTSectionInfoObserver, NSObject;
@protocol BLTSectionInfoListProviderDelegate, OS_dispatch_queue;

@interface BLTSectionInfoListBBProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoObserverDelegate, BLTSectionInfoListBBProvider> {
    BLTSectionInfoObserver *_observer;
    LSApplicationWorkspace *_appWorkspace;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<BLTSectionInfoListProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (void)applicationIconDidChange:(id)a0;
- (id)sectionInfoForSectionID:(id)a0;
- (id)initWithSettingsGateway:(id)a0;
- (void)dealloc;
- (void)reloadWithCompletion:(id /* block */)a0;
- (void)sectionInfoObserver:(id)a0 updatedSectionInfoForSectionIDs:(id)a1 transaction:(id)a2;
- (void)sectionInfoObserver:(id)a0 removedSectionWithSectionID:(id)a1 transaction:(id)a2;

@end
