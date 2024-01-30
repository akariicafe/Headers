@class NSDate, NSString, CLRegion, NSUUID, HMDHomeLocationData, NSSet, HMFMessageDispatcher, NSObject, NSTimeZone, CLLocation, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDHomeLocationHandler : HMFObject <HMDBatchLocationDelegate, HMDHomeMessageReceiver, NSSecureCoding>

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSDate *locationUpdateTimestamp;
@property (nonatomic) int locationAuthorization;
@property (retain, nonatomic) CLRegion *regionAtHome;
@property (retain, nonatomic) CLRegion *regionNearbyHome;
@property (nonatomic) int regionStateAtHome;
@property (nonatomic) int regionStateNearbyHome;
@property (retain, nonatomic) NSString *isoCountryCode;
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

+ (BOOL)mergeLocationDataForLocalHome:(id)a0 withCloudHome:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_registerForMessages;
- (id)messageDestination;
- (void)encodeWithCoder:(id)a0;
- (void)configure:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;
- (void)updateHomeLocation;
- (void)accessoriesBecomeReachable;
- (void)accessoriesBecomeUnreachable;
- (void)runTransactionWithLocation:(id)a0 updateTime:(id)a1;
- (id)_handleHomeLocationData:(id)a0 message:(id)a1;
- (void)didDetermineState:(long long)a0 forRegion:(id)a1;
- (void)didDetermineLocation:(id)a0;
- (void)_handleLocationAuthorizationChangedNotification:(id)a0;
- (void)didDetermineBatchLocation:(id)a0;
- (void)getReachableIPAccessory:(unsigned long long *)a0 btleAccessory:(unsigned long long *)a1 mediaAccessory:(unsigned long long *)a2;
- (void)_updateTimeZone:(id)a0;
- (void)_handleLocationAuthorization:(int)a0;
- (void)_handleRetrieveLocation:(id)a0;
- (void)_registerForRegionUpdate;
- (BOOL)_canExtractBatchLocations;
- (BOOL)_needToExtractBatchLocations;
- (BOOL)isDate:(id)a0 laterThanDate:(id)a1;
- (BOOL)isLocation:(id)a0 closeToLocation:(id)a1;
- (void)_sendLocationUpdate;
- (void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)a0;

@end
