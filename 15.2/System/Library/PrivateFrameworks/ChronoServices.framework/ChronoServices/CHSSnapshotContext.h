@class CHSScreenshotPresentationAttributes, NSString, NSFileManager, NSURL;

@interface CHSSnapshotContext : NSObject {
    BOOL _usesCAPackage;
    BOOL _checkedContentType;
    NSFileManager *_fileManager;
    BOOL _fileExists;
    BOOL _checkedFileExists;
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
