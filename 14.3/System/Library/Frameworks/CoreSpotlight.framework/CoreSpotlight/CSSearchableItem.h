@class NSString, CSSearchableItemAttributeSet, NSDate;

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL noIndex;
@property unsigned __int128 score;
@property BOOL isUpdate;
@property (copy) NSString *bundleID;
@property (copy) NSString *protection;
@property (copy) NSString *uniqueIdentifier;
@property (copy) NSString *domainIdentifier;
@property (copy) NSDate *expirationDate;
@property (retain) CSSearchableItemAttributeSet *attributeSet;

+ (id)searchableItemFromUserActivity:(id)a0 bundleID:(id)a1;

- (void)_populateMissingPeopleWithNames:(id)a0 emailAddresses:(id)a1 allItemPersons:(id)a2 primaryItemPersons:(id)a3 additionalItemPersons:(id)a4 hiddenAdditionalItemPersons:(id)a5 personDictionary:(id)a6 contactProperties:(id)a7 nameKey:(id)a8 emailKey:(id)a9 contactIdentifierKey:(id)a10 personKey:(id)a11 attributeSet:(id)a12;
- (id)searchableItem;
- (id)init;
- (id)_propertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUniqueIdentifier:(id)a0 domainIdentifier:(id)a1 attributeSet:(id)a2;
- (id)attributes;
- (BOOL)_isFullyFormed;
- (BOOL)_hasAttributesOfType:(id)a0;
- (id)initWithAttributeSet:(id)a0;
- (void)_standardizeFileProvider:(id)a0;
- (void)_standardizePeople:(id)a0;
- (void)_standardizeDeprecatedProperties:(id)a0;
- (void)_standardizeHTML:(id)a0;
- (void)_standardizeMarkAs:(id)a0;
- (void)_parseEmailHeadersForFeatures:(id)a0;
- (void)_standardizeSiriShortcuts:(id)a0;
- (void)_fixBrokenAuthorNames:(id)a0;
- (void)standardizeAttributes;
- (id)filteredSpotlightAttributes;
- (void)breakOutPersonInformationInSet:(id)a0 withName:(id)a1 emails:(id)a2 contactIdentifiers:(id)a3 nameKey:(id)a4 emailKey:(id)a5 contactIdentifierKey:(id)a6 emailAddressKey:(id)a7 attributeSet:(id)a8;
- (unsigned long long)hash;
- (void)_updateWithSearchableItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAttributes:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
