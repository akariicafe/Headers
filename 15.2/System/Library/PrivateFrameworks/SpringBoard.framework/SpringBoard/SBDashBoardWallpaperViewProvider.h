@class NSString;

@interface SBDashBoardWallpaperViewProvider : NSObject <CSWallpaperViewProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)suspendWallpaperAnimationForReason:(id)a0;
- (id)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)a0;
- (id)createCoverSheetWallpaperView;
- (void)wallpaperClientWillRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)a0;

@end
