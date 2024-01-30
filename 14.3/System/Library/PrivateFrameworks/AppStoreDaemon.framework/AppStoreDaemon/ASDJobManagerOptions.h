@class NSString;

@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldReportDownloadProgress;
@property (copy, nonatomic) NSString *persistenceIdentifier;
@property (nonatomic) BOOL shouldFilterExternalOriginatedDownloads;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
