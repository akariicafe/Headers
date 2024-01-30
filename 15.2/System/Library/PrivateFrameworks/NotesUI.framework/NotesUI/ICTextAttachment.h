@interface ICTextAttachment : ICBaseTextAttachment

+ (id)textAttachmentWithAttachment:(id)a0;
+ (BOOL)textAttachmentIsContent:(id)a0;
+ (Class)textAttachmentClassForAttachment:(id)a0;
+ (double)defaultAttachmentThumbnailViewHeight;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (BOOL)isUnsupported;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (struct { double x0; double x1; double x2; double x3; })attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (BOOL)supportsThumbnailView;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (id)attachmentAsNSTextAttachment;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)availableWidthForTextContainer:(id)a0;

@end
