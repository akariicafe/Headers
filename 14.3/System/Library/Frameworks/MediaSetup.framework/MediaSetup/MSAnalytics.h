@interface MSAnalytics : NSObject

+ (void)sendServiceEvent:(id)a0 withName:(id)a1;
+ (void)sendSetupEvent:(id)a0;
+ (void)sendRemovalEvent:(id)a0;
+ (void)sendConfigEvent:(id)a0;
+ (void)sendUserRegisteredNumberOfServices:(int)a0;
+ (void)sendPlayIntent;
+ (void)sendPrimaryUserUpdatedOn:(id)a0;

@end
