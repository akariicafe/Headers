@class MDLTexture;

@interface MDLNormalMapTexture : MDLTexture {
    float _smoothness;
    float _contrast;
    MDLTexture *_sourceTexture;
}

- (void).cxx_destruct;
- (id)generateDataAtLevel:(long long)a0 selector:(SEL)a1;
- (id)initByGeneratingNormalMapWithTexture:(id)a0 name:(id)a1 smoothness:(float)a2 contrast:(float)a3;

@end
