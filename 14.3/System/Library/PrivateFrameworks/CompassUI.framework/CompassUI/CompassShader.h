@class NSArray, NSMutableDictionary, NSString;

@interface CompassShader : NSObject {
    NSMutableDictionary *_uniforms;
    NSArray *_uniformNames;
    NSString *_fragmentName;
    NSString *_vertexName;
}

@property (nonatomic) unsigned int program;

- (void)use;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFragmentName:(id)a0 vertexName:(id)a1 uniformNames:(id)a2;
- (BOOL)loadShader;
- (BOOL)compileShader:(unsigned int *)a0 type:(unsigned int)a1 file:(id)a2;
- (BOOL)linkProgram:(unsigned int)a0;
- (id)initWithName:(id)a0 uniformNames:(id)a1;
- (int)locationForUniform:(id)a0;
- (BOOL)validateProgram:(unsigned int)a0;

@end
