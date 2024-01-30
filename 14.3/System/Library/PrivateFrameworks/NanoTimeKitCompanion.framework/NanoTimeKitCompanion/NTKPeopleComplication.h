@class NSString;

@interface NTKPeopleComplication : NTKComplication

@property (readonly, nonatomic) NSString *contactID;
@property (readonly, nonatomic) NSString *storeBackedContactID;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *abbreviation;
@property (readonly, nonatomic, getter=isFavoritedPerson) BOOL favoritedPerson;

+ (BOOL)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)a0;
+ (BOOL)_complicationPickerShouldShowMoreButtonForList:(id)a0;
+ (id)complicationForContact:(id)a0 forFavoriteList:(BOOL)a1;
+ (id)allValidFavoriteContacts;
+ (id)localizedNameForContact:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)ntk_sectionIdentifier;
- (id)ntk_contactIdentifier;
- (unsigned long long)ntk_itemType;
- (id)_generateUniqueIdentifier;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (id)localizedKeylineLabelText;
- (id)localizedDetailText;
- (BOOL)appearsInDailySnapshotForFamily:(long long)a0;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (BOOL)snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (void)_registerWithSwitch:(BOOL)a0;
- (void)_contactsCacheDidChange;
- (void)_refreshContactInfoNotifyOfChange;
- (void)_updateStateWithContact:(id)a0 foundAsPrimaryId:(BOOL)a1;
- (id)_complicationTypeString;

@end
