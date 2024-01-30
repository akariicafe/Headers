@class NSString, NSConditionLock, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface GEOTelephonyInfo : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    struct __CTServerConnection { } *_telephonyConnection;
    CoreTelephonyClient *_telephonyClient;
    NSConditionLock *_carrierLock;
    NSConditionLock *_deviceAuthLock;
    NSConditionLock *_mapsAuthLock;
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    NSString *_carrier;
    BOOL _deviceAuthorized;
    BOOL _mapsAuthorized;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInfo;
+ (BOOL)hasCellularCapability;

- (id)cellularCarrierIfAvailable;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void)dataSettingsChanged:(id)a0;
- (int)cellularDataStateIfAvailable;
- (id)isMapsAuthorizedForCellularIfAvailable;
- (void).cxx_destruct;
- (id)init;
- (void)isMapsAuthorizedForCellular:(id)a0 result:(id /* block */)a1;
- (void)setupClient;
- (id)isDeviceAuthorizedForCellularIfAvailable;
- (void)_updateMapsAuthed;

@end
