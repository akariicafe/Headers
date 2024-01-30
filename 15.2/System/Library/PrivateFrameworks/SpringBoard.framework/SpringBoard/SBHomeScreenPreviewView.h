@class SBRootFolderController, SBWallpaperController, NSString, _SBHomeScreenFolderDelegate, UIView, SBFloatingDockViewController, SBHIconManager;
@protocol SBDockOffscreenFractionModifying;

@interface SBHomeScreenPreviewView : UIView <SBIconViewProviding, SBIconViewDelegate> {
    UIView *_folderContent;
    UIView *_floatingDock;
    UIView *_statusBar;
    SBRootFolderController *_rootFolderController;
    _SBHomeScreenFolderDelegate *_folderDelegate;
}

@property (readonly, nonatomic) SBHIconManager *iconManager;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;
@property (readonly, nonatomic) SBFloatingDockViewController *floatingDockViewController;
@property (readonly, nonatomic) unsigned long long snapshotOptions;
@property (readonly, nonatomic) id<SBDockOffscreenFractionModifying> dockOffscreenModifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (void)layoutSubviews;
- (BOOL)isIconViewRecycled:(id)a0;
- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)recycleIconView:(id)a0;
- (id)iconView:(id)a0 backgroundViewForComponentsOfType:(long long)a1;
- (id)behaviorDelegateForIconView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iconController:(id)a1 wallpaperController:(id)a2 options:(unsigned long long)a3 wallpaperImage:(id)a4 pageIndexOffset:(long long)a5 rootFolder:(id)a6;

@end
