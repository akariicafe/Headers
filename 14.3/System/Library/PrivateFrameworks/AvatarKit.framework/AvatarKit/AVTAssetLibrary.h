@class NSMutableArray, NSMutableDictionary;

@interface AVTAssetLibrary : NSObject {
    NSMutableArray *_assets[34];
    NSMutableDictionary *_assetsByName[34];
}

+ (id)sharedAssetLibrary;

- (void)reload;
- (void).cxx_destruct;
- (id)assetWithType:(long long)a0 identifier:(id)a1;

@end
