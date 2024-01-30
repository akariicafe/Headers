@class NSString, NSMapTable;
@protocol HUHomeKitAccessorySettingsItemModuleControllerDelegate;

@interface HUHomeKitAccessorySettingsItemModuleController : HUItemModuleController <HUSwitchCellDelegate>

@property (weak, nonatomic) id<HUHomeKitAccessorySettingsItemModuleControllerDelegate> delegate;
@property (retain) NSMapTable *cellToItemMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (void)_updateSwitchSettingItem:(id)a0 forCell:(id)a1 withValue:(BOOL)a2;
- (Class)cellClassForItem:(id)a0;
- (id)initWithModule:(id)a0 delegate:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
