@class NSString, NUGLObjectPool, NSArray, NSThread, NSMutableDictionary, EAGLContext, NUGLPipeline, NUGLVertexArray, NSMapTable;

@interface NUGLContext : NSObject {
    NSMutableDictionary *_state;
    NSMapTable *_bindings;
    NSThread *_thread;
    struct Context { void /* function */ **x0; int x1; int x2; id x3; id x4; } *_gl;
    NUGLVertexArray *_unitQuad;
    NUGLPipeline *_textureDrawingPipeline;
}

@property (readonly, nonatomic) NUGLObjectPool *sharedObjectPool;
@property (readonly, nonatomic) NUGLObjectPool *privateObjectPool;
@property (nonatomic) long long virtualScreen;
@property (readonly, nonatomic) EAGLContext *EAGLContext;
@property (readonly, nonatomic) NSString *vendorString;
@property (readonly, nonatomic) NSString *rendererString;
@property (readonly, nonatomic) NSString *versionString;
@property (readonly, nonatomic) NSArray *extensions;

+ (void)execute:(id /* block */)a0;
+ (id)errorString:(unsigned int)a0;
+ (id)sharedContext;
+ (id)sourceWithLineNumbersFromSourceArray:(id)a0;
+ (unsigned int)_textureType:(id)a0;
+ (void)executeOnDevice:(id)a0 block:(id /* block */)a1;
+ (void)deleteFramebuffer:(id)a0;
+ (void)deleteRenderbuffer:(id)a0;
+ (void)deleteTexture:(id)a0;
+ (void)deleteBuffer:(id)a0;
+ (void)deleteShader:(id)a0;
+ (void)splitSource:(id)a0 intoLines:(id)a1;
+ (id)addLineNumbersToLines:(id)a0;
+ (void)deleteProgram:(id)a0;
+ (void)deletePipeline:(id)a0;
+ (void)deleteVertexArray:(id)a0;
+ (id)enumString:(unsigned int)a0;

