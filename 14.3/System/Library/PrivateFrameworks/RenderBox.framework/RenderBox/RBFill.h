@interface RBFill : NSObject {
    struct RBFillData { int type; unsigned char data[144]; } _data;
    struct InlineHeap<64> { unsigned long long _page_size; struct Page *_pages; char *_sbrk; char *_sbrk_end; unsigned char _buffer[64]; } _heap;
}

@property (readonly, nonatomic) struct RBFillData { int x0; unsigned char x1[144]; } *fillData;

- (void)set9PartRBImage:(struct { int x0; void *x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 destinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 capInsets:(struct { double x0; double x1; double x2; double x3; })a3 repeat:(BOOL)a4 interpolation:(int)a5 tintColor:(struct { float x0; float x1; float x2; float x3; })a6 flags:(unsigned int)a7;
- (void)setTiledRBImage:(struct { int x0; void *x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 interpolation:(int)a3 tintColor:(struct { float x0; float x1; float x2; float x3; })a4 flags:(unsigned int)a5;
- (void)setRBImage:(struct { int x0; void *x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 interpolation:(int)a2 tintColor:(struct { float x0; float x1; float x2; float x3; })a3 flags:(unsigned int)a4;
- (void)setConicGradientCenter:(struct CGPoint { double x0; double x1; })a0 angle:(double)a1 stopCount:(long long)a2 colors:(const struct { float x0; float x1; float x2; float x3; } *)a3 locations:(const double *)a4 flags:(unsigned int)a5;
- (void)setRadialGradientCenter:(struct CGPoint { double x0; double x1; })a0 startRadius:(double)a1 endRadius:(double)a2 stopCount:(long long)a3 colors:(const struct { float x0; float x1; float x2; float x3; } *)a4 locations:(const double *)a5 flags:(unsigned int)a6;
- (void)setAxialGradientStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 stopCount:(long long)a2 colors:(const struct { float x0; float x1; float x2; float x3; } *)a3 locations:(const double *)a4 flags:(unsigned int)a5;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setColor:(struct { float x0; float x1; float x2; float x3; })a0;
- (id).cxx_construct;
- (void)invalidateContents;
- (void)setImage:(struct CGImage { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 interpolation:(int)a2 tintColor:(struct { float x0; float x1; float x2; float x3; })a3 flags:(unsigned int)a4;
- (void)setTiledImage:(struct CGImage { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 interpolation:(int)a3 tintColor:(struct { float x0; float x1; float x2; float x3; })a4 flags:(unsigned int)a5;
- (void)set9PartImage:(struct CGImage { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 destinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 capInsets:(struct { double x0; double x1; double x2; double x3; })a3 repeat:(BOOL)a4 interpolation:(int)a5 tintColor:(struct { float x0; float x1; float x2; float x3; })a6 flags:(unsigned int)a7;

@end
