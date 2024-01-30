@class NSSet, NRDevicePreferencesQuickRelay, NRBluetoothLinkPreferences, NRDeviceIdentifier, NSObject;
@protocol OS_xpc_object;

@interface NRDevicePreferences : NSObject {
    BOOL _internalDeviceSetupStarted;
    BOOL _internalDeviceSetupCompleted;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _preferWiFiRequestCount;
    unsigned long long _quickRelayRequestCount;
    NRDevicePreferencesQuickRelay *_quickRelayPreference;
    NSObject<OS_xpc_object> *_connection;
    NRBluetoothLinkPreferences *_internalBluetoothLinkPreferences;
    NSSet *_internalPolicyTrafficClassifiers;
    unsigned long long _identifier;
}

@property (retain, nonatomic) NRDeviceIdentifier *deviceIdentifier;
@property (retain, nonatomic) NRBluetoothLinkPreferences *bluetoothLinkPreferences;
@property (readonly, nonatomic) BOOL hasPreferWiFiRequest;
@property (readonly, nonatomic) BOOL hasQuickRelayRequest;
@property (retain, nonatomic) NSSet *policyTrafficClassifiers;

- (id)description;
- (id)initWithDeviceIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)deviceSetupStarted;
- (void)deviceSetupCompleted;
- (void)addPreferWiFiRequest;
- (void)removePreferWiFiRequest;
- (void)addQuickRelayRequest;
- (void)removeQuickRelayRequest;
- (void)removeAllQuickRelayRequests;

@end
