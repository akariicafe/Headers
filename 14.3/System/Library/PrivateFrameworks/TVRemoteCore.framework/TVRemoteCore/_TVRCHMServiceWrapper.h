@class HMCharacteristic, NSString, HMAccessory, HMService, HMHome;
@protocol _TVRCHMServiceWrapperDelegate;

@interface _TVRCHMServiceWrapper : NSObject <HMAccessoryDelegate>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMService *service;
@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HMCharacteristic *serviceCharacteristic;
@property (retain, nonatomic) HMCharacteristic *activeCharacteristic;
@property (retain, nonatomic) HMCharacteristic *volumeSelectorCharacteristic;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL sentWakeKey;
@property (nonatomic) BOOL volumeControlSupported;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *model;
@property (weak, nonatomic) id<_TVRCHMServiceWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithService:(id)a0;

- (void)connect;
- (void)disconnect;
- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (void)sendButtonEvent:(id)a0;
- (BOOL)supportsVolumeControl;
- (void)_disconnectWithError:(id)a0;
- (BOOL)supportsInfoKey;
- (void)_checkVolumeServicesForAccessory:(id)a0;
- (void)_setCharacteristicsForService:(id)a0;
- (void)_startObservingServiceNotifications;
- (void)_sendVolumeKey:(BOOL)a0;
- (long long)_remoteKeyForTVRCButton:(id)a0;
- (void)_sendRemoteKey:(long long)a0;
- (void)_sendWakeKey;
- (void)_serviceNameChanged:(id)a0;
- (void)_serviceRemoved:(id)a0;
- (void)_stopObservingServiceNotifications;
- (void)_writeValue:(id)a0 toCharacteristic:(id)a1;
- (id)_televisionServiceForAccessory:(id)a0;

@end
