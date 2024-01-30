@class UIGraphicsRendererFormat, _UIReusePool;

@interface UIGraphicsRenderer : NSObject {
    _UIReusePool *_reusePool;
}

@property (readonly, nonatomic) UIGraphicsRendererFormat *format;
@property (readonly, nonatomic) BOOL allowsImageOutput;

+ (struct CGContext { } *)contextWithFormat:(id)a0;
+ (void)prepareCGContext:(struct CGContext { } *)a0 withRendererContext:(id)a1;
+ (BOOL)_supportsContextReuse;
+ (struct CGContext { } *)_contextWithFormat:(id)a0 renderer:(id)a1;
+ (void)_destroyCGContext:(struct CGContext { } *)a0 withRenderer:(id)a1;
+ (Class)rendererContextClass;

- (BOOL)runDrawingActions:(id /* block */)a0 completionActions:(id /* block */)a1 format:(id)a2 error:(id *)a3;
- (void)_prepareContextForReuse:(struct CGContext { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)popContext:(id)a0;
- (BOOL)runDrawingActions:(id /* block */)a0 completionActions:(id /* block */)a1 error:(id *)a2;
- (id)initWithFormat:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGContext { } *)_dequeueContextForReuse;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(id)a1;
- (void)_configureReuseState;
- (void)pushContext:(id)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_enqueueContextForReuse:(struct CGContext { } *)a0;

@end
