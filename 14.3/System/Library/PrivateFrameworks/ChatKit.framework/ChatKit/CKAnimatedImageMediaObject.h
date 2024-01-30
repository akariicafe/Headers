@interface CKAnimatedImageMediaObject : CKImageMediaObject

+ (Class)__ck_attachmentItemClass;
+ (id)UTITypes;

- (id)notificationCenter;
- (BOOL)validatePreviewFormat;
- (id)savedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (void)prewarmPreviewForWidth:(double)a0 orientation:(char)a1;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (id /* block */)imageEdgeEnhancementBlockIfNecessary;
- (id)generateThumbnailsForWidth:(double)a0 isSticker:(BOOL)a1 orientation:(char)a2;
- (id)savedAnimatedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (id)animatedImageForWidth:(double)a0;
- (BOOL)validPreviewExistsAtURL:(id)a0;
- (id)generateAndPersistAnimatedPreviewFromImageData:(id)a0 forWidth:(double)a1 withTransferGUID:(id)a2 isSticker:(BOOL)a3;
- (id)thumbnailAtIndex:(unsigned long long)a0 forWidth:(double)a1 imageData:(id)a2 isSticker:(BOOL)a3 orientation:(char)a4;
- (id)scaledThumbnailFromThumbnail:(id)a0 forWidth:(double)a1 isSticker:(BOOL)a2;
- (void)saveAnimatedPreview:(id)a0 toURL:(id)a1 forOrientation:(char)a2;
- (BOOL)needsAnimation;

@end
