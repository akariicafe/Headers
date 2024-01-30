@class TSCH3DUniformArrayShaderVariables;

@interface TSCH3DLightUniformArrayShaderVariables : NSObject {
    TSCH3DUniformArrayShaderVariables *_variables;
}

- (void).cxx_destruct;
- (unsigned long long)arraySize;
- (void)addUniformsToShaderProgram:(id)a0 size:(unsigned long long)a1;
- (void)initializeArrayVariables;
- (void)initializePrefix:(id)a0;
- (id)variableAtIndex:(unsigned long long)a0 name:(id)a1;

@end
