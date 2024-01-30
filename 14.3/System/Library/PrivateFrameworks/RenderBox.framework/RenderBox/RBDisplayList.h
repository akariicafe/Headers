@class NSString;

@interface RBDisplayList : NSObject {
    struct DisplayList { struct Heap { unsigned long long _page_size; struct Page *_pages; char *_sbrk; char *_sbrk_end; } _heap; struct Layer *_layer; struct State *_state; struct Pool<RB::DisplayList::State> { struct Item *_freelist; } _state_pool; struct Pool<RB::DisplayList::Layer> { struct Item *_freelist; } _layer_pool; struct Clip *_all_clips; struct Style *_all_styles; BOOL _empty; unsigned char _required_depth; } _list;
    struct vector<std::__1::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1, unsigned long> { unsigned char _p[16]; struct pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *> *_p; unsigned long long _size; unsigned long long _capacity; } _contexts;
    unsigned long long _active_contexts;
}

@property (readonly, copy, nonatomic) NSString *xmlDescription;
@property (readonly, nonatomic) const struct DisplayList { struct Heap { unsigned long long x0; struct Page *x1; char *x2; char *x3; } x0; struct Layer *x1; struct State *x2; struct Pool<RB::DisplayList::State> { struct Item *x0; } x3; struct Pool<RB::DisplayList::Layer> { struct Item *x0; } x4; struct Clip *x5; struct Style *x6; BOOL x7; unsigned char x8; } *rb_displayList;
@property (nonatomic) BOOL linearColors;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clipBoundingBox;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } CTM;
@property (nonatomic) int defaultColorSpace;

+ (id)displayListForCGContext:(struct CGContext { } *)a0 alpha:(float *)a1 blendMode:(int *)a2;

- (void)clearCaches;
- (void)clear;
- (void)endCGContext;
- (struct CGContext { } *)beginCGContextWithAlpha:(float)a0;
- (void)addGrayscaleFilterWithAmount:(float)a0;
- (void)addColorMonochromeFilterWithAmount:(float)a0 color:(struct { float x0; float x1; float x2; float x3; })a1 bias:(float)a2;
- (void)addColorInvertFilter;
- (void)addLuminanceToAlphaFilter;
- (void)addContrastFilterWithAmount:(float)a0;
- (void)addBrightnessFilterWithAmount:(float)a0;
- (void)addSaturationFilterWithAmount:(float)a0;
- (void)addHueRotationFilterWithAngle:(double)a0;
- (void)addColorMultiplyFilterWithColor:(struct { float x0; float x1; float x2; float x3; })a0;
- (void)addColorMatrixFilterWithArray:(float[20])a0;
- (void)addProjectionStyleWithArray:(float[9])a0;
- (void)addShadowStyleWithRadius:(double)a0 offset:(struct CGSize { double x0; double x1; })a1 color:(struct { float x0; float x1; float x2; float x3; })a2 mode:(int)a3;
- (void)addBlurFilterWithRadius:(double)a0 opaque:(BOOL)a1;
- (void)drawDisplayList:(id)a0;
- (void)drawLayerWithAlpha:(float)a0 blendMode:(int)a1;
- (void)clipLayerWithAlpha:(float)a0 mode:(int)a1;
- (void)beginLayerWithFlags:(unsigned int)a0;
- (void)drawShape:(id)a0 fill:(id)a1 alpha:(float)a2 blendMode:(int)a3;
- (void)concat:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)clipShape:(id)a0 mode:(int)a1;
- (void)translateByX:(double)a0 Y:(double)a1;
- (id)init;
- (void)restore;
- (void).cxx_destruct;
- (void)save;
- (void)rotateBy:(double)a0;
- (id).cxx_construct;
- (void)beginLayer;
- (void)beginLayerWithColorSpace:(int)a0 flags:(unsigned int)a1;
- (struct CGContext { } *)beginCGContextWithAlpha:(float)a0 flags:(unsigned int)a1;
- (void)addBlurFilterWithRadius:(double)a0 colorSpace:(int)a1 flags:(unsigned int)a2;
- (void)addColorMatrixFilterWithArray:(float[20])a0 colorSpace:(int)a1;
- (void)addColorMultiplyFilterWithColor:(struct { float x0; float x1; float x2; float x3; })a0 colorSpace:(int)a1;
- (void)addHueRotationFilterWithAngle:(double)a0 colorSpace:(int)a1;
- (void)addSaturationFilterWithAmount:(float)a0 colorSpace:(int)a1;
- (void)addBrightnessFilterWithAmount:(float)a0 colorSpace:(int)a1;
- (void)addContrastFilterWithAmount:(float)a0 colorSpace:(int)a1;
- (void)addLuminanceToAlphaFilterWithColorSpace:(int)a0;
- (void)addColorInvertFilterWithColorSpace:(int)a0;
- (void)addGrayscaleFilterWithAmount:(float)a0 colorSpace:(int)a1;
- (void)addColorMonochromeFilterWithAmount:(float)a0 color:(struct { float x0; float x1; float x2; float x3; })a1 bias:(float)a2 colorSpace:(int)a3;
- (void)scaleByX:(double)a0 Y:(double)a1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alpha:(float)a1 blendMode:(int)a2 flags:(unsigned int)a3 operation:(id /* block */)a4;
- (void)addBlurFilterWithRadius:(double)a0;

@end
