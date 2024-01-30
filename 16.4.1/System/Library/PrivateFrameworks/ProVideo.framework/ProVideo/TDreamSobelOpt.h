@interface TDreamSobelOpt : TDreamProgramWrapper {
    float offset[2];
    int offsetUniform;
}

- (void)setOffset:(const float *)a0;
- (id)init;
- (void)setUniforms;

@end
