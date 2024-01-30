@interface CSPowerLogger : NSObject

+ (id)sharedPowerLogger;

- (void)powerWithNumFalseWakeup:(unsigned long long)a0 withDuration:(double)a1;
- (void)powerLogHSEnabled:(BOOL)a0;
- (void)powerLogLanguage:(id)a0;
- (void)powerLogHSModel:(id)a0;
- (void)powerLogVoiceTriggerStart;
- (void)powerLogVoiceTriggerStop;
- (void)_borealisPowerlog:(id)a0;

@end
