@interface ANFiles : NSObject

+ (id)createTemporaryFileWithData:(id)a0 extension:(id)a1 directory:(id)a2;
+ (id)shared;
+ (void)removeItem:(id)a0;
+ (id)temporaryDirectoryUrl;
+ (id)createTemporaryURLWithFileExtension:(id)a0 directory:(id)a1;
+ (void)purgeTemporarySubDirectory:(id)a0;

- (id)createTemporaryFileWithData:(id)a0 extension:(id)a1 directory:(id)a2;
- (void)removeItem:(id)a0;
- (id)createTemporaryURLWithExtension:(id)a0 directory:(id)a1;
- (id)createDirectory:(id)a0 andFileURLWithExtension:(id)a1;
- (void)purgeTemporarySubDirectory:(id)a0;
- (void)removeDirectoryIfEmpty:(id)a0;

@end
