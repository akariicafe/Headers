@class NSString, NSMutableArray;

@interface MSVZipArchive : NSObject {
    struct BOMSys { } *_bomsys;
    NSString *_archivePath;
    NSMutableArray *_filesToArchive;
}

- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addFileAtPath:(id)a0;
- (BOOL)writeToFileAtPath:(id)a0 withError:(id *)a1;
- (BOOL)decompressToPath:(id)a0 withError:(id *)a1;

@end
