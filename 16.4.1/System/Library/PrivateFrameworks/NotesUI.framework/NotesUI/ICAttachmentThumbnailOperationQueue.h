@interface ICAttachmentThumbnailOperationQueue : NSOperationQueue

- (void)addOperationWithAttachment:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3 cache:(id)a4 cacheKey:(id)a5 processingBlock:(id /* block */)a6 completionBlock:(id /* block */)a7 fallbackBlock:(id /* block */)a8;
- (id)checkPreviewImagesIntegrityOperationForAttachment:(id)a0;

@end
