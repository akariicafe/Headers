@class NSUUID, NSString, HMDHome, HMFUnfairLock, HMDDeviceController, HMDDevice;
@protocol HMDResidentDeviceManager;

@interface HMDResidentDevice : HMFObject <HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding> {
    HMFUnfairLock *_lock;
    HMDDeviceController *_deviceController;
    BOOL _confirmed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long status;
@property (readonly, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HMDDevice *device;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReachable) BOOL reachable;
@property (nonatomic) long long batteryState;
@property (nonatomic, getter=isLowBattery) BOOL lowBattery;
@property (weak, nonatomic) HMDHome *home;
@property (weak, nonatomic) id<HMDResidentDeviceManager> residentDeviceManager;
@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed;
@property (readonly, nonatomic) BOOL supportsSharedEventTriggerActivation;
@property (readonly, nonatomic) BOOL supportsMediaSystem;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsShortcutActions;
@property (readonly, nonatomic) BOOL supportsFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsResidentFirmwareUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)deriveUUIDFromHomeUUID:(id)a0 deviceUUID:(id)a1;
+ (id)batteryStateAsString:(long long)a0;

- (id)dumpState;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithModel:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)configureWithHome:(id)a0;
- (id)runtimeState;
- (id)initWithDevice:(id)a0 home:(id)a1;
- (void)__deviceUpdated:(id)a0;
- (void)_handleResidentDeviceUpdateEnabled:(BOOL)a0;
- (void)deviceController:(id)a0 didUpdateDevice:(id)a1;
- (id)__initWithDeviceController:(id)a0;
- (id)deviceController;
- (void)_residentDeviceModelUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_handleResidentDeviceUpdateConfirmed:(BOOL)a0;

@end
