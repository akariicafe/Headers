@interface PUCAMReviewAssetsFigDecodeItem : PLFigPreheatItem <PUReviewAssetCancelableMediaRequest>

- (void)cancelRequest;
- (id)decodeSessionOptions;
- (id)initWithImageURL:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

@end
