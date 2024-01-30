@interface CKMovieAttachmentItem : CKAttachmentItem

+ (id)UTITypes;

- (BOOL)isJellyfishVideo;
- (struct CGSize { double x0; double x1; })size;
- (void)generatePreviewWithCompletion:(id /* block */)a0;
- (BOOL)isIrisAsset;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_defaultSize;
- (id)previewItemTitle;

@end
