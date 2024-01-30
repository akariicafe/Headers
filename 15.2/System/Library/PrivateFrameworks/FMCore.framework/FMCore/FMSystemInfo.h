@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (BOOL)hasSEP;
- (id)serialNumber;
- (id)productName;
- (id)osVersion;
- (id)deviceName;
- (id)productType;
- (id)osBuildVersion;
- (id)deviceUDID;
- (id)deviceClass;
- (id)wifiMacAddress;
- (id)chipId;
- (BOOL)isInternalBuild;
- (id)imei;
- (id)deviceModelName;
- (BOOL)isDeviceSecured;
- (id)ecid;
- (id)btMacAddress;
- (id)meid;
- (id)ownerAccount;

@end
