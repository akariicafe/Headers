@class NSString, NSFileManager, NSURL, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_queue;

@interface PLSimpleDCIMDirectory : NSObject {
    NSString *_subDirSuffix;
    unsigned long long _directoryLimit;
    NSFileManager *_fileManager;
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_currentSubDirectory;
    unsigned long long _currentSubDirectoryNumber;
    NSString *_userInfoPath;
    BOOL _hasLoadedUserInfo;
    NSObject<OS_dispatch_queue> *_isolation;
}

@property (readonly, retain, nonatomic) NSURL *currentSubDirectory;
@property BOOL representsCameraRoll;
@property (readonly) NSURL *directoryURL;

+ (id)cameraRollPlistName;
+ (id)cloudPlistName;
+ (id)migrateOldPlistToNewPlist:(id)a0;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })fileNameNumberRangeForDirNumber:(unsigned long long)a0;
- (id)availableFileNameNumbersInDirNumber:(unsigned long long)a0;
- (id)nextAvailableFileURLWithExtension:(id)a0;
- (id)init;
- (id)initWithDirectoryURL:(id)a0 subDirectorySuffix:(id)a1 perDirectoryLimit:(unsigned long long)a2 userInfoPath:(id)a3;
- (void)_saveUserInfo;
- (void)_loadUserInfoLastDirectoryNumber:(id *)a0 lastFileNumber:(id *)a1;
- (BOOL)_ensureDirectoryExists:(id)a0;
- (void).cxx_destruct;
- (id)subDirURLForNumber:(unsigned long long)a0 create:(BOOL)a1 didCreate:(BOOL *)a2;
- (void)reset;

@end
