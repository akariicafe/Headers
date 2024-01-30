@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {
    unsigned int rowCount;
    unsigned int columnCount;
    struct CGColor { } *backgroundColor;
    id *backgroundGraphics;
    unsigned int usedGraphicCount;
    BOOL disposed;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tableBounds;
@property (nonatomic) unsigned int rowCount;
@property (readonly, nonatomic) double *rowY;
@property (nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) double *columnX;
@property (readonly, nonatomic) unsigned int backgroundGraphicCount;

- (void)dealloc;
- (void)dispose;
- (struct CGColor { } *)backgroundColor;
- (void)finalize;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)incrementUsedGraphicCount;
- (unsigned int)usedGraphicCount;
- (void)setBackgroundGraphics:(id)a0;
- (id)backgroundGraphicAtIndex:(unsigned int)a0;

@end
