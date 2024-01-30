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
@property (retain, nonatomic) NSString *liveAssetAudienceUUID;
@property (retain, nonatomic) NSString *purpose;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
