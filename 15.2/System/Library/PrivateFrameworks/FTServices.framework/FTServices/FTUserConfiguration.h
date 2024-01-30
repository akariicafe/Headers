@class NSArray, NSMutableDictionary, NSNumber;

@interface FTUserConfiguration : NSObject {
    NSMutableDictionary *_cellularDataAvailableCache;
    NSMutableDictionary *_wifiAllowedCache;
    struct network_usage_policy_client_s { } *_usageClient;
}

@property (nonatomic) struct __CTServerConnection { } *ctServerConnection;
@property (retain, nonatomic) NSMutableDictionary *nonBTAllowedCache;
@property (nonatomic) BOOL shouldCacheCTConnection;
@property (readonly, nonatomic) BOOL _nonWifiFaceTimeEntitled;
@property (nonatomic) BOOL cellularFaceTimeEnabled;
@property (nonatomic) BOOL allowAnyNetwork;
@property (copy, nonatomic) NSArray *selectedPhoneNumberRegistrationSubscriptionLabels;
@property (readonly, copy, nonatomic) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;
@property (nonatomic) BOOL isDeviceInDualPhoneIdentityMode;
@property (nonatomic) BOOL isDeviceInManualPhoneSelectionMode;

+ (id)sharedInstance;

- (BOOL)nonBluetoothAllowedForBundleId:(id)a0;
- (void)_setupUsageHandlerIfNeeded;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)a0;
- (BOOL)_getNonBluetoothDataAllowedForBundleID:(id)a0;
- (void)_clearCaches;
- (void).cxx_destruct;
- (BOOL)_adequateInternalOrCarrierInstall;
- (BOOL)_getCellularDataEnabledForBundleID:(id)a0;
- (id)init;
- (BOOL)_getWifiDataAllowedForBundleID:(id)a0;
- (BOOL)wifiAllowedForBundleId:(id)a0;
- (void)_setAppCellularDataEnabled:(BOOL)a0;
- (void)dealloc;
- (BOOL)cellularDataEnabledForBundleId:(id)a0;

@end
