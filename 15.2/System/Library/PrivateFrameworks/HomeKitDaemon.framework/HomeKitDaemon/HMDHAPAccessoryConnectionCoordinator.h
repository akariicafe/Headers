@class NSString, HMDHome, NSNotificationCenter;

@interface HMDHAPAccessoryConnectionCoordinator : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDHome *_home;
    NSNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0 notificationCenter:(id)a1;
- (void)handleResidentStatusChanged:(id)a0;
- (void)handleResidentAddRemove:(id)a0;
- (void)handleResidentUpdated:(id)a0;
- (void)handleCurrentResidentChanged:(id)a0;
- (void)handleResidentChangedOnNonResident;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)evaluateAccessoryConnectionStatus;
- (void)_disableDisconnectOnIdleWithAccessoriesAndConnect:(BOOL)a0;
- (void)_enableDisconnectOnIdleWithAccessories;

@end
