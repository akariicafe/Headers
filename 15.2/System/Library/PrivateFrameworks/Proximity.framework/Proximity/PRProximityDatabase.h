@interface PRProximityDatabase : NSObject

+ (long long)getScannerDeviceModel;
+ (long long)getPRDeviceModelFromModelId:(id)a0;
+ (id)getDeviceData;
+ (BOOL)getProximityDeviceParameters:(id *)a0 forDeviceModel:(id)a1 withError:(id *)a2;
+ (char)getDeviceBtTxPowerFromModel:(long long)a0;
+ (char)getDeviceBtRxOffsetFromModel:(long long)a0;

- (id)init;

@end
