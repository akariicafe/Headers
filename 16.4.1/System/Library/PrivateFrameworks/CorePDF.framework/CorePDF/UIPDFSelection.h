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

- (BOOL)isEmpty;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (id)initWithSelection:(id)a0;
- (id)page;
- (id)textAtIndex:(unsigned long long)a0;
- (id)archive;
- (id)string;
- (unsigned long long)endIndex;
- (struct { long long x0; long long x1; })extent;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)init;
- (id)description;
- (unsigned long long)startIndex;
- (id)attributedStringAtIndex:(unsigned long long)a0;
- (BOOL)getBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 index:(unsigned long long)a2;
- (unsigned long long)numberOfRectangles;
- (BOOL)isNonEmpty;
- (struct CGPDFSelection { } *)CGSelection;
- (id)initWithPage:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (double)baseLineAtIndex:(unsigned long long)a0;
- (id)containingTextLine;
- (void)copyToPasteboard;
- (unsigned long long)extendAtEnd:(unsigned long long)a0;
- (unsigned long long)extendAtStart:(unsigned long long)a0;
- (void)extendToParagraph;
- (id)htmlAtIndex:(unsigned long long)a0;
- (id)initWithPage:(id)a0 cgSelection:(struct CGPDFSelection { } *)a1;
- (id)initWithPage:(id)a0 fromArchive:(id)a1;
- (BOOL)isWord;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })rectangleAtIndex:(unsigned long long)a0 scale:(double)a1 inset:(double)a2;
- (id)selectionExtendedToLineBoundaries;

@end
