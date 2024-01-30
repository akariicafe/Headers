@class NSString;

@interface TSDGLShaderQualifier : NSObject

@property (readonly, nonatomic) BOOL needsUpdate;
@property (nonatomic) int uniformLocation;
@property (readonly, nonatomic) NSString *name;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void)setGLUniformWithShader:(id)a0;
- (void)setGLUniformCheckWithShader:(id)a0;
- (void)updateUniformLocationWithShaderProgramObject:(int)a0;

@end
