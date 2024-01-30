@class NSData, NSString;

@interface DRSSystemProfile : NSObject

@property (nonatomic) BOOL allowsCustomerAnalyticsOverride;
@property (nonatomic) BOOL overridingCustomerApprovesAnalyticsValue;
@property (readonly, nonatomic) NSData *deviceSHA256Digest;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) NSString *deviceCategory;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *platformString;
@property (readonly, nonatomic) unsigned long long deviceHash;
@property (readonly, nonatomic) unsigned char platform;
@property (readonly, nonatomic) BOOL isInternal;
@property (readonly, nonatomic) BOOL isSeed;
@property (readonly, nonatomic) BOOL isCarrier;
@property (readonly, nonatomic) BOOL customerApprovesAnalytics;
@property (readonly, nonatomic) BOOL isLogUploadEnabled;
@property (readonly, nonatomic) BOOL isTaskingEnabled;
@property (readonly, nonatomic) unsigned long long uploadSessionUploadCapBytes;

+ (id)sharedInstance;
+ (id)SHA256DigestForString:(id)a0;
+ (unsigned long long)hashForSHA256Digest:(id)a0;

- (void)_populateCarrier;
- (void)_populatePlatform;
- (void)_populateDeviceCategory;
- (void)_populateDeviceHash;
- (void)_populateBuildVariant;
- (void)_populateBuild;
- (id)init;
- (void)_populateDeviceModel;
- (void).cxx_destruct;

@end
