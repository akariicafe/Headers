@interface ComposerShader : ForwardDmShader {
    BOOL _dolby84;
    BOOL _forLLDovi;
}

+ (id)createShaderWithName:(id)a0 dolby84:(BOOL)a1 forLLDovi:(BOOL)a2;

- (id)getComputePipeLineStateForDevice:(id)a0 Library:(id)a1;
- (id)initShaderWithName:(id)a0 dolby84:(BOOL)a1 forLLDovi:(BOOL)a2;

@end
