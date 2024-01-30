@interface FMSystemInfo_ios : FMSystemInfo

- (id)osVersion;
- (id)productName;
- (id)deviceName;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)imei;
- (id)osBuildVersion;
- (id)productType;
- (id)serialNumber;
- (id)deviceClass;
- (id)wifiMacAddress;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (id)deviceUDID;
- (id)chipId;
- (BOOL)hasSEP;
- (id)btMacAddress;
- (id)meid;
- (BOOL)isDeviceSecured;
- (id)deviceModelName;
- (id)ecid;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;

@end
