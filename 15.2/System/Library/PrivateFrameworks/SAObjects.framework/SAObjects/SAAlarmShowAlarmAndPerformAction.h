@protocol SAAlarmAlarmAction;

@interface SAAlarmShowAlarmAndPerformAction : SAUISnippet

@property (retain, nonatomic) id<SAAlarmAlarmAction> alarmAction;

+ (id)showAlarmAndPerformAction;
+ (id)showAlarmAndPerformActionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
