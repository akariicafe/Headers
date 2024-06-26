@class TUCallCenter, CUNetInterfaceMonitor, CoreTelephonyClient, RTRoutineManager, NSObject, NSDictionary, FBSDisplayLayoutMonitor, CLLocationManager, NSMutableArray, NSString, CMDeviceOrientationManager, CUWiFiManager, CXCallObserver, NSMutableSet, CUBluetoothClient, NSArray, NSData, CUSystemMonitor, CMMotionActivityManager, CMMotionManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CXCallObserverDelegate, CLLocationManagerDelegate, CoreTelephonyClientDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_monitors;
    struct { unsigned char bytes[6]; } _bluetoothAddress48;
    NSData *_bluetoothAddressData;
    CUBluetoothClient *_bluetoothClient;
    TUCallCenter *_callCenter;
    CXCallObserver *_callObserver;
    int _activeCallCount;
    unsigned int _callFlags;
    struct { int callCountIncomingConnected; int callCountIncomingUnconnected; int callCountOutgoingConnected; int callCountOutgoingUnconnected; } _callInfo;
    BOOL _callStatusObserving;
    int _connectedCallCount;
    int _familyBuddyToken;
    BOOL _familyFailed;
    NSArray *_familyMembers;
    BOOL _familyObserving;
    CUSystemMonitor *_familyPrimaryIPMonitor;
    int _familyUpdatedToken;
    CLLocationManager *_locationManager;
    unsigned int _locationVisitsFlags;
    BOOL _manateeAvailable;
    BOOL _manateeObserving;
    int _fmfDevicesChangedToken;
    int _meDeviceChangedToken;
    int _meDeviceRetryToken;
    NSString *_meDeviceFMFDeviceID;
    NSString *_meDeviceIDSDeviceID;
    NSString *_meDeviceName;
    BOOL _meDeviceIsMe;
    BOOL _meDeviceValid;
    CMMotionActivityManager *_motionActivityManager;
    unsigned int _motionFlags;
    CMMotionManager *_motionManager;
    int _motionOrientation;
    CMDeviceOrientationManager *_orientationManager;
    CUNetInterfaceMonitor *_netInterfaceMonitor;
    unsigned int _netFlags;
    union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } _primaryIPv4Addr;
    union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } _primaryIPv6Addr;
    NSString *_primaryNetworkSignature;
    int _powerSourceToken;
    BOOL _powerUnlimited;
    NSString *_primaryAppleID;
    BOOL _primaryAppleIDActive;
    BOOL _primaryAppleIDIsHSA2;
    int _primaryAppleIDNotifyToken;
    BOOL _primaryAppleIDObserving;
    CoreTelephonyClient *_regionCTClient;
    struct __CTServerConnection { } *_regionCTServerCnx;
    NSString *_regionISOCountryCode;
    NSString *_regionMobileCountryCode;
    RTRoutineManager *_regionRoutineManager;
    NSString *_regionRoutineCountry;
    int _regionRoutineNotifyToken;
    NSString *_regionRoutineState;
    struct { unsigned char bytes[6]; } _rotatingIdentifier48;
    NSData *_rotatingIdentifierData;
    NSObject<OS_dispatch_source> *_rotatingIdentifierTimer;
    BOOL _screenLocked;
    int _screenLockedToken;
    BOOL _screenOn;
    int _screenBlankedToken;
    BOOL _screenSaverActive;
    BOOL _scChangesPending;
    struct __SCDynamicStore { } *_scDynamicStore;
    NSMutableArray *_scInitialKeys;
    NSString *_scKeySystemName;
    NSString *_scPatternNetInterfaceIPv4;
    NSString *_scPatternNetInterfaceIPv6;
    NSArray *_scNotificationKeys;
    NSArray *_scNotificationPatterns;
    NSString *_systemName;
    int _systemLockState;
    int _systemLockStateToken;
    int _systemUIBluetoothNotifyToken;
    unsigned int _systemUIFlags;
    NSDictionary *_systemUIIdentifierMap;
    FBSDisplayLayoutMonitor *_systemUIMonitor;
    BOOL _firstUnlocked;
    int _firstUnlockToken;
    NSObject<OS_dispatch_source> *_firstUnlockTimer;
    CUWiFiManager *_wifiManager;
    unsigned int _wifiFlags;
    int _wifiState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didVisit:(id)a1;
