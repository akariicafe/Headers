@interface ICAttachmentBrickPreviewImageCacheV2 : ICThumbnailDataCache

+ (id)cacheKeyForAttachmentObjectID:(id)a0 brickSize:(unsigned long long)a1 scale:(double)a2 appearanceType:(unsigned long long)a3;

- (id)init;
- (void)dealloc;
- (void)attachmentPreviewImagesDidUpdate:(id)a0;

@end
