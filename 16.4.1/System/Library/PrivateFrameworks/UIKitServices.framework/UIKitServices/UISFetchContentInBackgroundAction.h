@interface UISFetchContentInBackgroundAction : BSAction

- (void)sendResponse:(id)a0;
- (long long)UIActionType;
- (id)initWithHandler:(id /* block */)a0;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;

@end
