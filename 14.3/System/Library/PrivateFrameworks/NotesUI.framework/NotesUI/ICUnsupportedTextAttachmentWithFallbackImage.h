@interface ICUnsupportedTextAttachmentWithFallbackImage : ICImageTextAttachment

- (BOOL)supportsThumbnailView;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (id)attachmentAsNSTextAttachment;

@end
