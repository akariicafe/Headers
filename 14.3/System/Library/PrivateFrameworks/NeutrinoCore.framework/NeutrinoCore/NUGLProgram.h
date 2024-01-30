@class NUGLShader, NSDictionary, NSError;

@interface NUGLProgram : NUGLObject {
    long long _buildStatus;
    NSError *_buildError;
}

@property (readonly) NUGLShader *shader;
@property (readonly) NSDictionary *uniforms;
@property (readonly) NSDictionary *attributes;

- (void)delete;
- (id)init;
- (void).cxx_destruct;
- (void)_build:(id)a0;
- (void)generate:(id)a0;
- (id)initWithShader:(id)a0;
- (BOOL)build:(id)a0 error:(out id *)a1;

@end
