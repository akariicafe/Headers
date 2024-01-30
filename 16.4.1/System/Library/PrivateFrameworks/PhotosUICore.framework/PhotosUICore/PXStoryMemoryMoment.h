@class NSIndexSet;
@protocol PXDisplayAssetFetchResult, PXStoryMemoryMomentClusteringDistanceCalculator, PXDisplayAsset;

@interface PXStoryMemoryMoment : NSObject {
    id<PXDisplayAssetFetchResult> _displayAssets;
    NSIndexSet *_indices;
    BOOL _diagnosticsCalculated;
    double _totalWeightedClusteringDistance;
    double _locationClusteringDistance;
    double _timeClusteringDistance;
    double _faceClusteringDistance;
}

@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssets;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id<PXDisplayAsset> firstAsset;
@property (readonly, nonatomic) id<PXDisplayAsset> lastAsset;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } assetIndexRange;
@property (readonly, nonatomic) unsigned long long firstGlobalIndex;
@property (readonly, nonatomic) unsigned long long lastGlobalIndex;
@property (readonly, nonatomic) id<PXStoryMemoryMomentClusteringDistanceCalculator> diagnosticDistanceCalculator;
@property (readonly, nonatomic) double totalWeightedClusteringDistance;
@property (readonly, nonatomic) double locationClusteringDistance;
@property (readonly, nonatomic) double timeClusteringDistance;
@property (readonly, nonatomic) double faceClusteringDistance;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateAssetsUsingBlock:(id /* block */)a0;
- (id)assetAtIndex:(unsigned long long)a0;
- (id)initWithDisplayAssets:(id)a0 indexSet:(id)a1;
- (void)_calculateDiagnostics;
- (id)initWithDisplayAssets:(id)a0 indexSet:(id)a1 diagnosticDistanceCalculator:(id)a2;
- (id)initWithDisplayAssets:(id)a0 indicesArray:(id)a1 diagnosticDistanceCalculator:(id)a2;

@end
