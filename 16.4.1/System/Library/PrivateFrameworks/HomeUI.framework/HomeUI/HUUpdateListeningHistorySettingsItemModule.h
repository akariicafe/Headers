@class HMHome, HMUser, HFItemProvider;

@interface HUUpdateListeningHistorySettingsItemModule : HFItemModule

@property (retain, nonatomic) HFItemProvider *mediaDeviceItemProvider;
@property (retain, nonatomic) HFItemProvider *otherDeviceItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMUser *user;

+ (id /* block */)_ulhDeviceItemComparator;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 user:(id)a2;
- (id)setUpdateListeningHistorySetting:(BOOL)a0 forItem:(id)a1;

@end
