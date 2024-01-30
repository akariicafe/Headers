@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)productName;
- (id)imei;
- (id)meid;
- (BOOL)isInternalBuild;
- (id)deviceName;
- (id)deviceClass;
- (id)productType;
- (id)chipId;
- (id)btMacAddress;
- (id)wifiMacAddress;
- (BOOL)isDeviceSecured;
- (id)serialNumber;
- (id)osVersion;
- (id)deviceUDID;
- (BOOL)hasSEP;
- (id)osBuildVersion;
- (id)deviceModelName;
- (id)ecid;
- (id)ownerAccount;

@end
