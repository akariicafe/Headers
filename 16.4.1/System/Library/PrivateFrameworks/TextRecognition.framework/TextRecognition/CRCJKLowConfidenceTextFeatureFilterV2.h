@interface CRCJKLowConfidenceTextFeatureFilterV2 : NSObject <CRSingleTextFeatureFiltering>

@property (readonly) double lowConfidenceThreshold1CharLines;
@property (readonly) double lowConfidenceThreshold2PlusCharLines;
@property (readonly) double lowConfidenceThresholdIsolated1CharLines;

- (id)initWithLowConfidenceThresholdFor1CharLines:(double)a0 for2PlusCharLines:(double)a1 forIsolated1CharLines:(double)a2;
- (BOOL)shouldFilterFeature:(id)a0;
- (BOOL)shouldFilterFeatureBasedOnGeometry:(id)a0;

@end
