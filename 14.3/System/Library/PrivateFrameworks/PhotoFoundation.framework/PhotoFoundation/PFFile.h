@class NSURL, NSString, NSDate;

@interface PFFile : NSObject <PFFile, NSCopying> {
    NSString *_uti;
    struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *_fileInfo;
    NSString *_cachedPath;
}

@property (readonly, nonatomic) unsigned long long pathHash;
@property (readonly) NSURL *url;
@property (readonly) NSString *path;
@property (readonly) NSString *fileName;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSDate *fileCreationDate;
@property (readonly) NSDate *fileModificationDate;
@property (readonly) NSString *fileExtension;
@property (readonly) BOOL isDirectory;
@property (readonly) NSString *UTI;

+ (id)fileAttributesAtPath:(id)a0 traverseLink:(BOOL)a1;
+ (id)fileWithURL:(id)a0;
+ (BOOL)pathExists:(id)a0;
+ (id)realPathFromFileAlias:(id)a0;
+ (BOOL)fileExists:(id)a0;
+ (BOOL)directoryExists:(id)a0;
+ (id)resourceIdentifierForURL:(id)a0;
+ (id)uniqueFileSystemNameForName:(id)a0 inDirectory:(id)a1;
+ (long long)sizeOf:(id)a0 includeSubFolders:(BOOL)a1;
+ (id)fileWithPath:(id)a0;
+ (id)fileAttributesAtPath:(id)a0 traverseLink:(BOOL)a1 fixCreationDate:(BOOL)a2;
+ (int)disableOSCachingForURL:(id)a0;
+ (void)reenableOSCachingForFileDescriptor:(int)a0;
+ (id)pathByTidyingExtensionInPath:(id)a0 withExtension:(id)a1;
+ (BOOL)createEmptyFileAtURL:(id)a0;
+ (id)createEmptyTempFileInDirectoryNamed:(id)a0 filenamePrefix:(id)a1 pathExtension:(id)a2 error:(id *)a3;
+ (id)createEmptyTempFileInBaseDirectory:(id)a0 withSubDirectoryNamed:(id)a1 filenamePrefix:(id)a2 pathExtension:(id)a3 error:(id *)a4;
+ (id)assetType:(id)a0;

- (id)initWithPath:(id)a0;
- (id)extension;
- (id)volume;
- (const char *)fileSystemRepresentation;
- (id)assetType;
- (BOOL)isFile;
- (BOOL)tryLock;
- (void)unlock;
- (const struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)cachedStat;
- (void)lock;
- (id)modificationDate;
- (void).cxx_destruct;
- (void)uncacheStat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToFile:(id)a0;
- (id)fileComponent;
- (id)newFileByAppendingPathComponent:(id)a0;
- (id)fileByResolvingFileAlias;
- (id)folderPath;
- (void)logFileAccess;
- (BOOL)isFileAlias;
- (BOOL)pathExists;
- (unsigned short)posixPermissions;
- (long long)folderSize_recursive:(BOOL)a0;
- (id)lockInFinder;
- (id)unlockInFinder;
- (BOOL)isLockedInFinder;
- (id)directoryEnumerator;
- (id)labelNumber;
- (void)setLabelNumber:(id)a0;
- (id)newFileIStream;
- (id)newFileIOStream;
- (id)creationDate;
- (BOOL)exists;
- (void)dealloc;
- (id)attributes;
- (long long)size;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0;
- (int)fileType;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (BOOL)isSymLink;
- (BOOL)isInTrash;
- (BOOL)isXMPType;

@end
