@class NSMapTable;

@interface AVTAssetResourceCache : NSObject {
    NSMapTable *_resources;
}

@property (nonatomic) unsigned long long policy;

- (id)init;
- (void).cxx_destruct;
- (void)retainAsset:(id)a0;
- (void)releaseAsset:(id)a0;
- (id)resourceForAsset:(id)a0;

@end
