@class NSString;

@interface MBTemporaryDirectory : NSObject {
    NSString *_identifier;
    NSString *_path;
    char *_fsRepPath;
    BOOL _disposed;
}

@property (readonly, nonatomic) NSString *path;

+ (id)temporaryDirectoryOnSameVolumeAsPath:(id)a0 identifiedBy:(id)a1 error:(id *)a2;

- (BOOL)dispose;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithExistingFsRepPath:(char *)a0 identifier:(id)a1;
- (BOOL)_purgeContentsAt:(id)a0;
- (id)makeTemporaryFilePath;
- (BOOL)purgeContents;

@end
