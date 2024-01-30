@class HMHome, HFSelectedUserCollection;

@interface HUPresenceActivationOptionItem : HFItem

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long activationGranularity;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) HFSelectedUserCollection *selectedUsers;

- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)_summaryTitle;
- (id)initWithEventType:(unsigned long long)a0 selectedUsers:(id)a1 activationGranularity:(unsigned long long)a2 style:(unsigned long long)a3 home:(id)a4;

@end
