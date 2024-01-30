@protocol SAAlarmAlarmAction;

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand

@property (retain, nonatomic) id<SAAlarmAlarmAction> alarmAction;

+ (id)showAndPerformAlarmAction;
+ (id)showAndPerformAlarmActionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
