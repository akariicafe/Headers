@protocol PXGDisplayAssetAdjustment, PXGDisplayAssetRequestObserver, PXDisplayAsset;

@interface _PXGMediaRequest : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) id<PXGDisplayAssetRequestObserver> observer;
@property (readonly, nonatomic) unsigned long long postProcessOptions;
@property (retain, nonatomic) id<PXGDisplayAssetAdjustment> adjustment;
@property (nonatomic) struct CGSize { double width; double height; } bestReceivedSize;
@property (nonatomic) BOOL gotAnyResult;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 observer:(id)a1 postProcessOptions:(unsigned long long)a2;

@end
