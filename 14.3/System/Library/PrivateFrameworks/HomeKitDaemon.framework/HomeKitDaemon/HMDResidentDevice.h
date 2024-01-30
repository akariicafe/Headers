@class HMDResidentDeviceManager, NSUUID, NSString, HMDHome, HMFUnfairLock, HMDDeviceController, HMDDevice;

@interface HMDResidentDevice : HMFObject <HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding> {
    HMFUnfairLock *_lock;
    HMDDeviceController *_deviceController;
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
@property (weak, nonatomic) HMDResidentDeviceManager *residentDeviceManager;
@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed;
@property (readonly, nonatomic) BOOL supportsSharedEventTriggerActivation;
@property (readonly, nonatomic) BOOL supportsMediaSystem;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsShortcutActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;
+ (id)batteryStateAsString:(long long)a0;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithDevice:(id)a0;
- (id)initWithModel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)configureWithHome:(id)a0;
- (id)runtimeState;
- (void)__deviceUpdated:(id)a0;
- (void)_handleResidentDeviceUpdateEnabled:(BOOL)a0;
- (void)deviceController:(id)a0 didUpdateDevice:(id)a1;
- (id)__initWithDeviceController:(id)a0;
- (id)deviceController;
- (void)_residentDeviceModelUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_handleResidentDeviceUpdateConfirmed:(BOOL)a0;

@end
