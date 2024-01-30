@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject

@property (retain) EAGLContext *glContext;
@property (retain) NSLock *nsLock;
@property BOOL supportsASTC_LDR;
@property BOOL supportsETC2;

+ (id)textureWithName:(id)a0 scaleFactor:(double)a1 bundle:(id)a2 options:(id)a3 error:(id *)a4;
+ (id)lockAndSwitchContext:(id)a0 glContext:(id)a1;
+ (id)_textureWithTexture:(id)a0 error:(id *)a1;
+ (id)_textureWithTextureTXR:(id)a0 error:(id *)a1;
+ (id)commonCubeMapWithContentsOfFiles:(id)a0 options:(id)a1 error:(id *)a2 lock:(id)a3 glContext:(id)a4;
+ (id)commonCubeMapWithContentsOfURL:(id)a0 options:(id)a1 error:(id *)a2 lock:(id)a3 glContext:(id)a4;
+ (id)commonTextureWithCGImage:(struct CGImage { } *)a0 options:(id)a1 error:(id *)a2 lock:(id)a3 glContext:(id)a4;
+ (id)commonTextureWithContentsOfData:(id)a0 options:(id)a1 error:(id *)a2 lock:(id)a3 glContext:(id)a4;
+ (id)commonTextureWithContentsOfURL:(id)a0 options:(id)a1 error:(id *)a2 lock:(id)a3 glContext:(id)a4;
+ (id)commonTextureWithName:(id)a0 scaleFactor:(double)a1 bundle:(id)a2 options:(id)a3 error:(id *)a4 lock:(id)a5 glContext:(id)a6;
+ (id)cubeMapWithContentsOfFile:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)cubeMapWithContentsOfFiles:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)cubeMapWithContentsOfURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)textureWithCGImage:(struct CGImage { } *)a0 options:(id)a1 error:(id *)a2;
+ (id)textureWithContentsOfData:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)textureWithContentsOfFile:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)textureWithContentsOfURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)unlockAndRestoreContext:(id)a0 glContext:(id)a1;

- (void)dealloc;
- (void)cubeMapWithContentsOfFile:(id)a0 options:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)cubeMapWithContentsOfFiles:(id)a0 options:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)cubeMapWithContentsOfURL:(id)a0 options:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithSharegroup:(id)a0;
- (void)textureWithCGImage:(struct CGImage { } *)a0 options:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)textureWithContentsOfData:(id)a0 options:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)textureWithContentsOfFile:(id)a0 options:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)textureWithContentsOfURL:(id)a0 options:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)textureWithName:(id)a0 scaleFactor:(double)a1 bundle:(id)a2 options:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;

@end
