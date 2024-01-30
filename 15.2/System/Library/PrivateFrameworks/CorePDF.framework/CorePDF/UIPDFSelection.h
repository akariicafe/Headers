@class UIPDFPage;

@interface UIPDFSelection : NSObject {
    UIPDFPage *_page;
    struct CGPDFSelection { } *_cgSelection;
    BOOL _dirty;
    struct __CFString { } *_string;
    long long _cachedStartIndex;
    long long _cachedEndIndex;
}

@property (nonatomic) struct { long long location; long long length; } stringRange;

- (id)page;
- (id)string;
- (id)textAtIndex:(unsigned long long)a0;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (unsigned long long)endIndex;
- (BOOL)isEmpty;
- (id)initWithSelection:(id)a0;
- (id)init;
- (id)archive;
- (unsigned long long)startIndex;
- (struct { long long x0; long long x1; })extent;
- (void)dealloc;
- (unsigned long long)numberOfRectangles;
- (BOOL)getBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 index:(unsigned long long)a2;
- (id)attributedStringAtIndex:(unsigned long long)a0;
- (BOOL)isWord;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })rectangleAtIndex:(unsigned long long)a0 scale:(double)a1 inset:(double)a2;
- (id)initWithPage:(id)a0 cgSelection:(struct CGPDFSelection { } *)a1;
- (struct CGPDFSelection { } *)CGSelection;
- (id)initWithPage:(id)a0 fromArchive:(id)a1;
- (id)initWithPage:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (BOOL)isNonEmpty;
- (id)selectionExtendedToLineBoundaries;
- (id)containingTextLine;
- (id)htmlAtIndex:(unsigned long long)a0;
- (unsigned long long)extendAtStart:(unsigned long long)a0;
- (unsigned long long)extendAtEnd:(unsigned long long)a0;
- (void)copyToPasteboard;
- (double)baseLineAtIndex:(unsigned long long)a0;
- (void)extendToParagraph;

@end
