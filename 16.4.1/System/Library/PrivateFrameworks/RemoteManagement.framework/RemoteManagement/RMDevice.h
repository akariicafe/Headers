@class NSString;

@interface RMDevice : NSObject

@property (class, readonly, nonatomic) RMDevice *currentDevice;

@property (readonly, nonatomic) NSString *UDID;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *modelFamily;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *modelMarketingName;
@property (readonly, nonatomic) NSString *operatingSystem;
@property (readonly, nonatomic) NSString *operatingSystemMarketingName;
@property (readonly, nonatomic) NSString *operatingSystemVersion;
@property (readonly, nonatomic) NSString *operatingSystemSupplementalExtraVersion;
@property (readonly, nonatomic) NSString *operatingSystemBuildVersion;
@property (readonly, nonatomic) NSString *operatingSystemSupplementalBuildVersion;
@property (readonly, nonatomic) BOOL locked;

@end
