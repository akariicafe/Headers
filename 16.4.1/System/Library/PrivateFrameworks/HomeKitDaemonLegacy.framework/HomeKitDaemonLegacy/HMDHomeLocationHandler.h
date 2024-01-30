@class _HMDPendingRegionUpdate, NSUUID, CLLocation, NSDate, HMFMessageDispatcher, NSObject, NSTimeZone, NSString, HMDHomeLocationData, NSSet, HMDHome, HMFTimer, CLRegion;
@protocol OS_dispatch_queue;

@interface HMDHomeLocationHandler : HMFObject <HMDBatchLocationDelegate, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

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
@property (nonatomic) BOOL firstAccessoryReachable;
@property (retain, nonatomic) HMFTimer *homeRegionUpdateTimer;
@property (retain, nonatomic) _HMDPendingRegionUpdate *pendingAtHomeRegionUpdate;
@property (retain, nonatomic) _HMDPendingRegionUpdate *pendingNearbyHomeRegionUpdate;
@property (nonatomic) double coalesceRegionUpdateIntervalInSeconds;
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

- (void)timerDidFire:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (id)messageDestination;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (long long)__getAtHomeCalculatedState;
- (long long)__getNearByHomeCalculatedState;
- (id)__initForUnitTesting:(double)a0 home:(id)a1 queue:(id)a2 messageDispatcher:(id)a3 location:(id)a4;
- (void)__simulateAtHomeRegionState:(long long)a0;
- (void)__simulateNearByHomeRegionState:(long long)a0;
- (BOOL)_canExtractBatchLocations;
- (void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)a0;
- (id)_handleHomeLocationData:(id)a0 message:(id)a1;
- (id)_handleHomeLocationDataForHH2:(id)a0 fromMessage:(id)a1;
- (void)_handleLocationAuthorization:(long long)a0;
- (void)_handleLocationAuthorizationChangedNotification:(id)a0;
- (void)_handleRetrieveLocation:(id)a0;
- (BOOL)_needToExtractBatchLocations;
- (void)_processPendingRegionStateUpdates;
- (void)_registerForRegionUpdate;
- (void)_sendLocationUpdateToClients;
- (BOOL)_shouldRegisterForSignificantRegion;
- (void)_updateTimeZone:(id)a0;
- (void)accessoriesBecomeReachable;
- (void)accessoriesBecomeUnreachable;
- (BOOL)calculateAndUpdateRegionState:(long long)a0;
- (void)coalesceRegionUpdateState:(long long)a0 forRegion:(id)a1;
- (void)configure:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;
- (void)didDetermineBatchLocation:(id)a0;
- (void)didDetermineLocation:(id)a0;
- (void)didDetermineState:(long long)a0 forRegion:(id)a1;
- (void)getReachableIPAccessory:(unsigned long long *)a0 btleAccessory:(unsigned long long *)a1 mediaAccessory:(unsigned long long *)a2;
- (BOOL)isDate:(id)a0 laterThanDate:(id)a1;
- (BOOL)isLocation:(id)a0 closeToLocation:(id)a1;
- (BOOL)isNewHomeLocationTooCloseToPreviousLocation:(id)a0 newLocation:(id)a1;
- (void)runTransactionWithLocation:(id)a0 updatedTime:(id)a1 source:(long long)a2;
- (BOOL)shouldUpdateLocationFromLocationData:(id)a0;
- (void)updateHomeLocation;
- (void)updateHomeLocationFromCoreRoutine;
- (BOOL)updateRegionStateFromLocation:(id)a0;

@end
