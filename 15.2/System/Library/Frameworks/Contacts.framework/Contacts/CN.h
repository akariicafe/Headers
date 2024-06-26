@class NSArray;

@interface CN : NSObject

@property (class, readonly) NSArray *restrictedProperties;

+ (id /* block */)phoneNumberFromStringTransform;
+ (id /* block */)relatedContactFromStringTransform;
+ (id /* block */)socialProfileFromDictionaryTransform;
+ (id /* block */)instantMessageAddressFromDictionaryTransform;
+ (id)writableContactProperties;
+ (BOOL)areValidGregorianDayComponents:(id)a0 error:(id *)a1;
+ (id /* block */)dateComponentsFromDictionaryTransform;
+ (BOOL)areValidNonGregorianDayComponents:(id)a0 error:(id *)a1;
+ (id /* block */)phoneNumberToStringTransform;
+ (id /* block */)relatedContactToStringTransform;
+ (id /* block */)instantMessageAddressToDictionaryTransform;
+ (id /* block */)socialProfileToFoundationProfileTransform;
+ (id /* block */)socialProfileToDictionaryTransform;
+ (id /* block */)postalAddressToDictionaryTransform;
+ (id /* block */)postalAddressFromDictionaryTransform;
+ (BOOL)areValidKeyPaths:(id)a0 forObject:(id)a1 expectedClasses:(id)a2 allowNil:(id)a3 error:(id *)a4;
+ (id)_unifyContacts:(id)a0 includingMainStoreContacts:(BOOL)a1;
+ (id)identifierMapForUnifiedContact:(id)a0 backingContacts:(id)a1;
+ (unsigned long long)indexOfPreferredContactsForUnifying:(id)a0 includingMainStoreContacts:(BOOL)a1;
+ (id)mutableContactUnifyingContacts:(id)a0 includingMainStoreContacts:(BOOL)a1;
+ (id)identifierMapForUnifiedMultiValue:(id)a0 backingMultiValues:(id)a1 forProperty:(id)a2;
+ (id)cropRectDescription;
+ (id)groupIdentifiersByLabeledValue:(id)a0 forProperty:(id)a1;
+ (void)addLinkedIdentifier:(id)a0 toLabeledValue:(id)a1;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)a0 onNonUnifiedMultiValue:(id)a1 withIdentifierMap:(id)a2;
+ (id)imageDataDescription;
+ (id)sourceContactForValue:(id)a0 labeledValueIdentifier:(id)a1 propertyKey:(id)a2 inUnifiedContact:(id)a3;
+ (id)preferredLikenessSourceDescription;
+ (id)thumbnailImageDataDescription;
+ (id)preferredApplePersonaIdentifierDescription;
+ (id)fullscreenImageDataDescription;
+ (id)syncImageDataDescription;
+ (id)writableSingleValueContactProperties;
+ (id)namePrefixDescription;
+ (id)givenNameDescription;
+ (id)middleNameDescription;
+ (id)familyNameDescription;
+ (id)nameSuffixDescription;
+ (id)preferredForNameDescription;
+ (id)preferredForImageDescription;
+ (id)writableMultiValueContactProperties;
+ (id)allContactProperties;
+ (id)iOSLegacyIdentifierDescription;
+ (id)imageType;
+ (id)identifierDescription;
+ (id)externalImageURIDescription;
+ (Class)defaultDataMapperClass;
+ (id)orderForContactName:(id)a0;
+ (id)nicknameDescription;
+ (id)imageHash;
+ (id)orderForContactPhoneticName:(id)a0;
+ (id)localizedPhoneticNameDelimiterForContact:(id)a0;
+ (id)keyVectorForAllUsedKeysForInternationalSupport;
+ (id)localizedNameDelimiterForContact:(id)a0;
+ (BOOL)isEmptyNameContact:(id)a0 phonetic:(BOOL)a1 includingPrefixAndSuffix:(BOOL)a2;
+ (id)phoneticOrganizationNameDescription;
+ (id)organizationNameDescription;
+ (id)phoneticGivenNameDescription;
+ (id)phoneticMiddleNameDescription;
+ (id)phoneticFamilyNameDescription;
+ (id /* block */)nullTransform;
+ (id)writableAlwaysFetchedProperties;
+ (id)alwaysFetchedProperties;
+ (id)allImageDataPropertyKeys;
+ (void)resetRestrictedPropertiesOnMutableContact:(id)a0;
+ (id)contactPropertiesByKey;
+ (id)requiredPropertiesForNameScriptDetection;
+ (id)explicitDisplayNameDescription;
+ (id)postalAddressesDescription;
+ (id)previousFamilyNameDescription;
+ (id)jobTitleDescription;
+ (id)pronunciationGivenNameDescription;
+ (id)pronunciationFamilyNameDescription;
+ (id)departmentDescription;
+ (id)sectionForSortingByFamilyNameDescription;
+ (id)sectionForSortingByGivenNameDescription;
+ (id)birthdayDescription;
+ (id)nonGregorianBirthdayDescription;
+ (id)creationDateDescription;
+ (id)noteDescription;
+ (id)modificationDateDescription;
+ (id)imageDataAvailableDescription;
+ (id)linkIdentifierDescription;
+ (id)contactTypeDescription;
+ (id)phoneNumbersDescription;
+ (id)emailAddressesDescription;
+ (id)datesDescription;
+ (id)urlAddressesDescription;
+ (id)contactRelationsDescription;
+ (id)socialProfilesDescription;
+ (id)phonemeDataDescription;
+ (id)textAlertDescription;
+ (id)callAlertDescription;
+ (id)mapsDataDescription;
+ (id)preferredChannelDescription;
+ (id)calendarURIsDescription;
+ (id)externalIdentifierDescription;
+ (id)externalModificationTagDescription;
+ (id)externalRepresentationDescription;
+ (id)allImageDataProperties;
+ (id)externalUUIDDescription;
+ (id)downtimeWhitelistDescription;
+ (id)memojiMetadataDescription;
+ (id)allPhoneticNameComponentProperties;
+ (id)allContactPropertyKeys;
+ (id)allNameComponentRelatedProperties;
+ (id)singleValueContactProperties;
+ (id /* block */)dateComponentsToDictionaryTransform;
+ (id)instantMessagAddressesDescription;
+ (BOOL)areValidDayComponents:(id)a0 error:(id *)a1;
+ (id)unifyContactMatchInfos:(id)a0 linkedContacts:(id)a1;
+ (id)contactUnifyingContacts:(id)a0 includingMainStoreContacts:(BOOL)a1 allowMutableContactFreeze:(BOOL)a2;
+ (id)containerIdentifierDescription;
+ (id)containerNameDescription;
+ (id)containerTypeDescription;
+ (id)containeriOSLegacyIdentifierDescription;
+ (id)containerAccountIdentifierDescription;
+ (id)containerEnabledDescription;
+ (id)allContainerProperties;
+ (id)containerExternalIdentifierDescription;
+ (id)containerExternalModificationTagDescription;
+ (id)containerExternalSyncTagDescription;
+ (id)containerExternalSyncDataDescription;
+ (id)orderForContactName:(id)a0 phonetic:(BOOL)a1;
+ (id)containerConstraintsPathDescription;
+ (id)containerMeIdentifierDescription;
+ (id)containerRestrictionsDescription;
+ (id)containerGuardianRestrictedDescription;
+ (id)containerGuardianStateDirtyDescription;
+ (id)containerLastSyncDateDescription;
+ (id)joinNonEmptyContactProperties:(id)a0 onContact:(id)a1 withDelimiter:(id)a2;
+ (BOOL)hasContactChineseJapaneseKoreanName:(id)a0;
+ (id)writableContainerProperties;
+ (id)requiredPropertiesForPhoneticNameScriptDetection;
+ (BOOL)shouldContactUseFamilyGivenNameOrder:(id)a0;
+ (BOOL)hasContactChineseJapaneseKoreanPhoneticName:(id)a0;
+ (id)joinNonEmptyContactProperties:(id)a0 onContact:(id)a1;
+ (id)multiValueContactProperties;
+ (id)unifyMultivalues:(id)a0 forProperty:(id)a1;

@end
