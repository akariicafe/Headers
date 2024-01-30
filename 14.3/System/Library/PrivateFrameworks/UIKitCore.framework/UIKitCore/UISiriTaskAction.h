@class AFSiriTask;

@interface UISiriTaskAction : BSAction

@property (readonly, retain, nonatomic) AFSiriTask *payload;

- (id)initWithPayload:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (long long)UIActionType;

@end
