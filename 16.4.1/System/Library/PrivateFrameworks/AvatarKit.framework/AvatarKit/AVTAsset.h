@class NSString, NSDictionary;

@interface AVTAsset : NSObject {
    NSString *_resourcePath;
    unsigned char _resourceType;
    NSDictionary *_morphVariantDependencies;
    NSDictionary *_imageVariantDependencies;
    NSDictionary *_materialVariantDependencies;
    NSDictionary *_highlights;
    unsigned long long _refCount;
    id _cachedResource;
    BOOL _forceHighTessellation;
    NSDictionary *_perAssetMain;
}

@property (readonly) long long componentType;
@property (readonly) NSString *uid;
@property (readonly) NSString *ambientOcclusion;
@property (readonly) NSDictionary *specializationSettings;
@property (readonly) NSDictionary *layers;
@property (readonly) BOOL is2DAsset;
@property (readonly) BOOL is3DAsset;
@property (readonly) unsigned long long editableColorCount;
@property (readonly) struct { BOOL mirroringEnabled; struct { void /* unknown type, empty encoding */ columns[3]; } transform; } uvRemappingInfo;

- (id)description;
- (void).cxx_destruct;
- (id)assetImageForAsset:(id)a0;
- (void)decrUseCount;
- (void)enumerateVariantDependenciesOfKind:(unsigned long long)a0 block:(id /* block */)a1;
- (void)freeCache;
- (void)incrUseCount;
- (id)initWithType:(long long)a0 path:(id)a1 packID:(id)a2;
- (id)instantiateResource;
- (id)resourceByCachingIfNeeded:(BOOL)a0;

@end
