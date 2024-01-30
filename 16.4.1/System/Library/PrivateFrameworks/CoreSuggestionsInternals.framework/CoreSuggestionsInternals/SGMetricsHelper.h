@interface SGMetricsHelper : NSObject

+ (void)recordConversationTurnWithDetail:(id)a0 received:(BOOL)a1 throughApp:(id)a2 withStore:(id)a3;
+ (void)_recordConversationTurnWithDetail:(id)a0 received:(BOOL)a1 throughApp:(id)a2 withStore:(id)a3;
+ (id)asyncQueue;

@end
