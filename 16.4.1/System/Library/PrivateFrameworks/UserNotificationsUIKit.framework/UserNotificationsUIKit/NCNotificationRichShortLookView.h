@interface NCNotificationRichShortLookView : NCNotificationShortLookView

@property (nonatomic, getter=isAttachmentImageFeatured) BOOL attachmentImageFeatured;

- (void)_layoutNotificationContentView;
- (id)_newNotificationContentView;
- (id)_richContentView;

@end
