@class NSArray;

@interface PXGCombinedShaderSource : PXGShaderSource {
    NSArray *_combinedShaderSources;
    NSArray *_combinedUniforms;
}

@property (readonly, nonatomic) BOOL isEmpty;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEffects:(id)a0;
- (id)aliasedUniformsForEffects:(id)a0;
- (BOOL)isValidForEffects:(id)a0;

@end
