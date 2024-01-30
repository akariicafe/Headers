@class NSArray, PSSpecifier, NSDictionary, FAProfilePictureStore, FAFamilyCircle;
@protocol FAFamilySettingsMemberSpecifierProviderDelegeate;

@interface FAFamilySettingsMemberSpecifierProvider : NSObject {
    FAFamilyCircle *_familyCircle;
    FAProfilePictureStore *_familyPictureStore;
    PSSpecifier *_addFamilyMemberCell;
    NSDictionary *_cachedResourceDictionary;
    unsigned long long _specifierState;
}

@property (weak, nonatomic) id<FAFamilySettingsMemberSpecifierProviderDelegeate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (BOOL)handleURL:(id)a0;
- (void)setFamilyCircle:(id)a0;
- (void).cxx_destruct;
- (void)reloadSpecifiers;
- (void)_delayedLoadIfNeeded;
- (BOOL)_launchWithResourceDictionary:(id)a0;
- (id)initWithAppleAccount:(id)a0 familyCircle:(id)a1 familyPictureStore:(id)a2;
- (id)_specifierWithID:(id)a0;
- (void)_addFamilyMemberButtonWasTapped:(id)a0;
- (id)_createSpecifierForFamilyMemberCell:(id)a0;
- (id)_createSpecifierForPendingMember:(id)a0;
- (void)_familyMemberCellWasTapped:(id)a0;
- (void)_pendingFamilyMemberCellWasTapped:(id)a0;

@end
