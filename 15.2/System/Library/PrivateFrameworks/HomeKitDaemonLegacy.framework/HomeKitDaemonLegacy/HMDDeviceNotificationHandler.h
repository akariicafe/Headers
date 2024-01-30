@class HMFTimer, NSString, NSMutableDictionary, HMDHome, NSMutableArray;
@protocol HMFLocking;

@interface HMDDeviceNotificationHandler : HMFObject <HMFTimerDelegate> {
    id<HMFLocking> _lock;
}

@property (retain, nonatomic) NSString *destination;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSMutableArray *updatedCharacteristicsTuples;
@property (retain, nonatomic) NSMutableDictionary *updatedMediaPropertiesByMediaProfile;
@property (retain, nonatomic) HMFTimer *coalesceTimer;
@property (retain, nonatomic) HMFTimer *delayTimer;
@property (nonatomic) BOOL delaySupported;
@property (retain, nonatomic) NSString *notificationUpdateIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)sendNotificationForMediaProperties:(id)a0 withRequestIdentifier:(id)a1 notificationUpdateIdentifier:(id)a2;
- (id)initWithDestination:(id)a0 watchDevice:(BOOL)a1 withRequestIdentifier:(id)a2 home:(id)a3;
- (void)sendNotificationForCharacteristicChanges:(id)a0 withRequestIdentifier:(id)a1 notificationUpdateIdentifier:(id)a2 broadcast:(BOOL)a3;
- (void)_beginCoalesce:(BOOL)a0;
- (void)_dispatchNotification;

@end
