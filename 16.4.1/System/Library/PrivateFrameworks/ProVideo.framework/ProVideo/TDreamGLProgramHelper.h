@class NSMutableArray;

@interface TDreamGLProgramHelper : NSObject {
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
}

@property (nonatomic) BOOL initialized;

- (BOOL)link;
- (void)addAttribute:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)use;
- (id)vertexShaderLog;
- (unsigned int)attributeIndex:(id)a0;
- (BOOL)compileShader:(unsigned int *)a0 type:(unsigned int)a1 string:(id)a2;
- (id)fragmentShaderLog;
- (id)initWithVertexShaderString:(id)a0 fragmentShaderString:(id)a1;
- (id)logForOpenGLObject:(unsigned int)a0 infoCallback:(void /* function */ *)a1 logFunc:(void /* function */ *)a2;
- (id)programLog;
- (unsigned int)uniformIndex:(id)a0;

@end
