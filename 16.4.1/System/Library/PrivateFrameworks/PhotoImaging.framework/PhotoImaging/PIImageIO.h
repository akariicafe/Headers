@interface PIImageIO : NSObject

+ (BOOL)writeCGImage:(struct CGImage { } *)a0 fileURL:(id)a1;
+ (BOOL)writeCGImage:(struct CGImage { } *)a0 fileURL:(id)a1 options:(id)a2;
+ (BOOL)writeImage:(id)a0 fileURL:(id)a1;
+ (id)writeImage:(id)a0 toDirectoryAtPath:(id)a1 withBasename:(id)a2;
+ (id)writeImage:(id)a0 toTemporaryDirectoryWithBasename:(id)a1;

@end
