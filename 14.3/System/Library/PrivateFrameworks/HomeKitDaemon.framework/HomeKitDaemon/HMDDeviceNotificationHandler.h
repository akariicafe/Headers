@class HMFTimer, NSString, NSMutableDictionary, HMDHome, NSMutableSet, NSUUID;
@protocol HMFLocking;

@interface HMDDeviceNotificationHandler : HMFObject <HMFTimerDelegate> {
    id<HMFLocking> _lock;
}

@property (retain, nonatomic) NSString *destination;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSMutableSet *updatedCharacteristics;
@property (retain, nonatomic) NSMutableDictionary *updatedMediaPropertiesByMediaProfile;
@property (retain, nonatomic) HMFTimer *coalesceTimer;
@property (retain, nonatomic) HMFTimer *delayTimer;
@property (nonatomic) BOOL delaySupported;
@property (retain, nonatomic) NSUUID *notificationUpdateIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)initWithDestination:(id)a0 watchDevice:(BOOL)a1 withRequestIdentifier:(id)a2 home:(id)a3;
- (id)sendNotificationForCharacteristicChanges:(id)a0 withRequestIdentifier:(id)a1;
- (id)sendNotificationForMediaProperties:(id)a0 withRequestIdentifier:(id)a1;
- (id)_beginCoalesce:(BOOL)a0;
- (id)_dispatchNotification;

@end
