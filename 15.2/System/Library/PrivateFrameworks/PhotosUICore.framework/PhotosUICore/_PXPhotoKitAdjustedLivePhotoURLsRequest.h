@class NSString, PHImageRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedLivePhotoURLsRequest : _PXPhotoKitAdjustedUIMediaRequest {
    PLPhotoEditRenderer *_renderer;
}

@property (readonly, nonatomic) PHImageRequestOptions *options;
@property (readonly, copy, nonatomic) NSString *pairingIdentifier;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (void)start;
- (void).cxx_destruct;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)_renderIfNeeded;
- (id)initWithRenderQueue:(id)a0 asset:(id)a1 pairingIdentifier:(id)a2 imageManager:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (void)_handleExportFinishedWithImageURL:(id)a0 videoURL:(id)a1 error:(id)a2;

@end
