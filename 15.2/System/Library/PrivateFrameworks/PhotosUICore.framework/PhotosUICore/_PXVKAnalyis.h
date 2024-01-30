@protocol PXVKImageAnalysis, PXDisplayAsset;

@interface _PXVKAnalyis : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) id<PXVKImageAnalysis> analysis;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 analysis:(id)a1;

@end
