@class AKPageController, AKAnnotation, CALayer;

@interface AKAnnotationLayer : CALayer

@property (retain) AKAnnotation *annotation;
@property (weak) AKPageController *pageController;
@property (retain, nonatomic) CALayer *fastPathLayer;
@property BOOL isObservingAnnotation;
@property BOOL wasLastDrawingClipped;
@property BOOL lastRedrawWasForDrawingBounds;
@property BOOL shouldRecalculateLoupeImage;

+ (id)newAnnotationLayerForAnnotation:(id)a0 withPageController:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)actionForKey:(id)a0;
- (void)_stopObservingAnnotation;
- (void)updateContents;
- (void)_startObservingAnnotation;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_initWithAnnotation:(id)a0 andPageController:(id)a1;
- (void)_updateAnnotationLayerWithLoupeFastPath:(BOOL)a0;
- (void)_addDebugVisuals;
- (void)_removeDebugVisuals;
- (void)updatePixelAlignment;

@end
