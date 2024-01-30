@interface CKAnimatedImageMediaObject : CKImageMediaObject

+ (id)UTITypes;
+ (double)maxPixelDimensionOfThumbnailWithImagePixelSize:(struct CGSize { double x0; double x1; })a0 forWidth:(double)a1 isSticker:(BOOL)a2;
+ (Class)__ck_attachmentItemClass;

- (id)notificationCenter;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (void)prewarmPreviewForWidth:(double)a0 orientation:(char)a1;
- (BOOL)validatePreviewFormat;
- (BOOL)needsAnimation;
- (id /* block */)imageEdgeEnhancementBlockIfNecessary;
- (id)generateThumbnailsForWidth:(double)a0 isSticker:(BOOL)a1 orientation:(char)a2;
- (id)savedAnimatedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (id)generateAndPersistAnimatedPreviewFromImageData:(id)a0 forWidth:(double)a1 withTransferGUID:(id)a2 isSticker:(BOOL)a3;
- (id)thumbnailAtIndex:(unsigned long long)a0 forWidth:(double)a1 imageData:(id)a2 isSticker:(BOOL)a3 orientation:(char)a4;
- (id)scaledThumbnailFromThumbnail:(id)a0 forWidth:(double)a1 isSticker:(BOOL)a2;
- (BOOL)validPreviewExistsAtURL:(id)a0;
- (BOOL)canQuickSave;
- (id)animatedImageForWidth:(double)a0;
- (id)generateAndPersistAnimatedPreviewFromSourceURL:(id)a0 forWidth:(double)a1 withTransferGUID:(id)a2 isSticker:(BOOL)a3;
- (void)saveAnimatedPreview:(id)a0 toURL:(id)a1 forOrientation:(char)a2;
- (id)savedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)metricsCollectorMediaType;

@end
