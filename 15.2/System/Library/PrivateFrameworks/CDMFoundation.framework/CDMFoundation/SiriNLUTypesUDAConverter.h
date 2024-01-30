@interface SiriNLUTypesUDAConverter : NSObject

+ (id)convertUserDialogActs:(id)a0;
+ (id)convertUserDialogAct:(id)a0;
+ (void)convertUtteranceAlignment:(id)a0;
+ (id)convertUserAccepted:(id)a0;
+ (id)convertUserRejected:(id)a0;
+ (id)convertUserCancelled:(id)a0;
+ (id)convertUserWantedToRepeat:(id)a0;
+ (id)convertUserAcknowledged:(id)a0;
+ (id)convertUserWantedToProceed:(id)a0;
+ (id)convertUserWantedToPause:(id)a0;
+ (id)convertDelegatedUserDialogAct:(id)a0;
+ (id)convertUserStatedTask:(id)a0;

@end
