@class NSArray, AVFragmentedAssetMinderInternal;

@interface AVFragmentedAssetMinder : NSObject {
    AVFragmentedAssetMinderInternal *_fragmentedAssetMinder;
}

@property (nonatomic) double mindingInterval;
@property (readonly, nonatomic) NSArray *assets;

+ (id)fragmentedAssetMinderWithAsset:(id)a0 mindingInterval:(double)a1;

- (id)initWithAsset:(id)a0 mindingInterval:(double)a1;
- (void)_setMindingInterval:(double)a0 removeAllAssets:(BOOL)a1;
- (BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
- (void)removeFragmentedAsset:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addFragmentedAsset:(id)a0;

@end
