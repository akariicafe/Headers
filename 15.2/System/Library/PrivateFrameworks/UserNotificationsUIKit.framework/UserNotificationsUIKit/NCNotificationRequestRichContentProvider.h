@class UIImage;

@interface NCNotificationRequestRichContentProvider : NCNotificationRequestCoalescingContentProvider {
    UIImage *_cachedAttachmentImage;
}

@property (nonatomic, getter=isCachedAttachmentedImageFeatured) BOOL cachedAttachmentImageFeatured;
@property (nonatomic, getter=isIconVisible) BOOL iconVisible;
@property (readonly, nonatomic) BOOL hasAttachmentImage;
@property (readonly, nonatomic) BOOL hasLoadedRichAttachmentImage;

+ (id)featuredImageFetchQueue;

- (id)thumbnail;
- (void).cxx_destruct;
- (BOOL)_shouldShowContent;
- (void)fetchRichAttachmentImageIsFeatured:(BOOL)a0 withCompletion:(id /* block */)a1;

@end
