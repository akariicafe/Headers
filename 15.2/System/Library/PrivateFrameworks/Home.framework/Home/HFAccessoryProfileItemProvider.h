@class NSString, NSMutableSet, HFAccessoryProfileFilterOptions, HMHome;

@interface HFAccessoryProfileItemProvider : HFItemProvider <HFAccessoryProfileFiltering>

@property (retain, nonatomic) NSMutableSet *profileItems;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)_supportedProfileClasses;
- (id)_profileItemForProfile:(id)a0;

@end
