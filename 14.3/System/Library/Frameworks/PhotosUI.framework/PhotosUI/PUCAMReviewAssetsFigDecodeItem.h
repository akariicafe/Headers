@interface PUCAMReviewAssetsFigDecodeItem : PLFigPreheatItem <PUReviewAssetCancelableMediaRequest>

- (id)initWithImageURL:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (id)decodeSessionOptions;
- (void)cancelRequest;

@end
