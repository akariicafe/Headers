@class BRCGenerationID, NSString, BRCAccountSessionFPFS, NSData, BRCItemGlobalID, NSURL, BRCAppLibrary;

@interface BRCImportObject : NSObject {
    BRCGenerationID *_generationID;
    unsigned char _finderInfo[32];
    unsigned short _mode;
    struct timespec { long long tv_sec; long long tv_nsec; } _birthtime;
    struct timespec { long long tv_sec; long long tv_nsec; } _mtime;
    unsigned int _flags;
    unsigned char _isExcluded : 1;
    unsigned char _isInPackage : 1;
    unsigned char _isBundle : 1;
    unsigned char _isPackageRoot : 1;
    unsigned char _readFault : 1;
    unsigned char _hasFinderTags : 1;
    unsigned char _isBusy : 1;
    unsigned char _hasFinderInfoAliasBit : 1;
    unsigned char _isBRAlias : 1;
    unsigned char _qtnResolved : 1;
    unsigned char _xattrsResolved : 1;
}

@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isBundle;
@property (readonly, nonatomic) BOOL isFault;
@property (readonly, nonatomic) BOOL isFile;
@property (readonly, nonatomic) BOOL isPackageRoot;
@property (readonly, nonatomic) BOOL isUnixDir;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) BOOL isExecutable;
@property (readonly, nonatomic) BOOL isHiddenExtension;
@property (readonly, nonatomic) BOOL isHiddenFile;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isExcluded;
@property (readonly, nonatomic) BOOL hasFinderTags;
@property (readonly, nonatomic) BOOL isFinderAlias;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isUserVisible;
@property (readonly, nonatomic) unsigned long long sharingOptions;
@property (readonly, nonatomic) unsigned int fileType;
@property (readonly, nonatomic) unsigned long long fileID;
@property (readonly, nonatomic) unsigned int hardlinkCount;
@property (readonly, nonatomic) int deviceID;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) long long birthTime;
@property (readonly, nonatomic) long long modificationTime;
@property (readonly, nonatomic) unsigned int fsGenerationID;
@property (readonly, nonatomic) BRCGenerationID *generationID;
@property (readonly, nonatomic) NSString *logicalName;
@property (readonly, nonatomic) NSString *symlinkContent;
@property (readonly, nonatomic) NSData *quarantineInfo;
@property (readonly, nonatomic) NSData *xattrs;
@property (readonly, nonatomic) BRCAccountSessionFPFS *session;
@property (readonly, nonatomic) BRCItemGlobalID *parentItemGlobalID;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) BRCAppLibrary *appLibrary;
@property (readonly, nonatomic) unsigned char itemScope;
@property (readonly, nonatomic) unsigned char isDocumentsFolder : 1;

- (BOOL)isFileWithFinderInfoAliasBit;
- (void).cxx_destruct;
- (int)_resolveAgainstFileDescriptor:(int)a0;
- (void)_resolveParentBasedPropertiesWithParent:(id)a0 logicalName:(id)a1;
- (id)initAsNewDirectoryWithLogicalName:(id)a0 parentItem:(id)a1;
- (id)initAsSymlinkWithTarget:(id)a0 parentItem:(id)a1 logicalName:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 existingItem:(id)a1 quarantineInfo:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 logicalName:(id)a1 quarantineInfo:(id)a2 parentItem:(id)a3 error:(id *)a4;
- (id)initWithURL:(id)a0 packageRoot:(id)a1 error:(id *)a2;

@end
