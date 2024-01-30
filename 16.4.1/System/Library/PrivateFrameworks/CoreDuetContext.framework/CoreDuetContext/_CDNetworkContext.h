@interface _CDNetworkContext : NSObject

+ (long long)wiredInterfaceClass:(id)a0;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (long long)wifiInterfaceClass:(id)a0;
+ (id)interfaceClassKey;
+ (id)uploadPowerCostKey;
+ (long long)wifiQuality:(id)a0;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (long long)cellQuality:(id)a0;
+ (id)connectionQualityKey;
+ (BOOL)networkingAvailable:(id)a0;
+ (id)predictionKey;
+ (id)keyPathForWiredConnectionStatus;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)loiKey;
+ (id)interfaceUpKey;
+ (id)downloadPowerCostKey;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (long long)cellInterfaceClass:(id)a0;
+ (long long)cellUploadCost:(id)a0;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (id)keyPathForCellConnectionStatus;
+ (long long)wiredQuality:(id)a0;
+ (long long)cellDownloadCost:(id)a0;

@end
