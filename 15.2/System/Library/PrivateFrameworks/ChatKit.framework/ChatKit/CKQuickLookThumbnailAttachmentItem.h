@interface CKQuickLookThumbnailAttachmentItem : CKAttachmentItem

+ (id)UTITypes;
+ (struct CGSize { double x0; double x1; })defaultSize;

- (struct CGSize { double x0; double x1; })size;
- (void)generatePreviewWithCompletion:(id /* block */)a0;

@end
