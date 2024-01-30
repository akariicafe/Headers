@class HMFTimer, NSUUID, NSString;
@protocol HMDTimerProvider, HMDMediaGroupsAggregateBackupMessageTimerDelegate;

@interface HMDMediaGroupsAggregateBackupMessageTimer : NSObject <HMDTimerProvider, HMFTimerDelegate>

@property (weak) id<HMDTimerProvider> timerProvider;
@property (retain) HMFTimer *timer;
@property (copy) NSUUID *currentMessageIdentifier;
@property unsigned long long attemptCount;
@property (weak) id<HMDMediaGroupsAggregateBackupMessageTimerDelegate> delegate;
@property (readonly, copy) NSUUID *participantAccessoryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)startRetryTimer;
- (id)initWithParticipantAccessoryUUID:(id)a0;
- (id)initWithParticipantAccessoryUUID:(id)a0 timerProvider:(id)a1;
- (void)markAttemptWithMessageIdentifier:(id)a0;
- (double)nextTimeInterval;
- (id)timerWithTimeInterval:(double)a0 options:(unsigned long long)a1;

@end
