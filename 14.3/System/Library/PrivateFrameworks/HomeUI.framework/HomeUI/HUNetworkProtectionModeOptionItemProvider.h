@class NSMutableSet, HMAccessoryNetworkProtectionGroup;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *networkProtectionModeOptionItems;
@property (readonly, copy, nonatomic) HMAccessoryNetworkProtectionGroup *group;

- (id)init;
- (id)initWithGroup:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)items;
- (id)reloadItems;

@end
