@class UNNotification;

@interface UIWillPresentNotificationAction : BSAction

@property (readonly, retain, nonatomic) UNNotification *notification;
@property (readonly, nonatomic) BOOL isDeliverable;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isRemote;

- (id)initWithXPCDictionary:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithNotification:(id)a0 deliverable:(BOOL)a1 timeout:(double)a2 withHandler:(id /* block */)a3;
- (id)initWithNotification:(id)a0 timeout:(double)a1 withHandler:(id /* block */)a2;
- (id)_trigger;

@end
