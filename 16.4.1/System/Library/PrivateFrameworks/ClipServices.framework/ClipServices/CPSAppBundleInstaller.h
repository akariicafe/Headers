@class IXPromisedTransferToPath, NSString, IXInitiatingAppInstallCoordinator, NSURL, IXPlaceholder;

@interface CPSAppBundleInstaller : NSObject <IXAppInstallCoordinatorObserver> {
    NSURL *_extractedBundleURL;
    IXPlaceholder *_placeholder;
    IXInitiatingAppInstallCoordinator *_installCoordinator;
    IXPromisedTransferToPath *_appAssetPromise;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL inactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)coordinator:(id)a0 canceledWithReason:(id)a1 client:(unsigned long long)a2;
- (void)coordinatorDidCompleteSuccessfully:(id)a0 forApplicationRecord:(id)a1;
- (void)coordinatorDidInstallPlaceholder:(id)a0 forApplicationRecord:(id)a1;
- (BOOL)stopStallingCurrentInstallation;
- (id)initWithBundleIdentifier:(id)a0 extractedBundleURL:(id)a1;
- (void)installWithCompletionHandler:(id /* block */)a0;

@end
