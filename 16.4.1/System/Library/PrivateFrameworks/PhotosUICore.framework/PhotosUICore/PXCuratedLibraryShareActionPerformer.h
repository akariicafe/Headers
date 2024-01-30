@interface PXCuratedLibraryShareActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

- (id)activitySystemImageName;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (void)performUserInteractionTask;

@end
