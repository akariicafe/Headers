@interface UIAccessoryBackgroundTaskAction : BSAction

- (long long)UIActionType;
- (id)init;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;

@end
