@class NSMutableArray;

@interface SPAssetCacheAssets : NSObject

@property (retain, nonatomic) NSMutableArray *assets;

+ (id)toProto:(id)a0;
+ (id)fromProto:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)addAsset:(id)a0;

@end
