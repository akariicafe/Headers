@interface MSAnalytics : NSObject

+ (void)sendSetupEvent:(id)a0;
+ (void)sendPlayIntent:(BOOL)a0;
+ (void)sendConfigEvent:(id)a0;
+ (void)sendPrimaryUserUpdatedOn:(id)a0;
+ (void)sendRemovalEvent:(id)a0;
+ (void)sendServiceEvent:(id)a0;
+ (void)sendSeviceRequestLapseEvent:(id)a0;
+ (void)sendUserRegisteredNumberOfServices:(int)a0;

@end
