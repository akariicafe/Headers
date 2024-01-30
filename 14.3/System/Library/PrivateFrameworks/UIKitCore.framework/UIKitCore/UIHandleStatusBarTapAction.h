@interface UIHandleStatusBarTapAction : BSAction

@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) int statusBarStyleOverride;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (long long)UIActionType;
- (id)initWithStatusBarStyle:(long long)a0;
- (id)initWithStatusBarStyleOverride:(int)a0;
- (id)initWithStatusBarStyle:(long long)a0 andStatusBarStyleOverride:(int)a1;

@end
