@class CNContactStore, NSArray, TCSContacts, NSString, NSMutableSet, NSDictionary;
@protocol TCSContactsDataSourceDelegate;

@interface TCSContactsDataSource : NSObject <TCSContactsObserver> {
    NSMutableSet *_whitelistedContactIdentifiers;
    NSMutableSet *_inviterContactIdentifiers;
    NSDictionary *_whitelistedContactMap;
    NSDictionary *_inviterContactMap;
    NSDictionary *_inviteeContactMap;
    int _namePrefChangeToken;
}

@property (retain, nonatomic) NSArray *sortedContacts;
@property (retain, nonatomic) NSArray *sortedInviters;
@property (retain, nonatomic) NSArray *sortedInvitees;
@property (weak, nonatomic) id<TCSContactsDataSourceDelegate> delegate;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) TCSContacts *contacts;
@property (readonly, nonatomic) unsigned long long sectionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)contactWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeContact:(id)a0;
- (void)_notifyDelegateContactsChanged;
- (void)_handleDeviceFirstUnlock;
- (void)destinationsDidChange:(id)a0;
- (void)recencyDidChange:(id)a0;
- (void)contactBecameAccepted:(id)a0;
- (id)initWithContactStore:(id)a0 contacts:(id)a1;
- (void)_handlePersonNamePreferencesChangeNotification;
- (void)_handleContactStoreDidChange:(id)a0;
- (void)_updateSortedContactsAndNotifyIfChanged:(BOOL)a0;
- (id)_sortedContactsArrayFromArray:(id)a0;
- (id)_contactMapFromArray:(id)a0;
- (long long)_sectionForContact:(id)a0;
- (void)removeContact:(id)a0 inSection:(long long)a1;
- (id)_contactsForSection:(long long)a0;
- (void)_notifyDelegateRecencyChanged;
- (id)_unsortedContactsArray;
- (id)_sortedContactsArrayFromArray:(id)a0 forSection:(long long)a1;
- (BOOL)_contactArray:(id)a0 differsFromArray:(id)a1;
- (void)_logSortedContacts;
- (long long)inviteContact:(id)a0;
- (BOOL)isContactWhitelisted:(id)a0;
- (BOOL)isContactAnInviter:(id)a0;

@end
