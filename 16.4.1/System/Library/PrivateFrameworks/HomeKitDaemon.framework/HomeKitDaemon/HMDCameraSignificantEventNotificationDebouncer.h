@class HMFTimer, NSMutableDictionary, NSString;

@interface HMDCameraSignificantEventNotificationDebouncer : HMFObject <HMFTimerDelegate, HMFLogging>

@property (readonly) NSMutableDictionary *lastDateNotifiedByPersonIdentifier;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) HMFTimer *cleanupTimer;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) double distinctPersonDebounceTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
