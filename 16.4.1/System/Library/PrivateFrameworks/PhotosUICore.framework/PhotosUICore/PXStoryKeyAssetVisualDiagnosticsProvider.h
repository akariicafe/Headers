@class PXStoryVisualDiagnosticsProviderHelper, PXStoryModel;

@interface PXStoryKeyAssetVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider>

@property (readonly, nonatomic) PXStoryVisualDiagnosticsProviderHelper *helper;
@property (readonly, nonatomic) PXStoryModel *model;

- (id)initWithModel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_requestPotentialKeyAssetsWithResultHandler:(id /* block */)a0;
- (void)_requestThumbnailTimelineWithKeyAsset:(id)a0 resultHandler:(id /* block */)a1;
- (void)addVisualDiagnosticsToContext:(id)a0 completionHandler:(id /* block */)a1;

@end
