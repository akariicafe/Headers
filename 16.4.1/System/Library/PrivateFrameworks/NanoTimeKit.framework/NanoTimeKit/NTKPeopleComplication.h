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
+ (id)allValidFavoriteContacts;
+ (id)complicationForContact:(id)a0 forFavoriteList:(BOOL)a1;
+ (id)localizedNameForContact:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_complicationTypeString;
- (void)_contactsCacheDidChange;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (void)_refreshContactInfoNotifyOfChange;
- (void)_registerWithSwitch:(BOOL)a0;
- (void)_updateStateWithContact:(id)a0 foundAsPrimaryId:(BOOL)a1;
- (BOOL)appearsInDailySnapshotForFamily:(long long)a0;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (id)ntk_contactIdentifier;
- (unsigned long long)ntk_itemType;
- (id)ntk_sectionIdentifier;
- (BOOL)snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;

@end
