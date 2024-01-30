@class NSMutableDictionary, NSString, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface HMDDoorbellPressTracker : HMFObject <HMFLogging>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain) NSMutableDictionary *dateOfLastDoorbellPressByAccessoryUUID;
@property (retain) NSMutableDictionary *registrationsByAccessoryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0 notificationCenter:(id)a1;
- (void)startTrackingPressesForDoorbellAccessory:(id)a0 registration:(id)a1;
- (void)stopTrackingPressesForDoorbellAccessory:(id)a0 registration:(id)a1;
- (BOOL)doorbellPressInDateInterval:(id)a0 doorbellAccessory:(id)a1;
- (void)handleCharacteristicsValueUpdatedNotification:(id)a0;
- (void)_handleCharacteristicsValueUpdatedNotification:(id)a0;

@end
