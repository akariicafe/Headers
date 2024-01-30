@class NSString, EAGLContext;

@interface ACTGLBase : NSObject <ESRenderer> {
    EAGLContext *mGLContext;
    EAGLContext *mGLBackupContext;
    unsigned int mFramebuffer;
    unsigned int mTextureArray[32];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)context;
- (id)init;
- (void)dealloc;
- (BOOL)initializeOffScreenBuffers;
- (void)releaseTextures;
- (void)deleteBuffers;
- (int)checkCompileStatusForShader:(unsigned int)a0;
- (int)checkLinkStatusForProgram:(unsigned int)a0;
- (void)backupContext;
- (void)restoreContext;
- (void)setCurrentContext;
- (unsigned int)createProgramWithVertexShader:(const char *)a0 fragmentShader:(const char *)a1;
- (int)create:(unsigned char)a0 destinationBuffers:(struct __CVBuffer **)a1 ofWidth:(int)a2 andHeight:(int)a3;
- (int)renderBuffer:(struct __IOSurface { } *)a0 intoBuffer:(struct __IOSurface { } *)a1 planeIndex:(unsigned int)a2 usingProgram:(unsigned int)a3 interpolate:(unsigned int)a4 viewportOrigX:(int)a5 viewportOrigY:(int)a6 viewportWidth:(int)a7 viewportHeight:(int)a8 numIters:(unsigned int)a9;
- (int)loadBuffer:(struct __IOSurface { } *)a0 inTextureUnit:(unsigned int)a1 uniformName:(const char *)a2 planeIndex:(unsigned int)a3 usingProgram:(unsigned int)a4;
- (int)renderIntoBuffer:(struct __IOSurface { } *)a0 planeIndex:(unsigned int)a1 usingProgram:(unsigned int)a2 viewportOrigX:(int)a3 viewportOrigY:(int)a4 viewportWidth:(int)a5 viewportHeight:(int)a6;
- (int)renderInto16bitYBuffer:(unsigned short *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 usingProgram:(unsigned int)a3;
- (int)checkProgramValidity:(unsigned int)a0;

@end
