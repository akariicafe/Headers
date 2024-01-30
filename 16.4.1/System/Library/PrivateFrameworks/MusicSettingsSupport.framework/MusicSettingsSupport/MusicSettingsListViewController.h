@class NSString, NSArray;

@interface MusicSettingsListViewController : PSListController <MusicSettingsSupportController>

@property (copy, nonatomic) NSString *stringsTable;
@property (copy, nonatomic) NSArray *allSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void).cxx_destruct;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1 bundle:(id)a2;
- (id)_sectionedCollectionRepresentation;
- (void)updateVisibleSpecifiers;
- (id)valueForMusicCapability:(id)a0;

@end
