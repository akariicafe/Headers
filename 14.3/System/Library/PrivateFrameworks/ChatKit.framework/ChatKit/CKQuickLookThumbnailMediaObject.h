@interface CKQuickLookThumbnailMediaObject : CKMediaObject

+ (BOOL)isPreviewable;
+ (Class)__ck_attachmentItemClass;
+ (id)UTITypes;

- (id)diskCachedThumbnailForOrientation:(char)a0;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)attachmentSummary:(unsigned long long)a0;

@end
