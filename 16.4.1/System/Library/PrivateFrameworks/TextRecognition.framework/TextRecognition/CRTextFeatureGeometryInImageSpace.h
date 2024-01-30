@class CRImageSpaceQuad, CRTextFeature;

@interface CRTextFeatureGeometryInImageSpace : NSObject

@property (retain) CRTextFeature *textFeature;
@property (retain) CRImageSpaceQuad *quad;
@property double diagonalDistance;
@property double distanceToClosestFeature;
@property (readonly) BOOL isIsolated;

- (void).cxx_destruct;
- (double)_distanceFromQuad1:(id)a0 toQuad2:(id)a1;
- (void)calculateMinimumDistanceFromOtherFeatureGeometries:(id)a0;
- (BOOL)shouldBeConsiderForFiltering;
- (BOOL)shouldBeConsideredForNearestDistanceCalculation;

@end
