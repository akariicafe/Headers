@class NSString, NSArray, NSMutableDictionary, NSMutableSet, BRKSettings;

@interface BRKDataCollectionBundle : NSObject {
    NSMutableDictionary *_writers;
    NSMutableSet *_manifest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _writersLock;
    BRKSettings *_settings;
}

@property (readonly, nonatomic) NSString *folderName;
@property (readonly, nonatomic) NSString *basePath;
@property (readonly, nonatomic) NSArray *addedFiles;
@property (readonly, nonatomic) BOOL isPackaged;

+ (id)defaultLogDirectory;

- (void)writeData:(id)a0 toFile:(id)a1;
- (void).cxx_destruct;
- (void)_writeData:(id)a0 toFile:(id)a1 updateManifest:(BOOL)a2;
- (id)_writerForClass:(Class)a0 file:(id)a1 configuration:(id /* block */)a2;
- (id)accelerationWriterForFile:(id)a0;
- (id)accelerationWriterForFile:(id)a0 valueCount:(unsigned long long)a1;
- (id)audioWriterForFile:(id)a0;
- (void)closeWriterForFile:(id)a0;
- (id)initWithFolderNamed:(id)a0;
- (id)logWriterForFile:(id)a0;
- (BOOL)packageBundleToPath:(id *)a0 filePrioritization:(id)a1;
- (BOOL)removeBundle;
- (void)writeJSON:(id)a0 toFile:(id)a1;

@end
