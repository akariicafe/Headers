@protocol SATimerTimerAction;

@interface SATimerShowAndPerformTimerAction : SABaseClientBoundCommand

@property (retain, nonatomic) id<SATimerTimerAction> timerAction;

+ (id)showAndPerformTimerAction;
+ (id)showAndPerformTimerActionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
