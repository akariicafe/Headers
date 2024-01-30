@class NSMutableArray;

@interface TDreamGLProgramHelper : NSObject {
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
}

@property (nonatomic) BOOL initialized;

- (void)use;
- (void).cxx_destruct;
- (void)addAttribute:(id)a0;
- (void)dealloc;
- (BOOL)link;
- (unsigned int)uniformIndex:(id)a0;
- (BOOL)compileShader:(unsigned int *)a0 type:(unsigned int)a1 string:(id)a2;
- (id)logForOpenGLObject:(unsigned int)a0 infoCallback:(void /* function */ *)a1 logFunc:(void /* function */ *)a2;
- (id)initWithVertexShaderString:(id)a0 fragmentShaderString:(id)a1;
- (unsigned int)attributeIndex:(id)a0;
- (id)vertexShaderLog;
- (id)fragmentShaderLog;
- (id)programLog;

@end
