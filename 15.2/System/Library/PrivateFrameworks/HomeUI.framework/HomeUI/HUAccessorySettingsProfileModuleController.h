@class NSString, HUAccessorySettingsProfileModule;
@protocol HUAccessorySettingsProfileModuleControllerDelegate;

@interface HUAccessorySettingsProfileModuleController : HUItemTableModuleController <MCProfileViewControllerDelegate>

@property (readonly, nonatomic) HUAccessorySettingsProfileModule *module;
@property (weak, nonatomic) id<HUAccessorySettingsProfileModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (BOOL)profileViewControllerIsProfileInstalled;
- (void)profileViewControllerDidSelectRemoveProfile:(id)a0;

@end
