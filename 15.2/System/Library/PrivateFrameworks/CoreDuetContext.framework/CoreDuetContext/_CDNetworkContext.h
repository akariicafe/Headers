@interface _CDNetworkContext : NSObject

+ (id)predictionKey;
+ (long long)wifiQuality:(id)a0;
+ (long long)cellQuality:(id)a0;
+ (id)keyPathForWiredConnectionStatus;
+ (id)loiKey;
+ (long long)wiredQuality:(id)a0;
+ (id)uploadPowerCostKey;
+ (long long)cellDownloadCost:(id)a0;
+ (id)keyPathForCellConnectionStatus;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (long long)wiredInterfaceClass:(id)a0;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (BOOL)networkingAvailable:(id)a0;
+ (long long)cellInterfaceClass:(id)a0;
+ (id)interfaceClassKey;
+ (id)interfaceUpKey;
+ (id)connectionQualityKey;
+ (id)downloadPowerCostKey;
+ (id)keyPathForWiFiConnectionStatus;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (long long)wifiInterfaceClass:(id)a0;
+ (long long)cellUploadCost:(id)a0;

@end
