@class HFNetworkConfigurationGroupItem, NSTimer, HMAccessoryNetworkProtectionGroup, HUNetworkProtectionModeOptionItemProvider;
@protocol HUNetworkConfigurationSettingsModuleDelegate;

@interface HUNetworkConfigurationSettingsModule : HFItemModule

@property (retain, nonatomic) HUNetworkProtectionModeOptionItemProvider *networkProtectionModeOptionItemProvider;
@property (nonatomic) BOOL isUpdatingProtectionMode;
@property (retain, nonatomic) NSTimer *updateProtectionModeTimer;
@property (weak, nonatomic) id<HUNetworkConfigurationSettingsModuleDelegate> networkConfigurationSettingsModuleDelegate;
@property (readonly, nonatomic) HMAccessoryNetworkProtectionGroup *group;
@property (readonly, nonatomic) HFNetworkConfigurationGroupItem *sourceItem;

+ (id)_attributedCheckmarkIcon;
+ (id)_allowedHostDescriptionForHostGroup:(id)a0;
+ (id)_attributedExclamationIcon;
+ (id)_attributedIconNamed:(id)a0;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)description;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 group:(id)a1;
- (id)_protectionModeOptionSectionFooter;
- (BOOL)isItemNetworkProtectionModeOptionItem:(id)a0;
- (id)updateProtectionMode:(long long)a0;

@end
