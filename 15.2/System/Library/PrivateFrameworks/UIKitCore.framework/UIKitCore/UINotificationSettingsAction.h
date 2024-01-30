@class UNNotification;

@interface UINotificationSettingsAction : BSAction

@property (readonly, copy, nonatomic) UNNotification *notification;

- (id)initWithXPCDictionary:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)initWithNotification:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)UIActionType;

@end
