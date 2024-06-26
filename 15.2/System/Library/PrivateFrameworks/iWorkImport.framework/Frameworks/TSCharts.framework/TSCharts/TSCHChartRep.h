@class TSCHLegendRenderer, NSString, NSArray, TSCHChartDrawableLayout, CALayer, TSCHChartLayout, TSCHSearchSelection, TSCHSelectionPath, NSMutableArray, TSCHLegendMoveKnob, TSCHChartDrawableInfo, NSIndexSet;

@interface TSCHChartRep : TSWPTextHostRep <TSCHSupportsRendering, CALayerDelegate>

@property (nonatomic, readonly) long long knobsDisplayMode;
@property (nonatomic) int renderPassChunkPhase;
@property (nonatomic) struct CGPoint { double x; double y; } lastSubselectionLayerRelativeReferencePosition;
@property (retain, nonatomic) CALayer *downloadIndicatorLayer;
@property (retain, nonatomic) NSMutableArray *renderersWaitingForDownload;
@property (retain, nonatomic) NSArray *renderers;
@property (nonatomic) BOOL editorIsEditingInfo;
@property (nonatomic) BOOL buildingChunks;
@property (nonatomic) int chunkPhase;
@property (nonatomic) long long currentChunk;
@property (nonatomic) BOOL buildingFinalBackground;
@property (nonatomic) BOOL buildingFinalElements;
@property (nonatomic) BOOL inZoom;
@property (nonatomic) unsigned long long inDynamicStandinOperation;
@property (nonatomic) unsigned long long inDynamicStandinLayoutOperation;
@property (nonatomic) BOOL isKPFExportForMultiData;
@property (nonatomic) int textureByGlyphStyle;
@property (nonatomic) unsigned long long textureDeliveryStyle;
@property (nonatomic) unsigned long long textureStage;
@property (retain, nonatomic) TSCHLegendMoveKnob *dynamicLegendKnob;
@property (nonatomic) BOOL forceSeparateLegendLayer;
@property (readonly, nonatomic) TSCHLegendRenderer *legendRenderer;
@property (readonly, nonatomic) BOOL frameInUnscaledCanvasNeedsPaddingForShadows;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } geometryFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } outerShadowFrame;
@property (readonly, nonatomic) TSCHChartDrawableInfo *chartInfo;
@property (readonly, nonatomic) TSCHChartDrawableLayout *drawableLayout;
@property (readonly, nonatomic) TSCHChartLayout *chartLayout;
@property (readonly, nonatomic) unsigned long long chartDeliveryStyle;
@property (readonly, nonatomic) TSCHSearchSelection *selection;
@property (readonly, nonatomic) BOOL forceRenderBlankBackground;
@property (readonly, nonatomic) TSCHSelectionPath *activeTextEditingPath;
@property (readonly, nonatomic) BOOL drawingSearchReference;
@property (readonly, nonatomic) NSString *animationFilter;
@property (readonly, nonatomic) double viewScale;
@property (readonly, nonatomic) double contentsScale;
@property (readonly, nonatomic) BOOL is2DRepFor3DChartRep;
@property (readonly, nonatomic) BOOL isCorrectRepClassForInfo;
@property (readonly, nonatomic) BOOL renderElements;
@property (readonly, nonatomic) BOOL renderElementsWithoutShadows;
@property (readonly, nonatomic) BOOL renderElementsShadowOnly;
@property (readonly, nonatomic) BOOL renderGrid;
@property (readonly, nonatomic) BOOL renderLabels;
@property (readonly, nonatomic) NSIndexSet *renderSeriesIndexSet;
@property (readonly, nonatomic) BOOL chartRepGoingAway;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)geometry;
- (void).cxx_destruct;
- (BOOL)shadowsEnabled;
- (void)dealloc;
- (void)willBeginZooming;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertUnscaledToBoundsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvas;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectForEditMenu;
- (void)didEndZooming;
- (BOOL)canDrawInParallel;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)updateFromLayout;
- (BOOL)isDrawingIntoPDF;
- (id)textureForDescription:(id)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1 is2DRepFor3DChartRep:(BOOL)a2;
- (void)renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)renderGroupIndexSetForSeriesIndex:(unsigned long long)a0;
- (BOOL)requireSeparateLabelLayer;
- (void)p_checkFillPropertiesForDataListeningWithChangedProperties:(id)a0;
- (BOOL)buildShouldUseRenderer:(id)a0;
- (BOOL)shouldUseRenderer:(id)a0;
- (void)p_listenForDataChangesIfAppropriateForFill:(id)a0 forProperty:(int)a1;
- (BOOL)shouldUseChartAreaRectForEditMenuTargetRectMinY;
- (BOOL)messageIsVisible;
- (void)dismissMessageOverlayNowWithAnimation:(BOOL)a0;
- (void)p_positionMessageView;
- (void)p_invalidateMessageOverlay;
- (void)p_removeOrShowAndPositionMessageOverlay;
- (BOOL)planeIsVisible:(int)a0;
- (void)p_addChildTexturesToTextureSet:(id)a0 forDescription:(id)a1 stage:(long long)a2 finalTexture:(BOOL)a3;
- (id)p_textureForDescription:(id)a0;
- (void)clearRenderers;
- (void)renderChunkInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureSet:(id)a1 description:(id)a2;
- (id)renderSeriesIndexSetForFinalElements:(BOOL)a0;
- (id)renderSeriesIndexSetForFinalElements:(BOOL)a0 currentChunk:(long long)a1;
- (id)renderGroupIndexSetForSeriesIndex:(unsigned long long)a0 finalElements:(BOOL)a1;
- (id)renderGroupIndexSetForSeriesIndex:(unsigned long long)a0 finalElements:(BOOL)a1 currentChunk:(long long)a2;
- (int)planeState:(int)a0 finalElements:(BOOL)a1 chunkStage:(long long)a2;
- (int)p_backgroundLikePlaneStateForEffectiveStage:(long long)a0;
- (BOOL)p_hasBackgroundLayerForPieChart;
- (BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)a0;
- (BOOL)renderReferenceLines;
- (BOOL)p_hasBackgroundFill;
- (struct CGPoint { double x0; double x1; })scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
- (id)dataForUpdateUploadIndicator;
- (void)p_deleteMessageView;
- (BOOL)p_chartShouldDisplayMessage;
- (void)p_forceDismissTransientMessage;
- (void)p_messageAnimationDidStop:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)displayMessage:(id)a0 zPosition:(double)a1 style:(int)a2;
- (void)p_topBarsShowedUp:(id)a0;
- (void)updateMessageOverlayNow;
- (void)editor:(id)a0 isSelectingInfos:(id)a1;
- (void)editor:(id)a0 isDeselectingInfos:(id)a1;
- (int)planeState:(int)a0 finalElements:(BOOL)a1;
- (BOOL)p_legendHitByLayoutPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)p_textImageForPath:(const struct CGPath { } *)a0 renderer:(id)a1 selection:(id)a2 shouldPulsate:(BOOL)a3;
- (double)captionBottomDistanceToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)referenceLinesToRender;
- (id)referenceLineLabelsSearchSelectionsToRender;

@end
