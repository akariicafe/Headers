@interface ICImageTextAttachment : ICTextAttachment

- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (BOOL)supportsThumbnailView;
- (BOOL)supportsMultipleThumbnailsOnSameLine;

@end
