@class NSString, HMFSoftwareVersion, HMFMACAddress;
@protocol HMFSystemInfoMigrationDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoNameDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoBluetoothLEDataSource, HMFSystemInfoWiFiDataSource;

@interface HMFSystemInfo : HMFObject <HMFSystemInfoNameDataSourceDelegate, HMFSystemInfoMigrationDataSourceDelegate>

@property (readonly, nonatomic) id<HMFSystemInfoNameDataSource> nameDataSource;
@property (readonly, nonatomic) id<HMFSystemInfoMarketingInformationDataSource> marketingDataSource;
@property (readonly, nonatomic) id<HMFSystemInfoSerialNumberDataSource> serialNumberDataSource;
@property (readonly, nonatomic) id<HMFSystemInfoProductInfoDataSource> productInfoDataSource;
@property (readonly, nonatomic) id<HMFSystemInfoSoftwareVersionDataSource> softwareVersionDataSource;
@property (readonly, nonatomic) id<HMFSystemInfoMigrationDataSource> migrationDataSource;
@property (readonly, nonatomic) id<HMFSystemInfoWiFiDataSource> WiFiDataSource;
@property (readonly, nonatomic) id<HMFSystemInfoBluetoothLEDataSource> bluetoothLEDataSource;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *modelIdentifier;
@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *regionInfo;
@property (readonly, copy) NSString *serialNumber;
@property (readonly) long long productPlatform;
@property (readonly) long long productClass;
@property (readonly) long long productVariant;
@property (readonly, copy) HMFSoftwareVersion *softwareVersion;
@property (readonly, getter=isMigrating) BOOL migrating;
@property (readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress;
@property (readonly) BOOL supportsBLE;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)systemInfo;

- (void).cxx_destruct;
- (void)dataSource:(id)a0 didUpdateName:(id)a1;
- (void)dataSource:(id)a0 didUpdateMigrating:(BOOL)a1;

@end
