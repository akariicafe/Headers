@interface ANFiles : NSObject

+ (void)removeItem:(id)a0;
+ (id)shared;
+ (id)createTemporaryFileWithData:(id)a0 extension:(unsigned long long)a1 directory:(id)a2;
+ (void)purgeTemporarySubDirectory:(id)a0;
+ (id)createTemporaryURLWithExtension:(unsigned long long)a0 directory:(id)a1;
+ (id)temporaryDirectoryUrl;
+ (id)stringForFileExtension:(unsigned long long)a0;

- (void)removeItem:(id)a0;
- (id)createTemporaryFileWithData:(id)a0 extension:(unsigned long long)a1 directory:(id)a2;
- (void)purgeTemporarySubDirectory:(id)a0;
- (id)createTemporaryURLWithExtension:(unsigned long long)a0 directory:(id)a1;
- (id)createDirectory:(id)a0 andFileURLWithExtension:(unsigned long long)a1;
- (void)removeDirectoryIfEmpty:(id)a0;

@end
