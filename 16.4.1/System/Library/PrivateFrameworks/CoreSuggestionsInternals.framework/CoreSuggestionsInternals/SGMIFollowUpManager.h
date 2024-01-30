@interface SGMIFollowUpManager : NSObject

+ (id)_analyzeFeatureVector:(id)a0 withRegExpDictionary:(id)a1 forOutgoingMail:(BOOL)a2 withDetectedLanguage:(id)a3 withRegExLanguage:(id)a4 withCustomTimeRange:(BOOL)a5;
+ (id)_analyzeForFollowUpMailWithBody:(id)a0 isSent:(BOOL)a1 messageId:(id)a2 date:(id)a3;
+ (id)analyzeBody:(id)a0 forLanguage:(id)a1 forDate:(id)a2 withCustomTimeRange:(BOOL)a3;
+ (id)analyzeFeatureVector:(id)a0;
+ (id)analyzeForFollowUpMailWithBody:(id)a0 isSent:(BOOL)a1 messageId:(id)a2 date:(id)a3;
+ (id)analyzeIncomingMailFeatureVector:(id)a0;
+ (id)analyzeOutgoingMailFeatureVector:(id)a0;
+ (id)identifyFollowUpWarningFromSubject:(id)a0 body:(id)a1 date:(id)a2;
+ (id)identifyFollowUpWarningFromSubject:(id)a0 content:(id)a1;
+ (void)logFollowUpStatsAndSetting;
+ (void)reportUserEngagement:(long long)a0 forWarning:(id)a1;

@end
