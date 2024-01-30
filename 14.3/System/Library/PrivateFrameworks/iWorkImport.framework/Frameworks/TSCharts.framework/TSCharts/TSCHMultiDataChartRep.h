@class NSMutableDictionary, TSCHMultiDataChartRepElementIndex, NSSet, CALayer;

@interface TSCHMultiDataChartRep : TSCHChartRep {
    CALayer *mRootLayer;
    CALayer *mElementsContainerLayer;
    BOOL mRenderingBackgroundLayer;
    BOOL mRenderingElementShapeLayer;
    BOOL mRenderingElementLabelsLayer;
    BOOL mRenderingDataSetNameLayer;
    BOOL mRenderingReferenceLineLayer;
    BOOL mAnimatedLayersNeedUpdate;
    BOOL mShouldAnimateLabelsQuickly;
    BOOL mIsAnimatingForBuilds;
    unsigned long long mElementLayersMultiDataSetIndex;
    int mGridDirection;
    NSMutableDictionary *mIndexedElements;
    TSCHMultiDataChartRepElementIndex *mCurrentRepElementIndex;
    CALayer *mDataSetNameLayer;
    CALayer *mReferenceLinesContainerLayer;
    NSSet *mReferenceLinesToRender;
    NSSet *mReferenceLineLabelsSearchSelectionsToRender;
    NSMutableDictionary *mLayerIdToLayerMap;
    NSMutableDictionary *mPreviousOutsideBodyBounds;
}

@property (readonly, nonatomic) BOOL shouldDisableMultiDataControls;

- (void).cxx_destruct;
- (void)dealloc;
- (void)willBeginZooming;
- (void)didEndZooming;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)isHorizontalChart;
- (BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)p_chartModel;
- (id)p_elementLayers;
- (BOOL)needsAnimationForAnimationInfo:(id)a0;
- (id)layerIdToLayerMap;
- (id)previousOutsideBodyBounds;
- (id)imageFromFill:(id)a0 forResolutionWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toRepElementTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 skipIntegral:(BOOL)a3 returningFillFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (BOOL)shouldUseLegendLayerForLayerBasedRep;

@end
