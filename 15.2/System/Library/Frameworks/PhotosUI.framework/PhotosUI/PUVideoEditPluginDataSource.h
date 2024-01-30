@class PHAsset, NSString;

@interface PUVideoEditPluginDataSource : NSObject <PUVideoEditPluginSessionDataSource>

@property (retain, nonatomic) PHAsset *videoAsset;
@property (nonatomic) BOOL allowsRevertInSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)editPluginSession:(id)a0 commitContentEditingOutput:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)editPluginSession:(id)a0 loadAdjustmentDataWithHandler:(id /* block */)a1;
- (void)_renderTemporaryVideoForObjectBuilder:(id)a0 resultHandler:(id /* block */)a1;
- (void)_requestRenderedVideoForVideoURL:(id)a0 adjustmentData:(id)a1 canHandleAdjustmentData:(BOOL)a2 resultHandler:(id /* block */)a3;
- (BOOL)editPluginSessionCanRevertToOriginal:(id)a0;
- (void)editPluginSession:(id)a0 revertToOriginalWithCompletionHandler:(id /* block */)a1;
- (void)editPluginSession:(id)a0 loadPlaceholderImageWithHandler:(id /* block */)a1;
- (void)editPluginSession:(id)a0 loadVideoURLWithHandler:(id /* block */)a1;
- (id)initWithVideoAsset:(id)a0;
- (void)_fetchCanRevertAsset:(id)a0 asynchronously:(BOOL)a1 handler:(id /* block */)a2;

@end
