@interface CDMAnalytics : NSObject

+ (id)constructContextUpdateOutcome:(int)a0 numTurnsRollback:(int)a1 success:(BOOL)a2 locale:(id)a3;
+ (void)recordCDMSetupFailureEvent:(id)a0 withError:(id)a1;
+ (void)recordCDMSetupSuccessEvent:(id)a0;
+ (void)recordContextUpdateOutcome:(int)a0 numTurnsRollback:(int)a1 success:(BOOL)a2 locale:(id)a3;
+ (void)recordGraphFailureEvent:(id)a0 withError:(id)a1;
+ (void)recordGraphSuccessEvent:(id)a0 withTopParserId:(id)a1;
+ (void)recordReceivedNluRequestEvent:(id)a0 withNluRequest:(id)a1;

@end
