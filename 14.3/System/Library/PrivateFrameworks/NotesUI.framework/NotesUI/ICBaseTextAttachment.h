@class NSString, ICAttachment;

@interface ICBaseTextAttachment : NSTextAttachment <TTAttachment>

@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (BOOL)allowsTextAttachmentView;
- (BOOL)isEqualToModelComparable:(id)a0;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (id)attachmentIdentifier;
- (id)attachmentUTI;
- (id)attachmentInContext:(id)a0;
- (id)initWithAttachment:(id)a0;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (BOOL)usesTextAttachmentView;
- (double)viewCornerRadius;
- (id)attachmentAttributesForAttributedString;
- (BOOL)canDragWithoutSelecting;
- (void)fixAttachmentForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forPlainText:(BOOL)a2 forStandardizedText:(BOOL)a3;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0;

@end
