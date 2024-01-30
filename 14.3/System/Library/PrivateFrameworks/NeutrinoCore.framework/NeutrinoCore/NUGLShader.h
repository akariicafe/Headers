@class NSString, NSError;

@interface NUGLShader : NUGLObject {
    long long _compilationStatus;
    NSError *_compilationError;
}

@property (readonly) unsigned int glType;
@property (readonly) unsigned int glStage;
@property (readonly) long long type;
@property (readonly) NSString *source;

- (void)delete;
- (id)init;
- (void).cxx_destruct;
- (void)generate:(id)a0;
- (id)initWithType:(long long)a0 source:(id)a1;
- (BOOL)compile:(id)a0 error:(out id *)a1;
- (void)_compile:(id)a0;

@end
