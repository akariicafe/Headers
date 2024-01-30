@class NSString, NSDictionary;
@protocol PXDisplayAssetFetchResult;

@interface PXStoryMemoryMomentConcreteClusteringDistanceCalculator : NSObject <PXStoryMemoryMomentClusteringDistanceCalculator> {
    id<PXDisplayAssetFetchResult> _assets;
    NSDictionary *_weights;
    NSDictionary *_locationsByAssetUUID;
    NSDictionary *_faceprintsByAssetUUID;
}

@property (readonly, nonatomic) double timeWeight;
@property (readonly, nonatomic) double locationWeight;
@property (readonly, nonatomic) double faceWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
