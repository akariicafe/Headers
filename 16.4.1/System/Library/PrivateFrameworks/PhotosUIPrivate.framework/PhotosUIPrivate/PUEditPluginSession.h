@class UINavigationController, NSString, PUEditPlugin, PUEditPluginManager, UIViewController;
@protocol PUEditPluginSessionDataSource, PUEditableAsset, PUEditPluginSessionDelegate;

@interface PUEditPluginSession : NSObject <PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, PUEditExtensionActivityViewControllerDelegate> {
    PUEditPluginManager *_pluginManager;
    UINavigationController *_pluginNavigationController;
}

@property (nonatomic) BOOL isAvailable;
@property (retain, nonatomic) PUEditPlugin *currentPlugin;
@property (nonatomic) long long adjustmentType;
@property (retain, nonatomic) id<PUEditableAsset> asset;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (weak, nonatomic) id<PUEditPluginSessionDataSource> dataSource;
@property (weak, nonatomic) id<PUEditPluginSessionDelegate> delegate;
@property (readonly, nonatomic) BOOL markupIsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)updateAvailability;
- (id)init;
- (void).cxx_destruct;
- (void)presentAlertController:(id)a0;
- (void)_pluginManagerPluginsDidChange:(id)a0;
- (void)_beginMarkupSessionWithAsset:(id)a0 fromViewController:(id)a1;
- (void)_beginSessionWithAsset:(id)a0 fromViewController:(id)a1 sourceElement:(id)a2 includeMarkupInList:(BOOL)a3;
- (void)_launchPlugin:(id)a0 afterDismissingViewController:(id)a1;
- (id)_linkPresentationImage;
- (id)_localizedEditorListTitle;
- (void)_unlockScreenIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)beginMarkupSessionWithAsset:(id)a0 fromViewController:(id)a1;
- (void)beginSessionWithAsset:(id)a0 fromViewController:(id)a1 sourceElement:(id)a2 includeMarkupInList:(BOOL)a3;
- (void)dismissSession;
- (void)editExtensionActivityViewController:(id)a0 didSelectActivity:(id)a1;
- (void)editPluginHostViewController:(id)a0 commitContentEditingOutput:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)editPluginHostViewController:(id)a0 didFinishWithCompletionType:(unsigned long long)a1;
- (void)editPluginHostViewController:(id)a0 loadItemProviderWithHandler:(id /* block */)a1;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)a0 loadHandler:(id /* block */)a1;
- (unsigned long long)pluginManagerMediaType;
- (void)shouldLaunchPlugin:(id)a0 completion:(id /* block */)a1;
- (void)updatePluginManager;

@end
