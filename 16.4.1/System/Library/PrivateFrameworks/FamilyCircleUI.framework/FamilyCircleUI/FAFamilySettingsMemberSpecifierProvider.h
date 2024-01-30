@class NSArray, PSSpecifier, NSDictionary, FAProfilePictureStore, FAFamilyCircle;
@protocol FAFamilySettingsMemberSpecifierProviderDelegeate, FAFamilyMemberCardTapHandler;

@interface FAFamilySettingsMemberSpecifierProvider : NSObject {
    FAFamilyCircle *_familyCircle;
    FAProfilePictureStore *_familyPictureStore;
    PSSpecifier *_addFamilyMemberCell;
    NSDictionary *_cachedResourceDictionary;
    unsigned long long _specifierState;
}

@property (weak, nonatomic) id<FAFamilySettingsMemberSpecifierProviderDelegeate> delegate;
@property (weak, nonatomic) id<FAFamilyMemberCardTapHandler> memberCardTapHandler;
@property (copy, nonatomic) NSArray *specifiers;

- (void)reloadSpecifiers;
- (void)setFamilyCircle:(id)a0;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)_addFamilyMemberButtonWasTapped:(id)a0;
- (id)_createSpecifierForFamilyMemberCell:(id)a0;
- (id)_createSpecifierForPendingMember:(id)a0;
- (void)_delayedLoadIfNeeded;
- (void)_familyMemberCellWasTapped:(id)a0;
- (BOOL)_launchWithResourceDictionary:(id)a0;
- (void)_pendingFamilyMemberCellWasTapped:(id)a0;
- (id)_specifierWithID:(id)a0;
- (id)initWithAppleAccount:(id)a0 familyCircle:(id)a1 familyPictureStore:(id)a2;

@end
