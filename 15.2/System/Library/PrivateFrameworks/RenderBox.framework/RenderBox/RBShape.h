@interface RBShape : NSObject {
    struct RBShapeData { int type; unsigned char data[88]; } _data;
    struct InlineHeap<256> { unsigned long long _page_size; struct Page *_pages; char *_sbrk; char *_sbrk_end; struct ObjectTable *_objects; unsigned char _buffer[256]; } _heap;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (nonatomic, getter=isAntialiased) BOOL antialiased;
@property (nonatomic) BOOL EOFill;

- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadii:(struct { double x0; double x1; double x2; double x3; })a1 cornerStyle:(int)a2;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadii:(struct { double x0; double x1; double x2; double x3; })a1 cornerStyle:(int)a2 lineWidth:(double)a3;
- (void)setCircleAtPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (void)setPath:(struct CGPath { } *)a0;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 cornerStyle:(int)a2;
- (void)setStroke:(id)a0;
- (void)setPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerSize:(struct CGSize { double x0; double x1; })a1 cornerStyle:(int)a2;
- (void)setStrokedCircleAtPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 lineWidth:(double)a2;
- (void).cxx_destruct;
- (void)setStrokedPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 lineWidth:(double)a2 lineCap:(int)a3 lineJoin:(int)a4 miterLimit:(double)a5 dashPhase:(double)a6 dashPattern:(const double *)a7 dashCount:(long long)a8;
- (id)init;
- (void)setEmpty;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setInfinite;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 cornerStyle:(int)a2 lineWidth:(double)a3;
- (void)setEllipseInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(unsigned long long)a2 font:(struct CGFont { } *)a3 renderingStyle:(unsigned int)a4;
- (id).cxx_construct;
- (void)setStrokedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)setStrokedPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 lineWidth:(double)a2 lineCap:(int)a3 lineJoin:(int)a4 miterLimit:(double)a5;

@end
