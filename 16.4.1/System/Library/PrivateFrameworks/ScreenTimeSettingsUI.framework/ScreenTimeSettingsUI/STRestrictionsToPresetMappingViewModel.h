@class NSObject;
@protocol STContentPrivacyViewModelCoordinator;

@interface STRestrictionsToPresetMappingViewModel : NSObject <ScreenTimeSettingsUI.STRestrictionsToPresetMappingViewModelProtocol>

@property (retain) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;

+ (id)boolPresetKeys;
+ (id)presetKeys;

- (void).cxx_destruct;
- (id)_keyFromRestrictionItem:(id)a0;
- (id)_presetForValuesByRestriction:(id)a0;
- (id)_restrictionsWithValuesByRestriction:(id)a0 presetKeys:(id)a1;
- (id)initWithContentPrivacyCoordinator:(id)a0;
- (void)loadPresetMatchingCurrentRestrictionsWithCompletionHandler:(id /* block */)a0;

@end
