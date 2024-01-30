@class NSString, NSMutableSet, HFAccessoryProfileFilterOptions, HMHome;

@interface HFAccessoryProfileItemProvider : HFItemProvider <HFAccessoryProfileFiltering>

@property (retain, nonatomic) NSMutableSet *profileItems;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)_supportedProfileClasses;
- (id)_profileItemForProfile:(id)a0;

@end
