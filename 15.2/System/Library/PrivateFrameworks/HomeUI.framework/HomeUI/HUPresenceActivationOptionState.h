@class HUPresenceActivationOptionItem, HFTransformItemProvider;

@interface HUPresenceActivationOptionState : NSObject

@property (readonly, nonatomic) HFTransformItemProvider *userOptionItemProvider;
@property (readonly, nonatomic) HUPresenceActivationOptionItem *activationOptionItem;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) unsigned long long activationGranularity;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUserOptionItemProvider:(id)a0 activationOptionItem:(id)a1;

@end
