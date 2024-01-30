@class ICAttachment;

@interface ICBaseTextAttachment : ICAbstractTextAttachment

@property (retain, nonatomic) ICAttachment *attachment;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (BOOL)isUnsupported;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (id)initWithAttachment:(id)a0;
- (id)attachmentAttributesForAttributedString;
- (id)attachmentIdentifier;
- (id)attachmentInContext:(id)a0;
- (id)attachmentUTI;
- (BOOL)canDragWithoutSelecting;
- (void)fixAttachmentForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forPlainText:(BOOL)a2 forStandardizedText:(BOOL)a3;
- (id)inlineAttachmentInContext:(id)a0;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0;
- (double)viewCornerRadius;

@end
