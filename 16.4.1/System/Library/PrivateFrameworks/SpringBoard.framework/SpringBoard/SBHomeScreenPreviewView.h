@class UIView, NSString, SBRootFolderController, _SBHomeScreenFolderDelegate, SBWindowSceneStatusBarManager, SBFloatingDockViewController, UIStatusBar, SBHIconManager;
@protocol SBDockOffscreenFractionModifying;

@interface SBHomeScreenPreviewView : UIView <SBIconViewProviding, SBIconViewDelegate> {
    UIView *_folderContent;
    UIView *_floatingDock;
    UIStatusBar *_statusBar;
    SBRootFolderController *_rootFolderController;
    _SBHomeScreenFolderDelegate *_folderDelegate;
    SBWindowSceneStatusBarManager *_windowSceneStatusBarManager;
}

@property (readonly, nonatomic) SBHIconManager *iconManager;
@property (readonly, nonatomic) SBFloatingDockViewController *floatingDockViewController;
@property (readonly, nonatomic) unsigned long long snapshotOptions;
@property (readonly, nonatomic) id<SBDockOffscreenFractionModifying> dockOffscreenModifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recycleIconView:(id)a0;
- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (BOOL)isIconViewRecycled:(id)a0;
- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (id)iconView:(id)a0 backgroundViewForComponentsOfType:(long long)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)behaviorDelegateForIconView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iconManager:(id)a1 wallpaperController:(id)a2 options:(unsigned long long)a3 wallpaperImage:(id)a4 listView:(id)a5;
- (id)makeFolderContentWithWallpaperController:(id)a0 legibilitySettings:(id)a1 options:(unsigned long long)a2;
- (id)makeIconFolderContentWithWallpaperController:(id)a0 legibilitySettings:(id)a1 options:(unsigned long long)a2;
- (id)makeSilhouetteFolderContent;

@end
