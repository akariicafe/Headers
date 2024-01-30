@interface PXCuratedLibraryToggleAspectFitActionPerformer : PXCuratedLibraryActionPerformer

- (id)initWithViewModel:(id)a0;
- (id)activitySystemImageName;
- (id)activityType;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;

@end
