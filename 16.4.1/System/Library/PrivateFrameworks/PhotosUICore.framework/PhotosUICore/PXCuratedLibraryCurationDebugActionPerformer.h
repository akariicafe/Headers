@class PXGLayout;

@interface PXCuratedLibraryCurationDebugActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, weak, nonatomic) PXGLayout *layoutForDiagnosticDescription;

- (id)activitySystemImageName;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 assetCollectionReference:(id)a1 diagnosticLayout:(id)a2;

@end
