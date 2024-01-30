@interface SKGlobalSharedContextRegistry : NSObject

+ (BOOL)getPrefersOpenGL;
+ (id)globalGLSharedContext;
+ (id)globalMetalDevice;
+ (void)setGlobalGLSharedContext:(id)a0;
+ (void)setGlobalMetalDevice:(id)a0;
+ (void)setPrefersOpenGL:(BOOL)a0;

@end
