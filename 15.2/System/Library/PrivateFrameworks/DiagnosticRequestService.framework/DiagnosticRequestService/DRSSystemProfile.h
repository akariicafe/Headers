@class NSString;

@interface DRSSystemProfile : NSObject

@property (nonatomic) BOOL allowsCustomerAnalyticsOverride;
@property (nonatomic) BOOL overridingCustomerApprovesAnalyticsValue;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) NSString *deviceCategory;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *platformString;
@property (readonly, nonatomic) unsigned char platform;
@property (readonly, nonatomic) BOOL isInternal;
@property (readonly, nonatomic) BOOL isSeed;
@property (readonly, nonatomic) BOOL isCarrier;
@property (readonly, nonatomic) BOOL customerApprovesAnalytics;
@property (readonly, nonatomic) BOOL isLogUploadEnabled;
@property (readonly, nonatomic) BOOL isTaskingEnabled;

+ (id)sharedInstance;

- (void)_populateDeviceModel;
- (void)_populateBuild;
- (void)_populatePlatform;
- (void).cxx_destruct;
- (id)init;
- (void)_populateDeviceCategory;
- (void)_populateCarrier;
- (void)_populateBuildVariant;

@end
