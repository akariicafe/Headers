@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions

@property (retain, nonatomic) NSString *requestedProductVersion;
@property (nonatomic) long long delayPeriod;
@property (nonatomic) BOOL supervised;
@property (nonatomic) BOOL allowSameVersion;
@property (retain, nonatomic) NSString *prerequisiteBuildVersion;
@property (retain, nonatomic) NSString *prerequisiteProductVersion;
@property (retain, nonatomic) NSString *prerequisiteReleaseType;
@property (nonatomic) BOOL prerequisiteReleaseTypeIsOverridden;
@property (retain, nonatomic) NSString *downloadAuthorizationHeader;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
