@interface TSDMetalShaderLibraryLoader : NSObject

+ (id)loadDefaultLibraryWithDevice:(id)a0;
+ (id)loadLibraryWithDevice:(id)a0 path:(id)a1;
+ (id)loadApplicationLibraryWithDevice:(id)a0 library:(id)a1;

@end
