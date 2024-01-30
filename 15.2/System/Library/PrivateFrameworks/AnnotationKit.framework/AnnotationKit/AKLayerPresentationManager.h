@class AKPageController, NSMapTable, CAShapeLayer, CALayer, AKPageModelController;

@interface AKLayerPresentationManager : NSObject

@property (weak) AKPageController *pageController;
@property (retain) CALayer *rootLayer;
@property (retain) NSMapTable *annotationsToAnnotationLayers;
@property (retain) NSMapTable *annotationsToAdornmentLayers;
@property (retain) CALayer *cropAnnotationLayer;
@property (retain) CALayer *cropAdornmentLayer;
@property (retain) CAShapeLayer *alignmentGuideXLayer;
@property (retain) CAShapeLayer *alignmentGuideYLayer;
@property (retain) AKPageModelController *pageModelController;
@property BOOL isObservingModel;
@property double currentScaleFactor;
@property (nonatomic) BOOL shouldPixelate;
@property (nonatomic) BOOL adornmentsHidden;
@property (nonatomic) double alignmentGuidePositionX;
@property (nonatomic) double alignmentGuidePositionY;

- (void)teardown;
- (void)setup;
- (id)initWithPageController:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)updateScaleFactor:(double)a0 isLiveUpdate:(BOOL)a1 forceUpdate:(BOOL)a2;
- (void)forceUpdateAnnotationLayer:(id)a0;
- (void)_startObservingModel;
- (void)_stopObservingModel;
- (void)_applyUpdatesWithScale:(double)a0 toLayers:(id)a1 isLiveUpdate:(BOOL)a2 forceUpdate:(BOOL)a3;
- (void)_updateLoupeAnnotationsIntersectingRemovedAnnotation:(id)a0;
- (void)_removeAdornmentLayerForAnnotation:(id)a0;
- (void)_removeLayerForAnnotation:(id)a0;
- (void)_addLayerForAnnotation:(id)a0;
- (void)_addAdornmentLayerForAnnotation:(id)a0;
- (void)_updateLoupeAnnotationsContributedToByAnnotation:(id)a0;
- (double)_hiDPIScaleFactor;
- (void)_setNeedsDisplayOnNewLayer:(id)a0;

@end
