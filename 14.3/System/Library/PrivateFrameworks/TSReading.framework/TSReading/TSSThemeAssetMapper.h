@class TSSTheme, TSUCustomCallBackDictionary;

@interface TSSThemeAssetMapper : NSObject {
    TSUCustomCallBackDictionary *mAssetMap;
}

@property (readonly, nonatomic) TSSTheme *fromTheme;
@property (readonly, nonatomic) TSSTheme *toTheme;

- (id)init;
- (void)dealloc;
- (id)mapStyle:(id)a0;
- (BOOL)p_hasCachedMappingsForPresetsOfKind:(id)a0;
- (id)mapPresetsWithKindFromPreset:(id)a0;
- (void)cacheAssetMappings:(id)a0;
- (void)cacheMappingFromAsset:(id)a0 toAsset:(id)a1;
- (id)initWithFromTheme:(id)a0 toTheme:(id)a1;
- (id)mappedAssetForAsset:(id)a0;
- (void)clearMappingCache;

@end
