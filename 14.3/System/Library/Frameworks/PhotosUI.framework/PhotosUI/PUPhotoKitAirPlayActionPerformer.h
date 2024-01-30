@interface PUPhotoKitAirPlayActionPerformer : PUPhotoKitActionPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void)_showAirPlayPicker;
- (void)_handleDismissedAirPlayPicker;

@end
