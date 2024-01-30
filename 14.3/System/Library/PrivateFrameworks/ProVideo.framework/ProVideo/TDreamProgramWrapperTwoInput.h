@interface TDreamProgramWrapperTwoInput : TDreamProgramWrapper {
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
}

- (void)initializeAttributes;
- (id)initWithFragmentShaderFromString:(id)a0;
- (void)renderTo:(unsigned int)a0 from:(unsigned int)a1 andFrom:(unsigned int)a2;
- (id)initWithVertexShaderFromString:(id)a0 fragmentShaderFromString:(id)a1;

@end
