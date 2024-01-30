@class _MFAtomLayoutView;

@interface _MFAtomAttachment : NSTextAttachment

@property (readonly, nonatomic) _MFAtomLayoutView *atomView;
@property (readonly, nonatomic) id representedObject;

+ (id)attachmentWithAtomLayoutView:(id)a0 representedObject:(id)a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithAtomLayoutView:(id)a0 representedObject:(id)a1;

@end
