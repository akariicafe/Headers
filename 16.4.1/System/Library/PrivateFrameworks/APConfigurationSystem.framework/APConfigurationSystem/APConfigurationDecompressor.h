@class NSFileManager;

@interface APConfigurationDecompressor : NSObject

@property (retain, nonatomic) NSFileManager *filemanager;

- (void)removeFileAtPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dataForObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 orLocation:(unsigned long long)a2 andLength:(unsigned long long)a3;
- (long long)decompressTarAtPath:(id)a0 toPath:(id)a1;
- (id)nameForObject:(id)a0 atOffset:(unsigned long long)a1;
- (unsigned long long)sizeForFileAtPath:(id)a0;
- (unsigned long long)sizeForObject:(id)a0 atOffset:(unsigned long long)a1;
- (char)typeForObject:(id)a0 atOffset:(unsigned long long)a1;
- (BOOL)untarFileAtPath:(id)a0;
- (BOOL)unzipContentsOfFileAtPath:(id)a0 toPath:(id)a1;
- (id)unzipData:(id)a0;
- (void)writeFileDataForFile:(id)a0 atLocation:(unsigned long long)a1 withLength:(unsigned long long)a2 atPath:(id)a3;

@end
