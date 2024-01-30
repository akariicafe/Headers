@interface ICUnsupportedTextAttachmentWithFallbackImage : ICImageTextAttachment

- (id)attachmentAsNSTextAttachment;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (BOOL)supportsThumbnailView;

@end
