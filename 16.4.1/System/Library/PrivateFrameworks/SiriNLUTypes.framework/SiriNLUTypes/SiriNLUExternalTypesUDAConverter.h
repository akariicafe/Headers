@interface SiriNLUExternalTypesUDAConverter : NSObject

+ (id)convertFromUserWantedToProceed:(id)a0;
+ (id)convertFromDelegatedUserDialogAct:(id)a0;
+ (id)convertFromReferenceContext:(id)a0;
+ (id)convertFromRewriteMessage:(id)a0;
+ (id)convertFromRewriteMessages:(id)a0;
+ (id)convertFromUserAccepted:(id)a0;
+ (id)convertFromUserAcknowledged:(id)a0;
+ (id)convertFromUserCancelled:(id)a0;
+ (id)convertFromUserDialogAct:(id)a0;
+ (id)convertFromUserDialogActs:(id)a0;
+ (id)convertFromUserRejected:(id)a0;
+ (id)convertFromUserStatedTask:(id)a0;
+ (id)convertFromUserWantedToPause:(id)a0;
+ (id)convertFromUserWantedToRepeat:(id)a0;

@end
