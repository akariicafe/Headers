@class NSString, CSSearchableItemAttributeSet, NSDate;

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying> {
    long long _rank;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL noIndex;
@property unsigned __int128 score;
@property BOOL isUpdate;
@property BOOL allowTextStore;
@property (copy) NSString *bundleID;
@property (copy) NSString *protection;
@property (copy) NSString *uniqueIdentifier;
@property (copy) NSString *domainIdentifier;
@property (copy) NSDate *expirationDate;
@property (retain) CSSearchableItemAttributeSet *attributeSet;

+ (id)searchableItemFromUserActivity:(id)a0 bundleID:(id)a1;

- (id)searchableItem;
- (void)encodeWithCoder:(id)a0;
- (id)_propertiesDescription;
- (void)setRank:(long long)a0;
- (id)initWithCoder:(id)a0;
- (long long)rank;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributes;
- (void)setAttributes:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0 domainIdentifier:(id)a1 attributeSet:(id)a2;
- (void)_fixBrokenAuthorNames:(id)a0;
- (BOOL)_hasAttributesOfType:(id)a0;
- (BOOL)_isFullyFormed;
- (void)_parseEmailHeadersForFeatures:(id)a0;
- (void)_populateMissingPeopleWithNames:(id)a0 emailAddresses:(id)a1 allItemPersons:(id)a2 primaryItemPersons:(id)a3 additionalItemPersons:(id)a4 hiddenAdditionalItemPersons:(id)a5 personDictionary:(id)a6 contactProperties:(id)a7 nameKey:(id)a8 emailKey:(id)a9 contactIdentifierKey:(id)a10 personKey:(id)a11 photosPersonIdentifierKey:(id)a12 attributeSet:(id)a13;
- (void)_standardizeDeprecatedProperties:(id)a0;
- (void)_standardizeFileProvider:(id)a0;
- (void)_standardizeHTML:(id)a0;
- (void)_standardizeMarkAs:(id)a0;
- (void)_standardizePeople:(id)a0;
- (void)_standardizePortrait:(id)a0;
- (void)_standardizeSceneClassification:(id)a0;
- (void)_standardizeSiriShortcuts:(id)a0;
- (void)_updateWithSearchableItem:(id)a0;
- (void)breakOutPersonInformationInSet:(id)a0 withName:(id)a1 emails:(id)a2 contactIdentifiers:(id)a3 photosPersonIdentifiers:(id)a4 nameKey:(id)a5 emailKey:(id)a6 contactIdentifierKey:(id)a7 emailAddressKey:(id)a8 photosPersonIdentifierKey:(id)a9 attributeSet:(id)a10;
- (long long)compareByRank:(id)a0;
- (id)copyReconstructedAdditionalRecipients;
- (id)copyReconstructedAuthors;
- (id)copyReconstructedHiddenAdditionalRecipients;
- (id)copyReconstructedPrimaryRecipients;
- (id)copyReconstructedRecipients;
- (void)extractAndStandardizePersonInformation:(id)a0 contactIdentifierKey:(id)a1 emailKey:(id)a2 nameKey:(id)a3 emailAddressExtractKey:(id)a4 photosPersonIdentifierKey:(id)a5 contactIdentifiers:(id)a6 emails:(id)a7 names:(id)a8 photosPersonIdentifiers:(id)a9 persons:(id)a10;
- (id)filteredSpotlightAttributes;
- (id)initWithAttributeSet:(id)a0;
- (void)standardizeAttributes;

@end
