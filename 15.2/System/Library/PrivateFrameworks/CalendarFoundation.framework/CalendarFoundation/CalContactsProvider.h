@class CNContactStore, CNContact, CNReputationStore, NSString, NSMutableSet, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol> {
    CNContact *_meContact;
}

@property (retain) CNContactStore *store;
@property (retain) CNReputationStore *reputationStore;
@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) NSObject<OS_dispatch_queue> *contactStoreWorkQueue;
@property (retain) CNContact *meContact;
@property (retain) NSString *testMeContactIdentifer;
@property (retain) NSMutableSet *delegates;
@property (retain) NSArray *unitTestEmails;
@property (retain) NSArray *loadedMyEmailAddresses;

+ (id)birthdayStringForContactName:(id)a0 eventDate:(id)a1 birthDate:(id)a2 lunarCalendar:(id)a3;
+ (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0 inReputationStore:(id)a1;
+ (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0 inReputationStore:(id)a1;
+ (id)defaultProvider;
+ (id)reputationForHandle:(id)a0 inStore:(id)a1;
+ (BOOL)isCalendarIslamic:(id)a0;
+ (BOOL)birthdayIsYearless:(id)a0;

- (id)fullNameForFirstContactMatchingPhoneNumber:(id)a0;
- (id)myEmailAddresses;
- (id)initWithStore:(id)a0;
- (id)contactStore;
- (void)_syncContacts;
- (id)cachedEmailAddressArray;
- (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0;
- (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1;
- (id)unifiedMeContact;
- (id)unifiedContactMatchingName:(id)a0 email:(id)a1 url:(id)a2 keysToFetch:(id)a3;
- (BOOL)contactAccessResolved;
- (BOOL)urlMatchesOneOfMyEmails:(id)a0;
- (id)unifiedContactWithIdentifier:(id)a0 keysToFetch:(id)a1;
- (id)fullNameForFirstContactMatchingEmailAddress:(id)a0;
- (id)myHomeAddress;
- (BOOL)contactIdentifierIsMe:(id)a0;
- (id)_meWithKeys:(id)a0;
- (id)myAvatarEncodedString;
- (id)unifiedContactMatchingString:(id)a0 keysToFetch:(id)a1 matchType:(long long *)a2;
- (id)myFullName;
- (void)meCardChanged:(id)a0;
- (id)unifiedContactWithName:(id)a0;
- (void).cxx_destruct;
- (id)myWorkAddress;
- (id)init;
- (void)setMeCardEmailsForUnitTesting:(id)a0;
- (BOOL)matchesOneOfMyEmails:(id)a0;
- (id)unifiedContactWithIdentifier:(id)a0;
- (id)unifiedContactWithEmailAddress:(id)a0;
- (id)myNameWithStyle:(long long)a0;
- (id)unifiedContactWithPhoneNumber:(id)a0;
- (void)setTestMeContactIdentifier:(id)a0;
- (id)myPhoneNumbers;
- (void)contactsChanged:(id)a0;
- (BOOL)matchesOneOfMyPhoneNumbers:(id)a0;
- (id)cachedEmailAddresses;
- (void)donateEncodedLikenessString:(id)a0 forEmailAddress:(id)a1;
- (id)contactsFromContactIdentifiers:(id)a0 withKeys:(id)a1;
- (id)_lastHistoryToken;
- (void)deregisterForContactChangeNotifications:(id)a0;
- (id)_fullNameForFirstContactMatchingPredicate:(id)a0;
- (id)myEmailAddress;
- (void)_setLastHistoryToken:(id)a0;
- (id)myAddressForLabel:(id)a0;
- (id)_fetchedUnifiedMeContact;
- (id)myShortDisplayName;
- (id)cachedEmailAddress;
- (void)registerForContactChangeNotifications:(id)a0;

@end
