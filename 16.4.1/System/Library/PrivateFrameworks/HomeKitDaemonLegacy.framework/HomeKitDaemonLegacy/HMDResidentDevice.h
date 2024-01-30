@class HMDDeviceController, NSUUID, NSString, NSData, HMResidentCapabilities, HMDHome, HMDDevice;
@protocol HMResidentCapabilities, HMDResidentDeviceManager;

@interface HMDResidentDevice : HMFObject <HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDDeviceController *_deviceController;
    BOOL _confirmed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long status;
@property (readonly) NSData *rawCapabilities;
@property (readonly) HMResidentCapabilities *capabilitiesInternal;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HMDDevice *device;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReachable) BOOL reachable;
@property (nonatomic) long long batteryState;
@property (nonatomic, getter=isLowBattery) BOOL lowBattery;
@property (weak, nonatomic) HMDHome *home;
@property (weak, nonatomic) id<HMDResidentDeviceManager> residentDeviceManager;
@property (readonly, nonatomic) unsigned long long legacyResidentCapabilities;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed;
@property (readonly, nonatomic) BOOL supportsSharedEventTriggerActivation;
@property (readonly, nonatomic) BOOL supportsMediaSystem;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsShortcutActions;
@property (readonly, nonatomic) BOOL supportsFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsResidentFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsCustomMediaApplicationDestination;
@property (readonly, nonatomic) id<HMResidentCapabilities> capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)batteryStateAsString:(long long)a0;
+ (id)deriveUUIDFromHomeUUID:(id)a0 deviceUUID:(id)a1;

- (id)initWithModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)privateDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isBlocked;
- (id)shortDescription;
- (id)dumpState;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 identifier:(id)a1;
- (id)descriptionWithPointer:(BOOL)a0;
- (void)__deviceUpdated:(id)a0;
- (void)_handleResidentDeviceUpdateConfirmed:(BOOL)a0;
- (void)_handleResidentDeviceUpdateEnabled:(BOOL)a0;
- (void)_residentDeviceModelUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (BOOL)_updateRawCapabilities:(id)a0;
- (void)configureWithHome:(id)a0;
- (id)deviceController;
- (void)deviceController:(id)a0 didUpdateDevice:(id)a1;
- (id)initWithDeviceController:(id)a0 identifier:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)runtimeState;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;

@end
