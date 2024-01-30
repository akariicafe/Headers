@class NSMutableDictionary, TSCHMultiDataChartRepElementIndex, NSSet, CALayer;

@interface TSCHMultiDataChartRep : TSCHChartRep {
    CALayer *_rootLayer;
    CALayer *_elementsContainerLayer;
    BOOL _renderingBackgroundLayer;
    BOOL _renderingElementShapeLayer;
    BOOL _renderingElementLabelsLayer;
    BOOL _renderingDataSetNameLayer;
    BOOL _renderingReferenceLineLayer;
    BOOL _animatedLayersNeedUpdate;
    BOOL _shouldAnimateLabelsQuickly;
    BOOL _isAnimatingForBuilds;
    unsigned long long _elementLayersMultiDataSetIndex;
    int _gridDirection;
    NSMutableDictionary *_indexedElements;
    TSCHMultiDataChartRepElementIndex *_currentRepElementIndex;
    CALayer *_dataSetNameLayer;
    CALayer *_referenceLinesContainerLayer;
    NSSet *_referenceLinesToRender;
    NSSet *_referenceLineLabelsSearchSelectionsToRender;
    NSMutableDictionary *_layerIdToLayerMap;
    NSMutableDictionary *_previousOutsideBodyBounds;
}

@property (readonly, nonatomic) BOOL shouldDisableMultiDataControls;

- (void)dealloc;
- (void).cxx_destruct;
- (void)willBeginZooming;
- (void)didEndZooming;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)needsAnimationForAnimationInfo:(id)a0;
- (id)p_elementLayers;
- (BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)imageFromFill:(id)a0 forResolutionWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toRepElementTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 skipIntegral:(BOOL)a3 returningFillFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (void)invalidateAnimationState;
- (BOOL)isHorizontalChart;
- (id)layerIdToLayerMap;
- (id)p_chartModel;
- (id)previousOutsideBodyBounds;
- (BOOL)shouldUseLegendLayerForLayerBasedRep;

@end
