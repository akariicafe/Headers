@class NSString;

@interface ICTextAttachment : ICBaseTextAttachment

@property (readonly, nonatomic) NSString *viewIdentifier;
@property (readonly, nonatomic) BOOL containsFindableText;

+ (id)textAttachmentWithAttachment:(id)a0;
+ (BOOL)textAttachmentIsContent:(id)a0;
+ (Class)textAttachmentClassForAttachment:(id)a0;
+ (double)defaultAttachmentThumbnailViewHeight;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (Class)attachmentViewClass;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (struct { double x0; double x1; double x2; double x3; })attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (BOOL)supportsThumbnailView;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (id)attachmentAsNSTextAttachment;
- (Class)attachmentViewControllerClass;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)newlyCreatedView;
- (id)newlyCreatedViewForManualRendering;
- (id)newlyCreatedViewControllerForManualRendering:(BOOL)a0 layoutManager:(id)a1;
- (double)availableWidthForTextContainer:(id)a0;

@end
