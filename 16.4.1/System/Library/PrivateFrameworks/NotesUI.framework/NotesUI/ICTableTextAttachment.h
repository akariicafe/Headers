@interface ICTableTextAttachment : ICTextAttachment

@property (nonatomic) double lastAvailableWidth;
@property (nonatomic) struct CGSize { double width; double height; } lastAttachmentSize;

- (struct { double x0; double x1; double x2; double x3; })attachmentBoundsMargins;
- (BOOL)canDragWithoutSelecting;
- (void)fixAttachmentForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forPlainText:(BOOL)a2 forStandardizedText:(BOOL)a3;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0;

@end
