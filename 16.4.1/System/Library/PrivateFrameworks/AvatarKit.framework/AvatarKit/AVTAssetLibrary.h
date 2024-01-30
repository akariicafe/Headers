@class NSMutableArray, NSMutableDictionary;

@interface AVTAssetLibrary : NSObject {
    NSMutableArray *_assets[37];
    NSMutableDictionary *_assetsByName[37];
}

+ (id)sharedAssetLibrary;

- (void)reload;
- (void).cxx_destruct;
- (id)assetWithType:(long long)a0 identifier:(id)a1;

@end
