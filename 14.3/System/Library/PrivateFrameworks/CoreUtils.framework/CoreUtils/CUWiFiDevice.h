@class NSString, NSUUID, NSData, NSDictionary;

@interface CUWiFiDevice : NSObject

@property (nonatomic) int present;
@property (copy, nonatomic) NSData *bssid;
@property (copy, nonatomic) NSData *deviceIEBluetoothMAC;
@property (nonatomic) unsigned int deviceIECategory;
@property (copy, nonatomic) NSData *deviceIEDeviceID;
@property (nonatomic) unsigned int deviceIEFlags;
@property (copy, nonatomic) NSString *deviceIEManufacturer;
@property (copy, nonatomic) NSString *deviceIEModel;
@property (copy, nonatomic) NSString *deviceIEName;
@property (copy, nonatomic) NSData *deviceIDOUI;
@property (copy, nonatomic) NSData *deviceIDSetupHash;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *ieData;
@property (retain, nonatomic) id platformObject;
@property (copy, nonatomic) NSDictionary *rawScanResult;
@property (nonatomic) int rssi;
@property (copy, nonatomic) NSString *ssid;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)_updateWithDeviceIE:(const char *)a0 end:(const char *)a1;

@end
