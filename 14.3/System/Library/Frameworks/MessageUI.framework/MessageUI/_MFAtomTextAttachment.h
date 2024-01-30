@class MFModernComposeRecipientAtom, MFComposeRecipient;

@interface _MFAtomTextAttachment : NSTextAttachment

@property (nonatomic) BOOL isPlaceholder;
@property (retain, nonatomic) MFModernComposeRecipientAtom *atomView;
@property (readonly, nonatomic) MFComposeRecipient *recipient;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (id)initWithAtomView:(id)a0;
- (id)attributedStringWithBaseAttributes:(id)a0;

@end
