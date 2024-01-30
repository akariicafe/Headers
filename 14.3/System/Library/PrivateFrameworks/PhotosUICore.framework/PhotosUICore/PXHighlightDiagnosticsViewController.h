@class PHPhotosHighlight;

@interface PXHighlightDiagnosticsViewController : PXCuratedAssetCollectionDiagnosticsViewController {
    PHPhotosHighlight *_sourceHighlight;
}

- (id)radarRoutes;
- (void).cxx_destruct;
- (id)curationDebugInformationWithOptions:(id)a0;
- (id)assetsForCurationType:(long long)a0;
- (BOOL)generateSectionTitles:(out id *)a0 andTableContent:(out id *)a1 forIndex:(long long)a2;
- (id)radarAttachmentURLs;
- (id)radarComponentInfoForRoute:(id)a0;
- (id)radarTitleTemplate;
- (id)radarDescriptionTemplate;
- (id)sourceDictionary;
- (id)initWithHighlight:(id)a0;

@end
