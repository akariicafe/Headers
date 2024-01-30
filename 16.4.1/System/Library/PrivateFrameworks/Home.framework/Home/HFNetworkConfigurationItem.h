@class HMNetworkConfigurationProfile;

@interface HFNetworkConfigurationItem : HFAccessoryProfileItem

@property (class, readonly, copy, nonatomic) id /* block */ defaultItemComparator;

@property (readonly, nonatomic) HMNetworkConfigurationProfile *profile;

- (id)_subclass_updateWithOptions:(id)a0;

@end
