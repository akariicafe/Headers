@class NSUUID, FPSandboxingURLWrapper, NSURL, NSString;

@interface QLPreviewItemEditedCopy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) FPSandboxingURLWrapper *editedCopyURLWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *directoryURLWrapper;
@property (retain, nonatomic) NSURL *editedCopyURL;
@property (retain, nonatomic) NSURL *hostTemporaryContainerURL;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL temporaryDirectoryWasCreatedInHost;
@property (nonatomic) BOOL markedAsPurgeable;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) NSString *outputURLContentType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)removeFromDisk:(BOOL)a0;
- (void)bumpVersion;
- (BOOL)containerStillExists;
- (id)initWithEditedCopyURL:(id)a0;
- (id)initWithEditedCopyURL:(id)a0 containerTemporaryURL:(id)a1 temporaryDirectoryCreatedInHost:(BOOL)a2;
- (id)initWithEditedCopyURL:(id)a0 temporaryDirectoryCreatedInHost:(BOOL)a1;
- (void)markAsPurgeableIfNeeded;

@end
