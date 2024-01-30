@class NSArray, NSMutableDictionary;

@interface ARArchive : NSObject {
    NSMutableDictionary *_dataByPath;
}

@property (readonly, copy, nonatomic) NSArray *filePaths;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (BOOL)_loadArchiveFromURL:(id)a0 error:(id *)a1;
- (void)addData:(id)a0 withPath:(id)a1;
- (id)dataForResourceAtPath:(id)a0;
- (BOOL)_readDataForEntry:(struct archive_entry { } *)a0 archive:(struct archive { } *)a1;
- (void)addData:(id)a0 withFilename:(id)a1 extension:(id)a2;
- (id)dataForResource:(id)a0 withExtension:(id)a1;

@end
