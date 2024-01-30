@class CSFCircularEventsCacheBuffer, NSObject;
@protocol OS_dispatch_queue;

@interface CSFVoiceTriggerEventInfoSelfLoggerDarwin : CSFVoiceTriggerEventInfoSelfLogger

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSFCircularEventsCacheBuffer *firstPassEvents;
@property (retain, nonatomic) CSFCircularEventsCacheBuffer *rejectEvents;
@property (retain, nonatomic) CSFCircularEventsCacheBuffer *cancelledEvents;

- (id)init;
- (void).cxx_destruct;
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id /* block */)a0;
- (void)logCancelledEventWithMHUUID:(id)a0;
- (void)logRejectEventWithVTEI:(id)a0 withMHUUID:(id)a1 withSecondPassResult:(unsigned long long)a2;
- (void)logSiriLaunchCompletedWithVoiceTriggerEventInfo:(id)a0;
- (void)logSiriLaunchStartedWithVoiceTriggerEventInfo:(id)a0;
- (void)logStartEventWithFirstPassStartedInfo:(id)a0 withMHUUID:(id)a1;
- (void)logTriggerEventWithVTEI:(id)a0 withMHUUID:(id)a1;
- (void)logTwoShotDetectedWithMHUUID:(id)a0;
- (void)logTwoShotEndEventWithSuppresedAlert:(BOOL)a0 withTimedOut:(BOOL)a1 withMHUUID:(id)a2;
- (void)logTwoShotStartEventWithPromptType:(unsigned int)a0 withMHUUID:(id)a1;

@end
