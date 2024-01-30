@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL *_baseDirectoryURL;
}

@property (class, readonly, nonatomic) NSURL *baseDirectoryURL;
@property (class, readonly, nonatomic) BOOL shouldExcludeFromBackup;
@property (class, readonly, nonatomic) Class managedTemporaryDirectoryClass;

+ (id)sharedManager;
+ (id)makeUniqueDirectoryWithBaseDirectory:(id)a0 filename:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)newDirectoryWithFilename:(id)a0;
- (id)_readDirectories;
- (void)_clearDirectories:(id)a0;
- (void)_clearDirectoriesAsynchronously:(id)a0;
- (void)_excludeFromBackupAsynchronously;

@end
