@interface ICDrawingTextAttachment : ICTextAttachment

- (struct { double x0; double x1; double x2; double x3; })attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (BOOL)supportsThumbnailView;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (double)viewCornerRadius;
- (id)printableTextAttachment;

@end