- (void)execute:(id /* block */)a0;
- (void)finish;
- (id)initWithContext:(id)a0;
- (void)setViewport:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)isCurrent;
- (id)_pushObject:(id)a0 forState:(unsigned int)a1;
- (id)_currentObjectForState:(unsigned int)a0;
- (id)_popObject:(id)a0 forState:(unsigned int)a1;
- (void)_bindObject:(id)a0 target:(unsigned int)a1;
- (unsigned int)_bindingForObject:(id)a0;
- (id)_unbindObject:(id)a0 target:(unsigned int)a1;
- (void)clearWithRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (void)drawTexture:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2;
- (void)drawTexture:(id)a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 atPoint:(struct { long long x0; long long x1; })a2;
- (id)simpleTextureDrawingPipeline;
- (id)simpleQuadVertexArray;
- (void)generateFramebuffer:(id)a0;
- (unsigned int)_generateFramebuffer:(id)a0;
- (void)_deleteFramebuffer:(unsigned int)a0;
- (void)bindFramebuffer:(id)a0;
- (void)unbindFramebuffer:(id)a0;
- (BOOL)checkFramebufferComplete:(id)a0;
- (void)generateRenderbuffer:(id)a0;
- (unsigned int)_generateRenderbuffer:(id)a0;
- (void)_deleteRenderbuffer:(unsigned int)a0;
- (void)bindRenderbuffer:(id)a0;
- (void)unbindRenderbuffer:(id)a0;
- (void)setRenderbufferStorageSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (unsigned int)_renderbufferFormatForPixelFormat:(id)a0;
- (void)attachRenderbuffer:(id)a0 toFramebuffer:(id)a1 attachment:(unsigned int)a2;
- (void)detachRenderbuffer:(id)a0 fromFramebuffer:(id)a1 attachment:(unsigned int)a2;
- (struct { long long x0; long long x1; })renderbufferStorageSize;
- (id)renderbufferStorageFormat;
- (void)setRenderbufferStorageFromDrawable:(id)a0;
- (void)presentRenderbuffer;
- (void)generateTexture:(id)a0;
- (unsigned int)_generateTexture:(id)a0 ofType:(unsigned int)a1;
- (void)_deleteTexture:(unsigned int)a0;
- (void)bindTexture:(id)a0;
- (void)unbindTexture:(id)a0;
- (void)bindTexture:(id)a0 atIndex:(unsigned int)a1;
- (void)unbindTexture:(id)a0 atIndex:(unsigned int)a1;
- (void)bindSampler:(id)a0 atIndex:(unsigned int)a1;
- (void)unbindSampler:(id)a0 atIndex:(unsigned int)a1;
- (unsigned int)_activeTextureUnit;
- (void)_setActiveTextureUnit:(unsigned int)a0;
- (void)setTextureStorageSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)setTextureStorageFromIOSurface:(id)a0;
- (int)_internalTextureFormatForPixelFormat:(id)a0;
- (int)_internalTextureFormatForPixelFormat:(id)a0 format:(unsigned int *)a1 type:(unsigned int *)a2;
- (id)_pixelFormatForInternalFormat:(unsigned int)a0;
- (void)attachTexture:(id)a0 toFramebuffer:(id)a1 attachment:(unsigned int)a2;
- (void)detachTexture:(id)a0 fromFramebuffer:(id)a1 attachment:(unsigned int)a2;
- (void)updateTexture:(id)a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 fromBuffer:(id)a2 atPoint:(struct { long long x0; long long x1; })a3;
- (void)copyRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 intoTexture:(id)a1 atPoint:(struct { long long x0; long long x1; })a2;
- (void)copyRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 intoBuffer:(id)a1 atPoint:(struct { long long x0; long long x1; })a2;
- (int)_pixelAlignmentFromBuffer:(id)a0;
- (int)_pixelRowLengthFromBuffer:(id)a0 alignment:(int)a1;
- (void)generateBuffer:(id)a0;
- (unsigned int)_generateBuffer:(id)a0;
- (void)_deleteBuffer:(unsigned int)a0;
- (void)bindBuffer:(id)a0;
- (void)unbindBuffer:(id)a0;
- (void)allocateBufferStorage:(id)a0;
- (void *)mapBuffer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned int)a2;
- (void)unmapBuffer:(id)a0;
- (void)generateShader:(id)a0;
- (unsigned int)_generateShader:(unsigned int)a0 pool:(id)a1;
- (void)_deleteShader:(unsigned int)a0;
- (BOOL)compileShader:(id)a0 error:(out id *)a1;
- (void)generateProgram:(id)a0;
- (unsigned int)_generateProgram:(id)a0;
- (void)_deleteProgram:(unsigned int)a0;
- (BOOL)linkProgram:(id)a0 error:(out id *)a1;
- (id)getProgramUniforms:(id)a0;
- (id)getProgramAttributes:(id)a0;
- (void)setProgramUniform:(id)a0 name:(id)a1 value:(id)a2;
- (void)setProgramUniform:(id)a0 location:(int)a1 value:(id)a2;
- (void)generatePipeline:(id)a0;
- (unsigned int)_generatePipeline:(id)a0;
- (void)_deletePipeline:(unsigned int)a0;
- (void)bindPipeline:(id)a0;
- (void)unbindPipeline:(id)a0;
- (void)addProgram:(id)a0 toPipeline:(id)a1;
- (void)removeProgram:(id)a0 fromPipeline:(id)a1;
- (BOOL)validatePipeline:(id)a0 error:(out id *)a1;
- (void)generateVertexArray:(id)a0;
- (unsigned int)_generateVertexArray:(id)a0;
- (void)_deleteVertexArray:(unsigned int)a0;
- (void)bindVertexArray:(id)a0;
- (void)unbindVertexArray:(id)a0;
- (void)enableVertexArrayAtIndex:(unsigned long long)a0;
- (void)disableVertexArrayAtIndex:(unsigned long long)a0;
- (void)setVertexArrayAttribute:(id)a0 atIndex:(unsigned long long)a1 offset:(int)a2 stride:(int)a3;
- (void)drawVertexArray:(unsigned int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)purgeObjectPool:(id)a0;
- (void)_purgeObjectPool:(id)a0;
- (void)_purgeObjectsOfType:(unsigned int)a0 fromPool:(id)a1 withBlock:(id /* block */)a2;

@end
