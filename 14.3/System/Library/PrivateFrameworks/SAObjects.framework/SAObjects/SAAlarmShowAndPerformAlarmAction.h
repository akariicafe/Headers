@protocol SAAlarmAlarmAction;

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand

@property (retain, nonatomic) id<SAAlarmAlarmAction> alarmAction;

+ (id)showAndPerformAlarmAction;
+ (id)showAndPerformAlarmActionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
