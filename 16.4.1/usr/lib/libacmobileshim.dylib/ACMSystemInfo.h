@class NSString;

@interface ACMSystemInfo : NSObject <ACMSystemInfoProtocol>

@property (readonly, nonatomic) NSString *MACAddress;
@property (readonly, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) NSString *uniqueDeviceIdentifier;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) BOOL isRunningOnModernMobileSystem;
@property (readonly, nonatomic) BOOL isTouchIDAvailable;
@property (readonly, nonatomic) BOOL isRetailDevice;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL isPreRelease;

- (id)previousVersionUUID;

@end
