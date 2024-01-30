@class NSMapTable, NSString, HUAccessorySettingsItemModule, NSMutableSet;
@protocol HUAccessorySettingsItemModuleControllerDelegate;

@interface HUAccessorySettingsItemModuleController : HUItemModuleController <HUSliderValueTableViewCellDelegate, HUSwitchCellDelegate, HUStepperCellDelegate>

@property (weak, nonatomic) id<HUAccessorySettingsItemModuleControllerDelegate> delegate;
@property (retain) NSMapTable *cellToItemMap;
@property (retain) NSMutableSet *registeredButtonFutures;
@property (readonly, nonatomic) HUAccessorySettingsItemModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (BOOL)canSelectItem:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (void)_handleButtonPress:(id)a0;
- (void)_registerButtonActionHandler:(id)a0 item:(id)a1;
- (void)_selectOptionItem:(id)a0;
- (void)_setupCellAccessoryType:(id)a0 forItem:(id)a1 withKey:(id)a2;
- (void)_setupSliderCell:(id)a0 forMinKey:(id)a1 maxKey:(id)a2;
- (void)_updateSwitchSettingItem:(id)a0 withValue:(id)a1;
- (Class)cellClassForItem:(id)a0;
- (id)initWithModule:(id)a0 delegate:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)sliderValueTableViewCell:(id)a0 didChangeValue:(double)a1;
- (void)stepperCell:(id)a0 steppedToValue:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
