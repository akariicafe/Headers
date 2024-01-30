@class NSString;

@interface WFSetWallpaperActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFSetWallpaperActionUserInterface, SBSUIWallpaperPreviewViewControllerDelegate>

@property (nonatomic) long long locations;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isiPad;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (void)showPreviewWithInput:(id)a0 key:(id)a1 wallpaperLocation:(long long)a2 completionHandler:(id /* block */)a3;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;

@end
