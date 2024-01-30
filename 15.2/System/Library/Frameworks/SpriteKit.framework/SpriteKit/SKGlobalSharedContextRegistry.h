@interface SKGlobalSharedContextRegistry : NSObject

+ (id)globalGLSharedContext;
+ (void)setGlobalGLSharedContext:(id)a0;
+ (id)globalMetalDevice;
+ (void)setGlobalMetalDevice:(id)a0;
+ (void)setPrefersOpenGL:(BOOL)a0;
+ (BOOL)getPrefersOpenGL;

@end
