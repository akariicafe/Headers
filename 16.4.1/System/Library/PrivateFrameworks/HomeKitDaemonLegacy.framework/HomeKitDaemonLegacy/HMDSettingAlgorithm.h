@interface HMDSettingAlgorithm : NSObject

+ (id)allGroupsFromRootGroup:(id)a0;
+ (id)allSettingsFromRootGroup:(id)a0;
+ (void)findChangedSettingsWithRootGroup:(id)a0 currentGroups:(id)a1 currentSettings:(id)a2 completion:(id /* block */)a3;

@end
