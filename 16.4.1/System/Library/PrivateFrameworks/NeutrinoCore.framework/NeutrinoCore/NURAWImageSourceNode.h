@class NSCache;

@interface NURAWImageSourceNode : NUCGImageSourceNode {
    NSCache *_propertiesByOptionCache;
}

+ (int)_filterTypeForClassName:(id)a0;
+ (id)_firstFilterOfType:(int)a0 inArray:(id)a1;

- (BOOL)load:(out id *)a0;
- (void).cxx_destruct;
- (BOOL)canPropagateOriginalAuxiliaryData;
- (id)initWithURL:(id)a0 UTI:(id)a1 identifier:(id)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)_neutralColorVectorForSettings:(id)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 identifier:(id)a1;
- (id)sourceOptionsForSettings:(id)a0 error:(out id *)a1;
- (id)_RAWCameraSpaceProperties:(id)a0 RAWProperties:(id)a1;
- (id)_RAWToneCurveProperties:(id)a0;
- (void)_addDefaultFinalizedSourceOptions:(id)a0;
- (id)_appendFilter:(id)a0 filterType:(int)a1 settings:(id)a2 source:(id)a3;
- (id)_cachedRawImagePropertiesForOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageGeometryWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)_neutralColorArrayForSettings:(id)a0;
- (void)_processRAWProperties:(id)a0;
- (id)_rawFiltersWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_rawMethodVersionForSettings:(id)a0 error:(out id *)a1;
- (id)_sourceOptionsForSettings:(id)a0 rawMethodVersion:(id)a1 sushiLevel:(id)a2;
- (id)initWithURL:(id)a0 UTI:(id)a1 settings:(id)a2;
- (id)preparedNodeWithSourceContainer:(id)a0 pipelineState:(id)a1 pipelineSettings:(id)a2 sourceSettings:(id)a3 error:(out id *)a4;
- (BOOL)shouldGenerateMeteorGainMap;

@end
