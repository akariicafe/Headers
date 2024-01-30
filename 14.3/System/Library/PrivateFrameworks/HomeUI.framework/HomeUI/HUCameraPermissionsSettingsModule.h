@class UIViewController, NSSet, NSArray, NSString, HFItemProvider, HMHome;

@interface HUCameraPermissionsSettingsModule : HUExpandableItemContainerModule <HUCameraSettingsModule>

@property (retain, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HFItemProvider *headerItemProvider;
@property (retain, nonatomic) NSArray *userSectionModules;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)didSelectItem:(id)a0;
- (void)_buildItemProviders;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 displayStyle:(unsigned long long)a2;
- (id)expandableModules;
- (BOOL)isItemHeader:(id)a0;
- (unsigned long long)accessModeSettingForUser:(id)a0;

@end
