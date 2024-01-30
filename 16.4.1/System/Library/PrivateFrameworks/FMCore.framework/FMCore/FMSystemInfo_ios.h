@interface FMSystemInfo_ios : FMSystemInfo

- (id)productName;
- (id)imei;
- (id)meid;
- (id)deviceName;
- (id)deviceClass;
- (id)productType;
- (id)chipId;
- (id)btMacAddress;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;
- (id)wifiMacAddress;
- (BOOL)isDeviceSecured;
- (id)serialNumber;
- (id)osVersion;
- (id)deviceUDID;
- (BOOL)hasSEP;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)osBuildVersion;
- (id)deviceModelName;
- (id)ecid;

@end
