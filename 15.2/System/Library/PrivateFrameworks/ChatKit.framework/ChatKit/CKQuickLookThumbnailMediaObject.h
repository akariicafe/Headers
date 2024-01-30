@interface CKQuickLookThumbnailMediaObject : CKMediaObject

+ (id)UTITypes;
+ (BOOL)isPreviewable;
+ (Class)__ck_attachmentItemClass;

- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (BOOL)shouldSuppressPreview;
- (id)diskCachedThumbnailForOrientation:(char)a0;
- (id)attachmentSummary:(unsigned long long)a0;

@end
