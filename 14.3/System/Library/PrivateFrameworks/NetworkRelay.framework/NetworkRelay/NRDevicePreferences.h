@class NRDevicePreferencesQuickRelay, NSSet, NRBluetoothLinkPreferences, NRDeviceIdentifier, NSObject;
@protocol OS_xpc_object;

@interface NRDevicePreferences : NSObject

@property (retain, nonatomic) NRDeviceIdentifier *deviceIdentifier;
@property (nonatomic) unsigned long long preferWiFiRequestCount;
@property (nonatomic) unsigned long long quickRelayRequestCount;
@property (retain, nonatomic) NRDevicePreferencesQuickRelay *quickRelayPreference;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NRBluetoothLinkPreferences *internalBluetoothLinkPreferences;
@property (retain, nonatomic) NSSet *internalPolicyTrafficClassifiers;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) BOOL internalDeviceSetupStarted;
@property (nonatomic) BOOL internalDeviceSetupCompleted;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NRBluetoothLinkPreferences *bluetoothLinkPreferences;
@property (readonly, nonatomic) BOOL hasPreferWiFiRequest;
@property (readonly, nonatomic) BOOL hasQuickRelayRequest;
@property (retain, nonatomic) NSSet *policyTrafficClassifiers;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithDeviceIdentifier:(id)a0;
- (id)copyDetailsLocked;
- (void)cancelConnectionLocked;
- (void)restartConnectionLocked;
- (void)deviceSetupStarted;
- (void)deviceSetupCompleted;
- (void)addPreferWiFiRequest;
- (void)removePreferWiFiRequestLocked;
- (void)removePreferWiFiRequest;
- (void)addQuickRelayRequest;
- (void)removeQuickRelayRequestLocked:(BOOL)a0;
- (void)removeQuickRelayRequest;
- (void)removeAllQuickRelayRequests;
- (BOOL)hasPreferencesToSendLocked;
- (void)sendDevicePreferencesLocked;

@end
