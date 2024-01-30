@class NSMapTable;

@interface AVTAssetResourceCache : NSObject {
    NSMapTable *_resources;
}

@property (nonatomic) unsigned long long policy;

- (void).cxx_destruct;
- (id)init;
- (void)retainAsset:(id)a0;
- (id)resourceForAsset:(id)a0;
- (void)releaseAsset:(id)a0;

@end
