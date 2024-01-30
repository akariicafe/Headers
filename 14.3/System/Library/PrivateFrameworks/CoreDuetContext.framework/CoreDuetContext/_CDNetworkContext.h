@interface _CDNetworkContext : NSObject

+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (id)keyPathForCellConnectionStatus;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (id)keyPathForWiFiConnectionStatus;
+ (long long)cellDownloadCost:(id)a0;
+ (id)interfaceUpKey;
+ (id)predictionKey;
+ (id)uploadPowerCostKey;
+ (BOOL)networkingAvailable:(id)a0;
+ (id)downloadPowerCostKey;
+ (long long)wifiInterfaceClass:(id)a0;
+ (id)loiKey;
+ (id)interfaceClassKey;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (long long)cellQuality:(id)a0;
+ (long long)wiredInterfaceClass:(id)a0;
+ (id)connectionQualityKey;
+ (id)keyPathForWiredConnectionStatus;
+ (long long)wiredQuality:(id)a0;
+ (long long)wifiQuality:(id)a0;
+ (long long)cellInterfaceClass:(id)a0;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (long long)cellUploadCost:(id)a0;

@end
