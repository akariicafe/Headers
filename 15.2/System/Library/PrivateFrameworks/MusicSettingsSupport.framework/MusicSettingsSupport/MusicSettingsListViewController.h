@class NSString, NSArray;

@interface MusicSettingsListViewController : PSListController <MusicSettingsSupportController>

@property (copy, nonatomic) NSString *stringsTable;
@property (copy, nonatomic) NSArray *allSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void).cxx_destruct;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1 bundle:(id)a2;
- (void)updateVisibleSpecifiers;
- (id)valueForMusicCapability:(id)a0;
- (id)_sectionedCollectionRepresentation;

@end
