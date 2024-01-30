@class PXGLayout;

@interface PXCuratedLibraryCurationDebugActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, weak, nonatomic) PXGLayout *layoutForDiagnosticDescription;

- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (id)activitySystemImageName;
- (id)initWithViewModel:(id)a0 assetCollectionReference:(id)a1 diagnosticLayout:(id)a2;

@end
