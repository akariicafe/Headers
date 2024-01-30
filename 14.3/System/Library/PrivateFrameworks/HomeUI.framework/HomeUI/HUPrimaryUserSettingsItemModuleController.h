@protocol HUPrimaryUserSettingsItemModuleControllerDelegate;

@interface HUPrimaryUserSettingsItemModuleController : HUItemTableModuleController

@property (weak, nonatomic) id<HUPrimaryUserSettingsItemModuleControllerDelegate> delegate;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (unsigned long long)didSelectItem:(id)a0;
- (id)updatePrimaryUserSelectionType:(unsigned long long)a0 user:(id)a1;

@end
