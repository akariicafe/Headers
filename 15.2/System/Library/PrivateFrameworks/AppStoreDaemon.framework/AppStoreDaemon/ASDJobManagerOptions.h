@class NSString;

@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldReportDownloadProgress;
@property (copy, nonatomic) NSString *persistenceIdentifier;
@property (nonatomic) BOOL shouldFilterExternalOriginatedDownloads;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
