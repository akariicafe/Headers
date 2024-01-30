@class HMAccessory, NSString, HFItemManager;

@interface HUNearbyAccessoriesEditorServiceGridViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>

@property (retain, nonatomic) HMAccessory *primaryAccessory;
@property (readonly, nonatomic) HFItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)defaultItemProviderCreatorWithOptions:(unsigned long long)a0 accessoryProfileItem:(id)a1;

- (void).cxx_destruct;
- (BOOL)serviceGridItemManager:(id)a0 shouldHideItem:(id)a1;
- (id)initWithAccessoryProfileSourceItem:(id)a0;

@end
