@class HFAccessorySettingMobileTimerAdapter, NSMutableDictionary, NSMutableSet;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableDictionary *alarmIDToItemMap;
@property (readonly, nonatomic) NSMutableSet *alarmItems;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;

- (void).cxx_destruct;
- (id)reloadItems;
- (id)items;
- (id)initWithMediaProfileContainer:(id)a0;

@end
