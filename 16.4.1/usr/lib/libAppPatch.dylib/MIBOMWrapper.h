@interface MIBOMWrapper : NSObject

+ (BOOL)extractZipArchiveAtURL:(id)a0 toURL:(id)a1 withError:(id *)a2;
+ (BOOL)extractZipArchiveAtURL:(id)a0 toURL:(id)a1 withError:(id *)a2 extractionProgressBlock:(id /* block */)a3;
+ (BOOL)_countFilesAndBytesInArchiveAtURL:(id)a0 withBOMCopier:(struct _BOMCopier { } *)a1 totalFiles:(unsigned long long *)a2 totalUncompressedBytes:(unsigned long long *)a3 error:(id *)a4;

@end
