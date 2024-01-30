@interface CKMovieAttachmentItem : CKAttachmentItem

+ (id)UTITypes;

- (id)previewItemTitle;
- (BOOL)isIrisAsset;
- (struct CGSize { double x0; double x1; })size;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isJellyfishVideo;
- (struct CGSize { double x0; double x1; })_defaultSize;
- (void)generatePreviewWithCompletion:(id /* block */)a0;

@end
