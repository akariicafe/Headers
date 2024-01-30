@interface CALNTriggeredEventNotificationSourceClientIdentifierUtilities : NSObject

+ (id)_characterSetForEncodingIdentifierComponents;
+ (id)alarmIDForSourceClientIdentifier:(id)a0;
+ (void)eventID:(id *)a0 andAlarmID:(id *)a1 fromSourceClientIdentifier:(id)a2;
+ (id)eventIDForSourceClientIdentifier:(id)a0;
+ (id)sourceClientIdentifierForEventID:(id)a0 alarmID:(id)a1;

@end
