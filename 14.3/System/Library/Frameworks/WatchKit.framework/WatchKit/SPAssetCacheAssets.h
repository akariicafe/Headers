@class NSMutableArray;

@interface SPAssetCacheAssets : NSObject

@property (retain, nonatomic) NSMutableArray *assets;

+ (id)toProto:(id)a0;
+ (id)fromProto:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addAsset:(id)a0;

@end
