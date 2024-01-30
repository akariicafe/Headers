@class NSString, NSUUID, HMResidentCapabilities, NSObject, HMAccessoryCapabilities;
@protocol OS_dispatch_queue, HMDCapabilitiesControllerDataSource;

@interface HMDCapabilitiesController : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_homeUUID;
    NSUUID *_accessoryUUID;
    HMAccessoryCapabilities *_currentAccessoryCapabilitiesInternal;
    HMResidentCapabilities *_currentResidentCapabilitiesInternal;
    NSObject<OS_dispatch_queue> *_queue;
    id<HMDCapabilitiesControllerDataSource> _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (id)initWithQueue:(id)a0 dataSource:(id)a1;
- (void).cxx_destruct;
- (BOOL)areCurrentAccessoryCapabilitiesPresentAndDifferent:(id)a0;
- (BOOL)areCurrentResidentCapabilitiesPresentAndDifferent:(id)a0;
- (id)currentAccessoryCapabilities;
- (void)currentAccessoryDidBecomeAvailable;
- (id)currentResidentCapabilities;
- (void)didFinishConfiguringHomes;
- (void)didRemoveCurrentAccessory:(id)a0;
- (id)encodedCurrentAccessoryCapabilities;
- (id)encodedCurrentResidentCapabilities;
- (void)updateCurrentAccessoryCapabilities;

@end
