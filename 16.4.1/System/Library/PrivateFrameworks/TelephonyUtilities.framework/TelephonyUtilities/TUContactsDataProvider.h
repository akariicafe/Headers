@class TUContactsDataProviderAppleCareHandles;
@protocol TUContactsDataSource;

@interface TUContactsDataProvider : NSObject

@property (nonatomic) BOOL useAsianNameFormat;
@property (copy, nonatomic) id /* block */ localeSupportsPrefixHintForFetchRequest;
@property (readonly, nonatomic) id<TUContactsDataSource> contactsDataSource;
@property (copy, nonatomic) TUContactsDataProviderAppleCareHandles *appleCareHandles;

+ (id)keysByCombiningDefaultKeysWithKeysToFetch:(id)a0;
+ (id)defaultContactKeyDescriptors;
+ (id)asianLocaleCountryCodes;
+ (id)unsupportedLocalesForPrefixHint;
+ (id)numberFormatter;

- (id)contactLabelForContacts:(id)a0 matchingHandle:(id)a1 countryCode:(id)a2;
- (id)contactWithIdentifier:(id)a0 keysToFetch:(id)a1;
- (id)compositeNameForContacts:(id)a0;
- (id)compositeNameForFetchRequest:(id)a0;
- (id)initWithContactsDataSource:(id)a0;
- (id)labeledHandlesForContacts:(id)a0;
- (id)ISOCountryCodeForHandle:(id)a0 fetchRequest:(id)a1;
- (id)labeledHandlesForContactWithIdentifier:(id)a0;
- (int)personIDForContact:(id)a0;
- (id)prefixHintForFetchRequest:(id)a0;
- (id)formattedNameForHandle:(id)a0 countryCode:(id)a1;
- (id)executeFetchRequest:(id)a0;
- (id)init;
- (id)localizedCompositeNameForContact:(id)a0 secondContact:(id)a1;
- (id)contactsForHandle:(id)a0 countryCode:(id)a1 keysToFetch:(id)a2 prefixHint:(id)a3;
- (id)unifiedContactsForFetchRequest:(id)a0;
- (void).cxx_destruct;

@end
