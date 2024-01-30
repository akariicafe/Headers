@interface EKAlarmSemanticIdentifierGenerator : NSObject

+ (id)semanticIdentifierForAlarmIsDefault:(BOOL)a0 absoluteDate:(id)a1 relativeOffset:(id)a2 emailAddress:(id)a3 url:(id)a4;
+ (id)semanticIdentifierForAlarm:(id)a0;
+ (id)_stringForAlarmProximity:(long long)a0;

@end
