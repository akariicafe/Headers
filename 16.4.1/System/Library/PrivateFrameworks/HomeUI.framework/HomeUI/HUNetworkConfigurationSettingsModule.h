@class HFNetworkConfigurationGroupItem, NSTimer, HMAccessoryNetworkProtectionGroup, HUNetworkProtectionModeOptionItemProvider;
@protocol HUNetworkConfigurationSettingsModuleDelegate;

@interface HUNetworkConfigurationSettingsModule : HFItemModule

@property (retain, nonatomic) HUNetworkProtectionModeOptionItemProvider *networkProtectionModeOptionItemProvider;
@property (nonatomic) BOOL isUpdatingProtectionMode;
@property (retain, nonatomic) NSTimer *updateProtectionModeTimer;
@property (weak, nonatomic) id<HUNetworkConfigurationSettingsModuleDelegate> networkConfigurationSettingsModuleDelegate;
@property (readonly, nonatomic) HMAccessoryNetworkProtectionGroup *group;
@property (readonly, nonatomic) HFNetworkConfigurationGroupItem *sourceItem;

+ (id)_allowedHostDescriptionForHostGroup:(id)a0;
+ (id)_attributedCheckmarkIcon;
+ (id)_attributedExclamationIcon;
+ (id)_attributedIconNamed:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)itemProviders;
- (id)_protectionModeOptionSectionFooter;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 group:(id)a1;
- (BOOL)isItemNetworkProtectionModeOptionItem:(id)a0;
- (id)updateProtectionMode:(long long)a0;

@end
