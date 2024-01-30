@class PLPhotoEditRenderer, PHVideoRequestOptions;

@interface _PXPhotoKitAdjustedVideoRequest : _PXPhotoKitAdjustedUIMediaRequest {
    PLPhotoEditRenderer *_renderer;
}

@property (readonly, nonatomic) PHVideoRequestOptions *options;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)initWithRenderQueue:(id)a0 asset:(id)a1 imageManager:(id)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)_renderIfNeeded;
- (void)_handlePlayerItem:(id)a0 error:(id)a1;
- (void)start;

@end
