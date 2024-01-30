@class HMDHome, NSSet, NSString;

@interface HMDNotificationRegistryCoreDataAdapter : HMFObject <HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly, copy) NSSet *characteristicRegistrations;
@property (readonly) NSSet *mediaRegistrations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)shortDescription;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)removeRegistrationsForCharacteristics:(id)a0;
- (BOOL)removeRegistrationsForMediaProfile:(id)a0;
- (id)processCharacteristicsRequests:(id)a0;
- (id)_fetchMKFRegistrationsWithUserUUID:(id)a0 withCharacteristicIIDs:(id)a1 withAccessoryUUID:(id)a2 withDeviceIdsDestination:(id)a3 withPrefetchPaths:(id)a4 context:(id)a5;
- (BOOL)_deleteAllCharacteristicRegistrationsWithContext:(id)a0;
- (BOOL)_deleteAllMKFRegistrationsForMediaProfileUUID:(id)a0 withMediaProperty:(id)a1 hmcContext:(id)a2;
- (BOOL)_deleteAllRegistrationsForCharacteristicIIDs:(id)a0 withAccessoryUUID:(id)a1 hmcContext:(id)a2;
- (BOOL)_deleteAllRegistrationsWithEntityName:(id)a0 withHomeKeypath:(id)a1 hmcContext:(id)a2;
- (id)_fetchMKFCharacteristicsFromHMDCharacteristics:(id)a0 context:(id)a1;
- (id)_fetchMKFHAPAccessoryWithUUID:(id)a0 context:(id)a1;
- (id)_fetchMKFRegistrationsForHMDCharacteristics:(id)a0 context:(id)a1;
- (id)_fetchMKFRegistrationsForMediaProfileUUID:(id)a0 withMediaProperty:(id)a1 context:(id)a2;
- (id)_fetchMKFRegistrationsWithUserUUID:(id)a0 withCharacteristicIIDs:(id)a1 withAccessoryUUIDs:(id)a2 withDeviceIdsDestination:(id)a3 withPrefetchPaths:(id)a4 context:(id)a5;
- (id)_fetchMKFRegistrationsWithUserUUID:(id)a0 withMediaProfileUUID:(id)a1 withMediaPropertyIn:(id)a2 withDeviceIdsDestination:(id)a3 withAccessoryUUID:(id)a4 withPrefetchPaths:(id)a5 context:(id)a6;
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)a0 withCharacteristicIIDs:(id)a1 withAccessoryUUID:(id)a2 withDeviceIdsDestination:(id)a3 withPrefetchPaths:(id)a4 outUser:(id *)a5 context:(id)a6;
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)a0 withCharacteristicIIDs:(id)a1 withAccessoryUUIDs:(id)a2 withDeviceIdsDestination:(id)a3 withPrefetchPaths:(id)a4 outUser:(id *)a5 context:(id)a6;
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)a0 withMediaProfileUUID:(id)a1 withMediaPropertyIn:(id)a2 withDeviceIdsDestination:(id)a3 withAccessoryUUID:(id)a4 withPrefetchPaths:(id)a5 outUser:(id *)a6 context:(id)a7;
- (id)_fetchMKFUserWithUUID:(id)a0 context:(id)a1;
- (id)_fetchRequestForAllCharacteristicRegistrations;
- (id)_fetchRequestForAllMediaProfileRegistrations;
- (id)_fetchRequestForCharacteristicRegistrationsWithoutAllowedDestinations:(id)a0;
- (id)_fetchRequestForMediaProfileRegistrationsWithoutAllowedDestinations:(id)a0;
- (BOOL)_insertNotificationRegistrationForCharacteristic:(id)a0 deviceIdsDestination:(id)a1 user:(id)a2 mkfCharacteristic:(id)a3 context:(id)a4;
- (BOOL)_insertNotificationRegistrationForMediaProperty:(id)a0 mediaProfile:(id)a1 deviceIdsDestination:(id)a2 user:(id)a3 accessory:(id)a4 context:(id)a5;
- (id)_processDisableCharacteristicsRequest:(id)a0 registrationsForAccessory:(id)a1 context:(id)a2;
- (id)_processEnableCharacteristicsRequest:(id)a0 mkfUser:(id)a1 registrationsForAccessory:(id)a2 context:(id)a3;
- (id)_processGroupedCharacteristicsRequests:(id)a0 user:(id)a1 destination:(id)a2 context:(id)a3;
- (id)_requestToFetchMKFRegistrationsWithMediaProfileUUID:(id)a0 withMediaProperty:(id)a1 context:(id)a2;
- (id)destinationsToNotifyForCharacteristic:(id)a0;
- (id)destinationsToNotifyForMediaPropertyResponse:(id)a0;
- (id)disableNotificationForCharacteristics:(id)a0 user:(id)a1 deviceIdsDestination:(id)a2;
- (BOOL)disableNotificationForMediaProfile:(id)a0 mediaProperties:(id)a1 user:(id)a2 deviceIdsDestination:(id)a3;
- (BOOL)enableNotificationForMediaProfile:(id)a0 mediaProperties:(id)a1 user:(id)a2 deviceIdsDestination:(id)a3;
- (BOOL)enableNotificationsForCharacteristics:(id)a0 user:(id)a1 deviceIdsDestination:(id)a2;
- (id)mediaPropertiesRegisteredForMediaProfileUniqueIdentifier:(id)a0;
- (void)removeAllCharacteristicRegistrations;
- (id)removeAllMediaProfileRegistrations;
- (id)removeCharacteristicRegistrationsWithoutAllowedDestinations:(id)a0;
- (id)removeMediaRegistrationsWithoutAllowedDestinations:(id)a0;

@end
