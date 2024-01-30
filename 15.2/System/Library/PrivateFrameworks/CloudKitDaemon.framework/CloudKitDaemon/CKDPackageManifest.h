@interface CKDPackageManifest : NSObject

+ (BOOL)readContentsOfFile:(id)a0 intoPackage:(id)a1 error:(id *)a2;
+ (BOOL)writePackage:(id)a0 toFile:(id)a1 error:(id *)a2;
+ (id)packageInClientWithBasePath:(id)a0 contentsOfFile:(id)a1 error:(id *)a2;

@end
