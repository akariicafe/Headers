@class _CNAtomLayoutView;

@interface _CNAtomAttachment : NSTextAttachment

@property (readonly, nonatomic) _CNAtomLayoutView *atomView;
@property (readonly, nonatomic) id representedObject;

+ (id)attachmentWithAtomLayoutView:(id)a0 representedObject:(id)a1;

- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)initWithAtomLayoutView:(id)a0 representedObject:(id)a1;

@end
