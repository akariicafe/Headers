@interface FMSystemInfo_ios : FMSystemInfo

- (BOOL)hasSEP;
- (id)serialNumber;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)productName;
- (id)osVersion;
- (id)deviceName;
- (id)productType;
- (id)osBuildVersion;
- (id)deviceUDID;
- (id)deviceClass;
- (id)wifiMacAddress;
- (id)chipId;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (id)imei;
- (id)deviceModelName;
- (BOOL)isDeviceSecured;
- (id)ecid;
- (id)btMacAddress;
- (id)meid;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;

@end
