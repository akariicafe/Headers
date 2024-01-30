@interface SSUCompressionUtils : NSObject

+ (id)SSUFileFromCompressedSSUFilePath:(id)a0 error:(id *)a1;
+ (BOOL)_compressArchiveForData:(id)a0 outputFileURL:(id)a1 error:(id *)a2;
+ (id)_dataFromCompressedSSUFilePath:(id)a0 error:(id *)a1;
+ (BOOL)compressArchiveForSSUFile:(id)a0 outputFileURL:(id)a1 error:(id *)a2;
+ (BOOL)compressArchiveForSSUFileURL:(id)a0 outputFileURL:(id)a1 error:(id *)a2;
+ (BOOL)decompressFromCompressedSSUFilePath:(id)a0 outputFileURL:(id)a1 error:(id *)a2;

@end
