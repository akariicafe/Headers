@class NSMutableSet, HMAccessoryNetworkProtectionGroup;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *networkProtectionModeOptionItems;
@property (readonly, copy, nonatomic) HMAccessoryNetworkProtectionGroup *group;

- (void).cxx_destruct;
- (id)init;
- (id)initWithGroup:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;

@end
