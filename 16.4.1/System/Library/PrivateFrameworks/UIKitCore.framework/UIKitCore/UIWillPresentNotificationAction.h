@class UNNotification;

@interface UIWillPresentNotificationAction : BSAction

@property (readonly, retain, nonatomic) UNNotification *notification;
@property (readonly, nonatomic) BOOL isDeliverable;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isRemote;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (long long)UIActionType;
- (id)_trigger;
- (void).cxx_destruct;
- (id)initWithNotification:(id)a0 deliverable:(BOOL)a1 timeout:(double)a2 withHandler:(id /* block */)a3;
- (id)initWithNotification:(id)a0 timeout:(double)a1 withHandler:(id /* block */)a2;

@end
