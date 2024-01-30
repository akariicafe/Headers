@class NSData, NSMutableData;

@interface MFFileArchive : NSObject

@property (retain, nonatomic) NSData *inputData;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inputRange;
@property (retain, nonatomic) NSMutableData *outputData;
@property (copy, nonatomic) id /* block */ readerBlock;
@property (copy, nonatomic) id /* block */ writerBlock;

+ (id)archive;

- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (int)_archiveDirectoryName:(id)a0 withArchive:(struct archive { } *)a1 error:(id *)a2;
- (id)_compressContents:(id)a0 error:(id *)a1;
- (int)_compressContents:(id)a0 fileName:(id)a1 withArchive:(struct archive { } *)a2 error:(id *)a3;
- (int)_compressContents:(id)a0 withArchive:(struct archive { } *)a1 error:(id *)a2;
- (int)_compressWithArchive:(struct archive { } *)a0 error:(id *)a1;
- (struct archive { } *)_compressionArchive;
- (struct archive_entry { } *)_compressionArchiveEntryWithName:(id)a0 length:(unsigned long long)a1 isDirectory:(BOOL)a2;
- (int)_compressionCompleteForArchive:(struct archive { } *)a0 error:(id *)a1;
- (BOOL)_decompressArchive:(struct archive { } *)a0 intoArchiveDirectory:(id)a1 error:(id *)a2;
- (BOOL)_decompressContents:(id)a0 inMemoryWithError:(id *)a1 mainEntry:(BOOL)a2;
- (struct archive { } *)_decompressionArchive;
- (int)_decompressionCompleteForArchive:(struct archive { } *)a0 error:(id *)a1;
- (id)_errorForArchiveStatus:(long long)a0;
- (void)compressContents:(id)a0 completion:(id /* block */)a1;
- (id)compressFolder:(id)a0 error:(id *)a1;
- (void)decompressContents:(id)a0 completion:(id /* block */)a1;
- (void)registerBlocks:(id /* block */)a0 writer:(id /* block */)a1;
- (void)unregisterBlocks;

@end
