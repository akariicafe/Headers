@interface CSFVoiceTriggerEventInfoSelfLogger : NSObject

+ (id)sharedLogger;

- (void)logStartEventWithFirstPassStartedInfo:(id)a0 withMHUUID:(id)a1;
- (void)logCancelledEventWithMHUUID:(id)a0;
- (void)logRejectEventWithVTEI:(id)a0 withMHUUID:(id)a1 withSecondPassResult:(unsigned long long)a2;
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id /* block */)a0;
- (void)logTriggerEventWithVTEI:(id)a0 withMHUUID:(id)a1;
- (void)logTwoShotDetectedWithMHUUID:(id)a0;
- (void)logTwoShotStartEventWithPromptType:(unsigned int)a0 withMHUUID:(id)a1;
- (void)logTwoShotEndEventWithSuppresedAlert:(BOOL)a0 withTimedOut:(BOOL)a1 withMHUUID:(id)a2;

@end
