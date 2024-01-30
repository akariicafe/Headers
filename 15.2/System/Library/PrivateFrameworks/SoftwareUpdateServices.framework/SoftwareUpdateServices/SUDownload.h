@class SUDownloadOptions, SUDescriptor, SUDownloadMetadata, SUOperationProgress;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUDescriptor *descriptor;
@property (retain, nonatomic) SUOperationProgress *progress;
@property (retain, nonatomic) SUDownloadOptions *downloadOptions;
@property (retain, nonatomic) SUDownloadMetadata *metadata;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)allowCellularDownload;
- (unsigned long long)totalSpaceConsumed;
- (BOOL)isValidDownload;

@end
