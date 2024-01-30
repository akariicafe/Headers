@class AKPageController, AKAnnotation, CALayer;

@interface AKAdornmentLayer : CALayer

@property (retain) AKAnnotation *annotation;
@property (weak) AKPageController *pageController;
@property BOOL isObservingAnnotation;
@property (retain) CALayer *handleContainerLayer;
@property double currentScaleFactor;
@property BOOL isObservingEventHandling;

+ (Class)_adornmentClassForAnnotation:(id)a0;
+ (id)newAdornmentLayerForAnnotation:(id)a0 withPageController:(id)a1;

- (void)_stopObservingAnnotation;
- (id)actionForKey:(id)a0;
- (void)teardown;
- (void)_startObservingAnnotation;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)updateAdornmentElements;
- (void)updateSublayersWithScale:(double)a0;
- (unsigned long long)currentlyDraggedArea;
- (BOOL)needsUpdateWhenDraggingStartsOrEnds;
- (id)_initWithAnnotation:(id)a0 andPageController:(id)a1;
- (void)updatePixelAlignment;
- (void)_startObservingAnnotationEventHandlers;
- (void)_stopObservingAnnotationEventHandlers;
- (void)_addHandleSublayerAtPoint:(struct CGPoint { double x0; double x1; })a0 withStyle:(unsigned long long)a1;

@end
