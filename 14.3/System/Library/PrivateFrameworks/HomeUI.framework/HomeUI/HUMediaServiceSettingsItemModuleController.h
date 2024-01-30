@protocol HUMediaServiceSettingsItemModuleControllerDelegate;

@interface HUMediaServiceSettingsItemModuleController : HUItemTableModuleController

@property (weak, nonatomic) id<HUMediaServiceSettingsItemModuleControllerDelegate> delegate;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (unsigned long long)didSelectItem:(id)a0;

@end
