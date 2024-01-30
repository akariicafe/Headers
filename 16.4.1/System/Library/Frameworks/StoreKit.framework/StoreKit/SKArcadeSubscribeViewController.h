@class NSExtension, NSString, NSNumber, SKStoreRemoteViewController;
@protocol SKArcadeSubscribeViewControllerDelegate, NSCopying;

@interface SKArcadeSubscribeViewController : UIViewController <SKStoreRemoteViewControllerDelegate>

@property (retain, nonatomic) SKStoreRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (weak, nonatomic) id<SKArcadeSubscribeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)finishExtension;
- (void)_setupRemoteChildViewController;
- (void)_loadOcelotUpsellExtension;
- (id)initWithItemID:(id)a0 bundleID:(id)a1;
- (void)storeRemoteViewController:(id)a0 presentRequestedViewControllerWithIdentifier:(id)a1;
- (void)storeRemoteViewControllerDidDismiss;
- (void)storeRemoteViewControllerNeedsTabSelection:(id)a0;
- (void)storeRemoteViewControllerTerminatedWithError:(id)a0;

@end
