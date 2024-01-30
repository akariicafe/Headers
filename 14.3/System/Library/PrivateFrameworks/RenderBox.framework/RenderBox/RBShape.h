@interface RBShape : NSObject {
    struct RBShapeData { int type; unsigned char data[144]; } _data;
    struct InlineHeap<256> { unsigned long long _page_size; struct Page *_pages; char *_sbrk; char *_sbrk_end; unsigned char _buffer[256]; } _heap;
}

@property (readonly, nonatomic) struct RBShapeData { int x0; unsigned char x1[144]; } *shapeData;
@property (nonatomic, getter=isAntialiased) BOOL antialiased;
@property (nonatomic) BOOL EOFill;

- (void)setEmpty;
- (void)setEllipseInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerSize:(struct CGSize { double x0; double x1; })a1 cornerStyle:(int)a2;
- (void)setStrokedPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 lineWidth:(double)a2 lineCap:(int)a3 lineJoin:(int)a4 miterLimit:(double)a5 dashPhase:(double)a6 dashPattern:(const double *)a7 dashCount:(long long)a8;
- (void)setStrokedPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 lineWidth:(double)a2 lineCap:(int)a3 lineJoin:(int)a4 miterLimit:(double)a5;
- (void)setStrokedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 cornerStyle:(int)a2 lineWidth:(double)a3;
- (void)setStrokedCircleAtPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 lineWidth:(double)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (void)setPath:(struct CGPath { } *)a0;
- (void)setInfinite;
- (void)setCircleAtPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (void)setPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 cornerStyle:(int)a2;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadii:(struct { double x0; double x1; double x2; double x3; })a1 cornerStyle:(int)a2;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadii:(struct { double x0; double x1; double x2; double x3; })a1 cornerStyle:(int)a2 lineWidth:(double)a3;
- (void)setGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(unsigned long long)a2 font:(struct CGFont { } *)a3 renderingStyle:(unsigned int)a4;
- (void)setStrokedGlyph:(unsigned short)a0 font:(struct CGFont { } *)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 lineWidth:(double)a3 lineCap:(int)a4 lineJoin:(int)a5 miterLimit:(double)a6 dashPhase:(double)a7 dashPattern:(const double *)a8 dashCount:(long long)a9;
- (void)setStroke:(id)a0;

@end
