@class _HMDPendingRegionUpdate, NSUUID, CLLocation, NSDate, HMFMessageDispatcher, NSObject, NSTimeZone, NSString, HMDHomeLocationData, NSSet, HMFUnfairLock, HMDHome, HMFTimer, CLRegion;
@protocol OS_dispatch_queue;

@interface HMDHomeLocationHandler : HMFObject <HMDBatchLocationDelegate, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding>

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSDate *locationUpdateTimestamp;
@property (nonatomic) long long locationAuthorization;
@property (retain, nonatomic) CLRegion *regionAtHome;
@property (retain, nonatomic) CLRegion *regionNearbyHome;
@property (nonatomic) long long regionStateAtHome;
@property (nonatomic) long long regionStateNearbyHome;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (retain, nonatomic) HMFTimer *homeRegionUpdateTimer;
@property (retain, nonatomic) HMFUnfairLock *lock;
@property (retain, nonatomic) _HMDPendingRegionUpdate *pendingAtHomeRegionUpdate;
@property (retain, nonatomic) _HMDPendingRegionUpdate *pendingNearbyHomeRegionUpdate;
@property (nonatomic) double coalesceRegionUpdateIntervalInSeconds;
@property (retain, nonatomic) CLLocation *homeLocationUsingHomeKitAlgorithm;
@property (retain, nonatomic) CLLocation *homeLocationUsingCoreRoutineLOI;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) HMDHomeLocationData *locationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (BOOL)mergeLocationDataForLocalHome:(id)a0 withCloudHome:(id)a1;

- (void)timerDidFire:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)messageDestination;
- (void)dealloc;
- (void)_registerForMessages;
- (void)updateHomeLocation;
- (id)_handleHomeLocationData:(id)a0 message:(id)a1;
- (void)runTransactionWithLocation:(id)a0 updatedTime:(id)a1 source:(long long)a2;
- (void)accessoriesBecomeUnreachable;
- (void)accessoriesBecomeReachable;
- (void)configure:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;
- (void)didDetermineState:(long long)a0 forRegion:(id)a1;
- (void)didDetermineLocation:(id)a0;
- (void)_handleLocationAuthorizationChangedNotification:(id)a0;
- (void)getReachableIPAccessory:(unsigned long long *)a0 btleAccessory:(unsigned long long *)a1 mediaAccessory:(unsigned long long *)a2;
- (void)didDetermineBatchLocation:(id)a0;
- (void)_registerForRegionUpdate;
- (void)_handleLocationAuthorization:(long long)a0;
- (void)_handleRetrieveLocation:(id)a0;
- (BOOL)_canExtractBatchLocations;
- (BOOL)_needToExtractBatchLocations;
- (void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)a0;
- (void)_updateTimeZone:(id)a0;
- (void)_sendLocationUpdate;
- (BOOL)isLocation:(id)a0 closeToLocation:(id)a1;
- (BOOL)isDate:(id)a0 laterThanDate:(id)a1;
- (BOOL)calculateAndUpdateRegionState:(long long)a0;
- (BOOL)updateRegionStateFromLocation:(id)a0;
- (void)coalesceRegionUpdateState:(long long)a0 forRegion:(id)a1;
- (void)_processPendingRegionStateUpdates;
- (id)__initForUnitTesting:(double)a0 home:(id)a1 queue:(id)a2 messageDispatcher:(id)a3 location:(id)a4;
- (void)__simulateAtHomeRegionState:(long long)a0;
- (void)__simulateNearByHomeRegionState:(long long)a0;
- (long long)__getAtHomeCalculatedState;
- (long long)__getNearByHomeCalculatedState;

@end