- (void)_powerUnlimitedMonitorStart;
- (void)locationManager:(id)a0 didDepart:(id)a1 completion:(id /* block */)a2;
- (void)_screenSaverMonitorStart;
- (void)_screenLockedChanged;
- (struct { int x0; int x1; int x2; int x3; })_callInfoUncached;
- (void)_callMonitorStop;
- (void)_systemUIMonitorStart;
- (int)_connectedCallCountUnached;
- (unsigned int)_callFlagsUncached;
- (void)_netInterfaceMonitorStop;
- (void)_wifiMonitorStateChanged:(BOOL)a0;
- (void)_regionMonitorStart;
- (void)_callInfoChanged;
- (void)_primaryAppleIDChanged:(id)a0;
- (void)_regionMonitorUpdateLocationsOfInterest:(id)a0;
- (void)_firstUnlockMonitorCheck:(BOOL)a0;
- (void)_locationVisitsMonitorStart;
- (void)_regionMonitorGet;
- (void)_locationVisitsMonitorStop;
- (void)_screenChanged:(BOOL)a0;
- (void)_meDeviceCheckCompletion:(id)a0 error:(id)a1 firstCheck:(BOOL)a2;
- (void)_familyMonitorStart;
- (void)_manateeMonitorStart;
- (void)_update;
- (BOOL)_hasMonitorPassingTest:(id /* block */)a0;
- (void)_invokeBlock:(id /* block */)a0 passingTest:(id /* block */)a1;
- (void)_systemConfigUpdateNotifications;
- (void)_regionMonitorUpdateMCC:(id)a0;
- (void)_locationsOfInterestDidChange:(BOOL)a0;
- (void)_systemUIMonitorChangedFlags:(unsigned int)a0;
- (void)_manateeMonitorStop;
- (void)_systemConfigChanged:(id)a0 initial:(BOOL)a1;
- (void)locationManager:(id)a0 didArrive:(id)a1 completion:(id /* block */)a2;
- (void)_systemConfigSystemNameChanged:(BOOL)a0;
- (void)addMonitor:(id)a0 completion:(id /* block */)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)_rotatingIdentifierMonitorStop;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)_regionMonitorStop;
- (void)cellMonitorUpdate:(id)a0 info:(id)a1;
- (void)_primaryAppleIDChanged2:(BOOL)a0;
- (void)_primaryAppleIDMonitorStop;
- (void)_meDeviceCheckStart:(BOOL)a0;
- (void)_wifiMonitorStop;
- (int)_activeCallCountUnached;
- (void)_bluetoothAddressMonitorStart;
- (void)_familyGetMembers:(BOOL)a0;
- (void)_callMonitorStart;
- (void)_screenOnMonitorStartiOS;
- (void)_systemConfigNetInterfaceChanged:(id)a0 initial:(BOOL)a1;
- (void)_manateeChanged:(id)a0;
- (id)_primaryAppleIDAccount;
- (void)_familyNetworkChanged;
- (void)_motionMonitorStop;
- (void)_screenLockedMonitorStart;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)_motionMonitorHandleActivity:(id)a0;
- (void)_systemLockStateMonitorStart;
- (void)_meDeviceMonitorStart;
- (void)_netInterfaceMonitorStart;
- (void)_callCenterStatusChanged:(id)a0;
- (void)_bluetoothAddressMonitorStop;
- (void)updateWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)_motionMonitorOrientationChanged:(id)a0;
- (void)_primaryAppleIDMonitorStart;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)_rotatingIdentifierMonitorStart;
- (void)_rotatingIdentifierTimerFired;
- (void)_systemLockStateUpdate:(BOOL)a0;
- (void)_screenSaverMonitorStop;
- (void)_systemConfigUpdateKeyPtr:(id *)a0 name:(id)a1 enabled:(BOOL)a2 creator:(id /* block */)a3;
- (void)removeMonitor:(id)a0;
- (void)_screenOnMonitorStart;
- (id)init;
- (void)_wifiMonitorStart;
- (void)_motionMonitorStart;
- (void)_screenOnMonitorStop;
- (void)_firstUnlockMonitorStop;
- (void)_firstUnlockMonitorStart;
- (void)_familyMonitorStop;
- (void)_screenLockedMonitorStop;
- (void)_systemLockStateMonitorStop;
- (void)_familyUpdated:(id)a0;
- (void)_systemUIMonitorStop;
- (void)_powerUnlimitedMonitorStop;
- (void)_locationVisitUpdate:(id)a0 arrived:(BOOL)a1;
- (void).cxx_destruct;
- (void)_meDeviceMonitorStop;

@end
