@class HMUser;

@interface HUAnnounceNotificationSettingsItem : HFItem

@property (readonly, nonatomic) unsigned long long notificationMode;
@property (readonly, nonatomic) HMUser *user;
@property (readonly, nonatomic) unsigned long long sortOrder;

+ (unsigned long long)sortOrderForMode:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)_notificationModeToString:(unsigned long long)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithNotificationMode:(unsigned long long)a0 user:(id)a1;

@end
