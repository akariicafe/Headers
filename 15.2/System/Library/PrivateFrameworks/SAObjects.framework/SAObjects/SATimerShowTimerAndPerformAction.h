@protocol SATimerTimerAction;

@interface SATimerShowTimerAndPerformAction : SAUISnippet

@property (retain, nonatomic) id<SATimerTimerAction> timerAction;

+ (id)showTimerAndPerformAction;
+ (id)showTimerAndPerformActionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
