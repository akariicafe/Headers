@class CNContactStore, CNContact, CNReputationStore, NSString, NSMutableSet, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol> {
    CNContact *_meContact;
}

@property (retain) CNContactStore *store;
@property (retain) CNReputationStore *reputationStore;
@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) CNContact *meContact;
@property (retain) NSString *testMeContactIdentifer;
@property (retain) NSMutableSet *delegates;
@property (retain) NSArray *unitTestEmails;

+ (id)defaultProvider;
+ (id)birthdayStringForContactName:(id)a0 eventDate:(id)a1 birthDate:(id)a2 lunarCalendar:(id)a3;
+ (BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)a0 inReputationStore:(id)a1;
+ (BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)a0 inReputationStore:(id)a1;
+ (id)reputationForHandle:(id)a0 inStore:(id)a1;
+ (BOOL)birthdayIsYearless:(id)a0;
+ (BOOL)isCalendarIslamic:(id)a0;

- (id)initWithStore:(id)a0;
- (void)deregisterForContactChangeNotifications:(id)a0;
- (id)unifiedContactWithEmailAddress:(id)a0;
- (id)init;
- (id)contactStore;
- (void).cxx_destruct;
- (id)myNameWithStyle:(long long)a0;
- (id)contactsFromContactIdentifiers:(id)a0 withKeys:(id)a1;
- (BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)a0;
- (id)myAvatarEncodedString;
- (BOOL)matchesOneOfMyEmails:(id)a0;
- (void)donateEncodedLikenessString:(id)a0 forEmailAddress:(id)a1;
- (void)_setLastHistoryToken:(id)a0;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1;
- (id)myEmailAddress;
- (id)myFullName;
- (id)unifiedContactMatchingName:(id)a0 email:(id)a1 url:(id)a2 keysToFetch:(id)a3;
- (id)_fetchedUnifiedMeContact;
- (id)unifiedContactWithIdentifier:(id)a0;
- (id)myEmailAddresses;
- (id)myHomeAddress;
- (void)contactsChanged:(id)a0;
- (id)myShortDisplayName;
- (id)myWorkAddress;
- (BOOL)contactIdentifierIsMe:(id)a0;
- (BOOL)urlMatchesOneOfMyEmails:(id)a0;
- (BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)a0;
- (id)_meWithKeys:(id)a0;
- (id)_lastHistoryToken;
- (id)unifiedMeContact;
- (id)unifiedContactWithPhoneNumber:(id)a0;
- (id)myAddressForLabel:(id)a0;
- (void)_syncContacts;
- (void)setTestMeContactIdentifier:(id)a0;
- (BOOL)matchesOneOfMyPhoneNumbers:(id)a0;
- (id)myPhoneNumbers;
- (id)unifiedContactWithIdentifier:(id)a0 keysToFetch:(id)a1;
- (void)setMeCardEmailsForUnitTesting:(id)a0;
- (void)meCardChanged:(id)a0;
- (void)registerForContactChangeNotifications:(id)a0;

@end
