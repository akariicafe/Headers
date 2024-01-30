@class NSString;

@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer <PUSlideshowViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)createActivityWithActionManager:(id)a0;

- (void)performUserInteractionTask;
- (void)slideshowViewControllerDidFinish:(id)a0 withVisibleAssets:(id)a1;
- (void)_startSlideshow;

@end
