@class HFAccessorySettingMobileTimerAdapter, NSMutableDictionary, NSMutableSet;
@protocol HFHomePodAlarmItemProviderDelegate, HFMediaProfileContainer;

@interface HFHomePodAlarmItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableDictionary *alarmIDToItemMap;
@property (readonly, nonatomic) NSMutableSet *alarmItems;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;
@property (weak, nonatomic) id<HFHomePodAlarmItemProviderDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithMediaProfileContainer:(id)a0;
- (id)items;
- (id)reloadItems;

@end
