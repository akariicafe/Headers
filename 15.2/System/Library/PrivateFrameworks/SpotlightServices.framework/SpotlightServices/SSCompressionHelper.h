@interface SSCompressionHelper : NSObject

+ (id)sharedInstance;

- (int)unpackageTarForFd:(int)a0 size:(unsigned long long)a1 parentDir:(const char *)a2;
- (char *)getDataOutWithSize:(unsigned long long)a0 withFlag:(unsigned long long)a1 fd:(int *)a2;
- (void)uncompressedContentsForCompressedFile:(id)a0 outPath:(id)a1;
- (int)unTarFileWithFd:(id)a0 toPath:(id)a1;

@end
