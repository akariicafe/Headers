@interface PBBridgeCAReporter : NSObject

+ (void)sendEvent:(id)a0 with:(id)a1;
+ (id)descriptionForSuccessType:(unsigned long long)a0;
+ (id)descriptionForTimingType:(unsigned long long)a0;
+ (void)pushTimingForTypeNamed:(id)a0 withValue:(double)a1;
+ (id)descriptionForCommTimingType:(unsigned long long)a0;
+ (id)stringForSigninPair:(unsigned long long)a0;
+ (id)stringForSigninFollowup:(unsigned long long)a0;
+ (id)stringForSigninEventDaily:(unsigned long long)a0;
+ (id)stringForSigninEventPostPair:(unsigned long long)a0;
+ (void)activationServerRespondedAtPage:(unsigned long long)a0;
+ (void)incrementSuccessType:(unsigned long long)a0;
+ (void)pushTimingType:(unsigned long long)a0 withValue:(double)a1;
+ (void)pushCommunicationTimingType:(unsigned long long)a0 withValue:(double)a1;
+ (void)recordSigninEventPair:(unsigned long long)a0;
+ (void)recordSigninEventFollowup:(unsigned long long)a0;
+ (void)recordSigninEventDaily:(unsigned long long)a0;
+ (void)recordSigninEventPostPair:(unsigned long long)a0;
+ (void)recordAlreadyPairedAlertFired:(BOOL)a0 afterDuration:(double)a1 hasFiredBefore:(BOOL)a2;
+ (void)recordAlreadyPairedAlertLearnedMore:(BOOL)a0;
+ (void)recordAlreadyPairedAlertFiredAndWatchRecovered:(double)a0;
+ (void)recordEndOfLifePhoneAlertPresented:(BOOL)a0;
+ (void)recordEndOfLifePhoneAlertUserResponse:(BOOL)a0;

@end
