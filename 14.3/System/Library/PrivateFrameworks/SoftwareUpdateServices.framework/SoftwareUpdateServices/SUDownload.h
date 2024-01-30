@class SUDownloadOptions, SUDescriptor, SUDownloadMetadata, SUOperationProgress;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUDescriptor *descriptor;
@property (retain, nonatomic) SUOperationProgress *progress;
@property (retain, nonatomic) SUDownloadOptions *downloadOptions;
@property (retain, nonatomic) SUDownloadMetadata *metadata;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)allowCellularDownload;
- (unsigned long long)totalSpaceConsumed;
- (BOOL)isValidDownload;

@end
