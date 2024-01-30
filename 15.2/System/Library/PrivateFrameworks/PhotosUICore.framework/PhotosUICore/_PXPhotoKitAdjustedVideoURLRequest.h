@class NSString, PHVideoRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedVideoURLRequest : _PXPhotoKitAdjustedUIMediaRequest {
    PLPhotoEditRenderer *_renderer;
}

@property (readonly, nonatomic) PHVideoRequestOptions *options;
@property (readonly, copy, nonatomic) NSString *pairingIdentifier;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (void)start;
- (void).cxx_destruct;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)_renderIfNeeded;
- (id)initWithRenderQueue:(id)a0 asset:(id)a1 pairingIdentifier:(id)a2 imageManager:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (void)_handleExportFinished:(BOOL)a0 error:(id)a1 videoURL:(id)a2;

@end
