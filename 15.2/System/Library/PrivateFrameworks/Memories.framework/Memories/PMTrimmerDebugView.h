@class PHAsset, UILabel;
@protocol DebugDataSourceProtocol;

@interface PMTrimmerDebugView : PMPassthroughView

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) int duration;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) id<DebugDataSourceProtocol> debugDataSource;

+ (id)createViewAndAddToParentView:(id)a0;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_resetRangeModelLayers;
- (id)colorWithPatternColors:(id)a0 baseColor:(id)a1;
- (void)_addRangeLayerWithColor:(id)a0 x:(double)a1 y:(double)a2 width:(double)a3 height:(double)a4;
- (void)_addRangeLayerWithColor:(id)a0 x:(double)a1 y:(double)a2 width:(double)a3 markEnds:(BOOL)a4;
- (void)_addAnalysisIndicators;
- (void)addSuggestionsToRanges:(id)a0;
- (void)addClipsToRanges:(id)a0;
- (id)_rangeModelsByType:(id)a0;
- (id)colorForMetadataRange:(id)a0;
- (BOOL)isOverlapWithPreviousRangeForIndex:(unsigned long long)a0 inRangeModels:(id)a1;
- (id)_attributedStringWithColoredLabelsForKeys:(id)a0 withRangeModelsByType:(id)a1;
- (void)_addAutoEditScore:(id)a0 lastLaneOfTypeOffset:(double *)a1;
- (id)baseColorForMetadataRangeTypeKey:(id)a0;
- (id)colorPatternForRatingRange:(id)a0 baseColor:(id)a1;
- (id)colorPatternForCameraMotionRange:(id)a0;
- (id)colorPatternForQualityRange:(id)a0;
- (id)colorPatternForInterestingnessRange:(id)a0;
- (id)colorPatternForFineActionRange:(id)a0;
- (void)reloadRanges;

@end
