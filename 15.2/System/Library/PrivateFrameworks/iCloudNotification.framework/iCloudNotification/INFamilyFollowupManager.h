@interface INFamilyFollowupManager : NSObject

+ (id)_followupManager;
+ (void)synchronizeFollowupWithPayload:(id)a0 altDSID:(id)a1;
+ (void)teardownPendingFollowup;

@end
