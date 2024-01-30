@class HMHome, HMUser, HFItemProvider;

@interface HUUpdateListeningHistorySettingsItemModule : HFItemModule

@property (retain, nonatomic) HFItemProvider *mediaDeviceItemProvider;
@property (retain, nonatomic) HFItemProvider *otherDeviceItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMUser *user;

+ (id /* block */)_ulhDeviceItemComparator;

- (id)itemProviders;
- (void).cxx_destruct;
- (id)initWithItemUpdater:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)_buildItemProviders;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 user:(id)a2;
- (id)setUpdateListeningHistorySetting:(BOOL)a0 forItem:(id)a1;

@end
