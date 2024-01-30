@class HMFUnfairLock, NSString, HMDAccessoryFirmwareUpdateConcurrencyLogEventManager, HMDHomeManager, NSURL, NSMutableDictionary, NSMapTable, UARPController;
@protocol HMDAccessoryFirmwareUpdateManagerWingman;

@interface HMDAccessoryFirmwareUpdateManager : NSObject <HMFLogging, UARPControllerDelegateProtocol> {
    HMFUnfairLock *_lock;
}

@property (readonly, weak) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSMutableDictionary *activeSessions;
@property (readonly) id<HMDAccessoryFirmwareUpdateManagerWingman> wingman;
@property (retain, nonatomic) NSMapTable *registeredAccessories;
@property (retain, nonatomic) NSMutableDictionary *accessoryRetries;
@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *logEventManager;
@property (readonly, nonatomic) long long defaultUpdateAssetSource;
@property (readonly, nonatomic) UARPController *uarpController;
@property (readonly, nonatomic) NSURL *documentationPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (void)removeSession:(id)a0;
- (id)sessionForAccessory:(id)a0;
- (void)registerAccessory:(id)a0;
- (void)unregisterAccessory:(id)a0;
- (void)changeAccessory:(id)a0 source:(long long)a1 path:(id)a2 documentationPath:(id)a3;
- (void)assetAvailablityUpdateForAccessoryID:(id)a0 assetID:(id)a1;
- (BOOL)isFirmwareUpdateRetryAllowedForAccessory:(id)a0 forAsset:(id)a1;
- (BOOL)checkForUpdateForAccessory:(id)a0;
- (void)resetFirmwareUpdateAccessoryRetryTracking:(id)a0 forAsset:(id)a1;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (void)firmwareUpdateResult:(id)a0 vendorSpecificStatus:(unsigned int)a1 error:(id)a2;
- (void)firmwareStagingProgress:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (void)firmwareStagingComplete:(id)a0 assetID:(id)a1 withStatus:(unsigned long long)a2;
- (id)initWithHomeManager:(id)a0 wingman:(id)a1;
- (void)handleRegisterAccessory:(id)a0;
- (void)handleUnregisterAccessory:(id)a0;
- (void)registerAccessory:(id)a0 source:(long long)a1 path:(id)a2;
- (id)UARPAccessoryForHMDAccessory:(id)a0;
- (id)sessionForUARPAccessory:(id)a0;
- (id)findHMDHAPAccessoryWithUARPAccessory:(id)a0;
- (BOOL)hasAccessoryUsedAllFirmwareUpdateRetries:(id)a0 forAsset:(id)a1;
- (id)addSessionForUARPAccessory:(id)a0;

@end
