@class NSString;

@interface SOSCoreAnalyticsReporter : NSObject <SOSCoreAnalyticsReporting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)SOSCoordinationDeviceString:(long long)a0;
+ (void)_AnalyticsSendEventLazy:(id)a0 data:(id)a1;
+ (BOOL)_firstPartyEnablementForTrigger:(long long)a0;
+ (BOOL)_thirdPartyEnablementForTrigger:(long long)a0;
+ (BOOL)isSensitiveTrigger:(long long)a0;

- (void)reportSOSCancelationTimeout:(long long)a0;
- (void)reportSOSEvent:(id)a0 callDuration:(long long)a1 isHandoffTrigger:(BOOL)a2 onWristState:(long long)a3;
- (void)reportSOSRejectedWithTrigger:(long long)a0 currentTriggerMechanism:(long long)a1;
- (void)reportSOSRestingResponse:(long long)a0 restingResponse:(long long)a1 hasMedicalID:(BOOL)a2;
- (void)reportSOSTriggerHandoff:(long long)a0 source:(long long)a1 destination:(long long)a2 result:(long long)a3;
- (void)reportSOSTriggered:(long long)a0;
- (void)reportSOSUserCancelled:(long long)a0 lastFlowState:(long long)a1 countdownValue:(long long)a2;

@end
