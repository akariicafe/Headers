@interface CPTableCell : CPChunk <CPDisposable> {
    struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGColor *x1; unsigned int x2; id *x3; } *borders;
    struct CGColor { } *backgroundColor;
    id *backgroundGraphics;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cellBounds;
@property (nonatomic) struct { long long location; long long length; } rowSpan;
@property (nonatomic) struct { long long location; long long length; } columnSpan;
@property (readonly, nonatomic) unsigned int backgroundGraphicCount;

- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGColor { } *)backgroundColor;
- (void)finalize;
- (void)dispose;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsOfBorder:(int)a0;
- (id)backgroundGraphicAtIndex:(unsigned int)a0;
- (struct CGColor { } *)colorOfBorder:(int)a0;
- (long long)compareCellOrdinal:(id)a0;
- (unsigned int)graphicCountOfBorder:(int)a0;
- (id)graphicObjectOfBorder:(int)a0 atIndex:(unsigned int)a1;
- (void)setBackgroundGraphics:(id)a0;
- (void)setBorder:(int)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 graphics:(id)a2;

@end
