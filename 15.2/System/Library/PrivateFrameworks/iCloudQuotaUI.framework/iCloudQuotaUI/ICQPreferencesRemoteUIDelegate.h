@class NSString, UINavigationController, PSCloudStorageOffersManager, NSOperationQueue, RUILoader, ICQPreferencesRemoteUIDelegateTableCellButton, NSMutableArray, ICQPreferencesFreshmintManager;
@protocol DelayedPushDelegate;

@interface ICQPreferencesRemoteUIDelegate : NSObject <PSCloudStorageOffersManagerDelegate, ICQUpgradeFlowManagerDelegate, PreferencesRemoteUIDelegateProtocol, RUIObjectModelDelegate, RUILoaderDelegate> {
    UINavigationController *_navigationController;
    UINavigationController *_modalNavigationController;
    PSCloudStorageOffersManager *_storageOffersManager;
    id /* block */ _storageOffersFlowCompletion;
    NSMutableArray *_objectModels;
    RUILoader *_loader;
    NSMutableArray *_deleteLoaders;
    NSOperationQueue *_deleteQueue;
    ICQPreferencesRemoteUIDelegateTableCellButton *_button;
    unsigned long long _forceActionSignal;
    BOOL _cancelled;
    int _deleteAllDocumentsAttemptCount;
    NSString *_requestContentType;
    id /* block */ _linkCompletionBlock;
}

@property (retain) RUILoader *lastDocumentDeleteLoader;
@property (retain, nonatomic) ICQPreferencesFreshmintManager *freshmintManager;
@property (retain, nonatomic) NSString *initialAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DelayedPushDelegate> delegate;

- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (void)managerDidCancel:(id)a0;
- (id)initWithNavigationController:(id)a0;
- (void)cancelRemoteUI;
- (void)manager:(id)a0 didCompleteWithError:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)loadURL:(id)a0 postBody:(id)a1;
- (void)loader:(id)a0 receivedObjectModel:(id)a1 topActionSignal:(id)a2;
- (void)loader:(id)a0 didFinishLoadWithError:(id)a1 forRequest:(id)a2;
- (id)parentViewControllerForObjectModel:(id)a0;
- (void)objectModel:(id)a0 pressedLink:(id)a1 httpMethod:(id)a2 completion:(id /* block */)a3;
- (void)objectModel:(id)a0 page:(id)a1 toggledEditing:(BOOL)a2;
- (BOOL)objectModel:(id)a0 page:(id)a1 deletedTableRow:(id)a2 atIndexPath:(id)a3 withURL:(id)a4 httpMethod:(id)a5;
- (void)objectModelPressedBack:(id)a0;
- (void)objectModel:(id)a0 pressedButton:(id)a1 attributes:(id)a2;
- (void)_popObjectModelAnimated:(BOOL)a0;
- (void)reloadQuotaInfo;
- (void)reloadTopControllerWithAdditionalHeaders:(id)a0;
- (void)popAndReloadFromRemoteUI:(BOOL)a0 additionalHeaders:(id)a1;
- (void)willShowController:(id)a0;
- (void)cleanupLoader;
- (void)loadURL:(id)a0 postBody:(id)a1 additionalHeaders:(id)a2;
- (void)buyFlowCompletionDidSucceed:(BOOL)a0 error:(id)a1;
- (void)_presentCloudStorageOffersFlowWithAction:(id)a0 completion:(id /* block */)a1;
- (id)_afuiSettingsSpecifier;
- (void)_loadCKStoragePluginSettingsBundleIfNeeded;
- (id)_healthSettingsSpecifier;
- (BOOL)_loadNativeURL:(id)a0;
- (void)_freshmintStorageUpgradeWithCompletion:(id /* block */)a0 withURL:(id)a1;
- (void)deleteAllDocuments;
- (void)confirmDeleteWithTitle:(id)a0 prompt:(id)a1 explanation:(id)a2 confirmationAction:(id /* block */)a3;
- (void)confirmDeleteAll;
- (void)_activatePhotosElementForObjectModel:(id)a0 completion:(id /* block */)a1;
- (void)_activateBackupsElementForObjectModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithNavigationController:(id)a0 initialAction:(id)a1;
- (id)initWithNavigationController:(id)a0 buyStorageFlow:(BOOL)a1;

@end
