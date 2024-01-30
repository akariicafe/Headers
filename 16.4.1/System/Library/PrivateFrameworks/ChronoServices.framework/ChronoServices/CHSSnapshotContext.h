@class CHSScreenshotPresentationAttributes, NSString, NSFileManager, NSURL;

@interface CHSSnapshotContext : NSObject {
    BOOL _usesCAPackage;
    BOOL _checkedContentType;
    BOOL _fileExists;
    BOOL _checkedFileExists;
    NSFileManager *_fileManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fileManagerLock;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) CHSScreenshotPresentationAttributes *attributes;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) BOOL needsCAPackage;
@property (readonly, nonatomic) BOOL fileExists;

- (id)initWithURL:(id)a0 attributes:(id)a1 fileManager:(id)a2;
- (void).cxx_destruct;

@end
