@class NSString, NSMutableSet;

@interface FCAssetStore : NSObject

@property (copy, nonatomic) NSString *directoryPath;
@property (copy, nonatomic) NSString *preferredExtension;
@property (copy, nonatomic) NSMutableSet *knownKeys;
@property (readonly, nonatomic) NSString *rootDirectory;

- (BOOL)removeAllFiles;
- (id)fileURLForKey:(id)a0;
- (unsigned long long)sizeOfFileForKey:(id)a0;
- (unsigned long long)storeSize;
- (id)filePathForKey:(id)a0;
- (void).cxx_destruct;
- (id)copyFileAtPath:(id)a0 withKey:(id)a1;
- (BOOL)removeFileWithKey:(id)a0;
- (id)_filePathForKey:(id)a0;
- (unsigned long long)_sizeOfFileAtPath:(id)a0;
- (BOOL)removeAllFilesExceptKeys:(id)a0;
- (id)initWithDirectoryAtPath:(id)a0 preferredAssetPathExtension:(id)a1 knownKeys:(id)a2;
- (id)copyData:(id)a0 withKey:(id)a1;
- (id)initWithDirectoryAtPath:(id)a0 preferredAssetPathExtension:(id)a1;
- (id)moveFileAtPath:(id)a0 withKey:(id)a1;
- (id)allKeys;
- (id)moveFileAtURL:(id)a0 withKey:(id)a1;
- (unsigned long long)storeSizeForKeys:(id)a0;
- (id)_keyForFileName:(id)a0;

@end
