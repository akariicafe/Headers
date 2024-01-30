@class UILocalNotification, NSString, NSDictionary;

@interface UIHandleLocalNotificationAction : BSAction

@property (readonly, copy, nonatomic) UILocalNotification *notification;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSDictionary *userResponse;

- (id)initWithXPCDictionary:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)_initWithNotification:(id)a0 action:(id)a1 userResponse:(id)a2 type:(long long)a3 withHandler:(id /* block */)a4;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (long long)UIActionType;
- (id)initWithNotification:(id)a0;
- (id)initWithNotification:(id)a0 withHandler:(id /* block */)a1;
- (id)initWithNotification:(id)a0 action:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithNotification:(id)a0 action:(id)a1 userResponse:(id)a2 withHandler:(id /* block */)a3;

@end
