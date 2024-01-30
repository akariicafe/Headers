@class NSUUID, FPSandboxingURLWrapper, NSURL, NSString;

@interface QLPreviewItemEditedCopy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) FPSandboxingURLWrapper *urlWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *directoryURLWrapper;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *createdContainerTemporaryURL;
@property (readonly, nonatomic) NSString *outputURLContentType;

- (void).cxx_destruct;
- (BOOL)containerStillExists;
- (id)initWithEditedCopyURL:(id)a0 createdContainerTemporaryURL:(id)a1;
- (id)initWithEditedCopyURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeFromDisk;
- (id)description;
- (void)bumpVersion;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
