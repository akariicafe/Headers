@class UIColor, NSArray, NSDictionary, CALayer, CATextLayer;

@interface HKPopulationNormsAgeBucketBarView : UIView

@property (nonatomic) double referenceMinY;
@property (nonatomic) double referenceMaxY;
@property (retain, nonatomic) NSArray *ascendingThresholds;
@property (retain, nonatomic) CALayer *underlyingBarLayer;
@property (retain, nonatomic) CALayer *segmentsLayer;
@property (nonatomic) double visibleBarMinY;
@property (nonatomic) double visibleBarMaxY;
@property (retain, nonatomic) CALayer *highlightedLayer;
@property (retain, nonatomic) CATextLayer *highlightedTopLabelLayer;
@property (retain, nonatomic) CATextLayer *highlightedBottomLabelLayer;
@property (retain, nonatomic) NSDictionary *highlightedTextLayerAttributes;
@property (nonatomic) unsigned long long highlightedSegmentIndex;
@property (nonatomic) double highlightedSectionMinY;
@property (nonatomic) double highlightedSectionMaxY;
@property (retain, nonatomic) UIColor *highlightColor;

- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (BOOL)_bottomSegmentIsHighlighted;
- (BOOL)_topSegmentIsHighlighted;
- (id)initWithReferenceMinY:(double)a0 referenceMaxY:(double)a1 highlightColor:(id)a2;
- (void)updateWithAscendingThresholds:(id)a0 currentHighlightIndex:(unsigned long long)a1;

@end
