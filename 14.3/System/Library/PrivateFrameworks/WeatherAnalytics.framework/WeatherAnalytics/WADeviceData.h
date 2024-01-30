@class NSString, WAOsInstallVariant, WADevicePlatform;

@interface WADeviceData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) WADevicePlatform *devicePlatform;
@property (readonly, nonatomic) WAOsInstallVariant *osInstallVariant;
@property (readonly, nonatomic) NSString *osVersion;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithDeviceModel:(id)a0 devicePlatform:(id)a1 osInstallVariant:(id)a2 osVersion:(id)a3;

@end
