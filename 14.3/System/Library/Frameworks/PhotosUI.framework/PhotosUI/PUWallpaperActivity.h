@class NSString, UIViewController;

@interface PUWallpaperActivity : PXActivity <SBSUIWallpaperPreviewViewControllerDelegate> {
    UIViewController *_wallpaperActivityViewController;
}

@property (nonatomic, getter=_isWallpaperModificationAllowed, setter=_setWallpaperModificationAllowed:) BOOL _wallpaperModificationAllowed;
@property (nonatomic, setter=_setNeedsUpdateWallpaperModificationAllowed:) BOOL _needsUpdateWallpaperModificationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (id)init;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)dealloc;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (id)_activityImageName;
- (void)_restrictionsChanged:(id)a0;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (void)_fetchImageForWallPaperAsset:(id)a0 resultHandler:(id /* block */)a1;
- (void)_handleSetWallpaperActionWithController:(id)a0 locations:(long long)a1;
- (void)_updateWallpaperModificationAllowedIfNeeded;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
