@class NSArray, AVFragmentedAssetMinderInternal;

@interface AVFragmentedAssetMinder : NSObject {
    AVFragmentedAssetMinderInternal *_fragmentedAssetMinder;
}

@property (nonatomic) double mindingInterval;
@property (readonly, nonatomic) NSArray *assets;

+ (id)fragmentedAssetMinderWithAsset:(id)a0 mindingInterval:(double)a1;

- (void)dealloc;
- (id)init;
- (void)_setMindingInterval:(double)a0 removeAllAssets:(BOOL)a1;
- (BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
- (void)addFragmentedAsset:(id)a0;
- (id)initWithAsset:(id)a0 mindingInterval:(double)a1;
- (void)removeFragmentedAsset:(id)a0;

@end
