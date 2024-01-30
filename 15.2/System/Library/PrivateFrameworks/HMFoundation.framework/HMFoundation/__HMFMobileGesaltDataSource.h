@class NSString, HMFMACAddress, HMFSoftwareVersion, NSObject;
@protocol OS_dispatch_queue, HMFSystemInfoNameDataSourceDelegate;

@interface __HMFMobileGesaltDataSource : HMFObject <HMFSystemInfoNameDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource, HMFSystemInfoBluetoothLEDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) struct MGNotificationTokenStruct { } *notificationToken;
@property (weak) id<HMFSystemInfoNameDataSourceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *regionInfo;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) long long productPlatform;
@property (readonly, nonatomic) long long productClass;
@property (readonly, nonatomic) long long productVariant;
@property (readonly, copy, nonatomic) NSString *modelIdentifier;
@property (readonly, copy, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress;
@property (readonly) BOOL supportsBLE;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
