@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)osVersion;
- (BOOL)isInternalBuild;
- (id)productName;
- (id)deviceName;
- (id)imei;
- (id)osBuildVersion;
- (id)productType;
- (id)serialNumber;
- (id)deviceClass;
- (id)wifiMacAddress;
- (id)deviceUDID;
- (id)chipId;
- (BOOL)hasSEP;
- (id)btMacAddress;
- (id)meid;
- (BOOL)isDeviceSecured;
- (id)deviceModelName;
- (id)ecid;
- (id)ownerAccount;

@end
