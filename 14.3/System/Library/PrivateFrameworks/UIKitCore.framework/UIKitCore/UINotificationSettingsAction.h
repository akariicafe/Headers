@class UNNotification;

@interface UINotificationSettingsAction : BSAction

@property (readonly, copy, nonatomic) UNNotification *notification;

- (id)initWithXPCDictionary:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithNotification:(id)a0;

@end
