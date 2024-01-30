@class CNContactStore, NSArray, TCSContacts, NSString, NSMutableSet, NSDictionary;
@protocol TCSContactsDataSourceDelegate;

@interface TCSContactsDataSource : NSObject <TCSContactsObserver> {
    NSMutableSet *_allowedContactIdentifiers;
    NSMutableSet *_inviterContactIdentifiers;
    NSDictionary *_allowedContactMap;
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

- (void)_notifyDelegateContactsChanged;
- (void)dealloc;
- (void)removeContact:(id)a0;
- (void).cxx_destruct;
- (id)contactWithIdentifier:(id)a0;
- (BOOL)_contactArray:(id)a0 differsFromArray:(id)a1;
- (id)_contactMapFromArray:(id)a0;
- (id)_contactsForSection:(long long)a0;
- (void)_handleContactStoreDidChange:(id)a0;
- (void)_handleDeviceFirstUnlock;
- (void)_handlePersonNamePreferencesChangeNotification;
- (void)_notifyDelegateRecencyChanged;
- (long long)_sectionForContact:(id)a0;
- (id)_sortedContactsArrayFromArray:(id)a0;
- (id)_sortedContactsArrayFromArray:(id)a0 forSection:(long long)a1;
- (id)_unsortedContactsArray;
- (void)_updateSortedContactsAndNotifyIfChanged:(BOOL)a0;
- (void)contactBecameAccepted:(id)a0;
- (void)destinationsDidChange:(id)a0;
- (id)initWithContactStore:(id)a0 contacts:(id)a1;
- (long long)inviteContact:(id)a0;
- (BOOL)isContactAllowed:(id)a0;
- (BOOL)isContactAnInviter:(id)a0;
- (void)logSortedContacts;
- (void)recencyDidChange:(id)a0;
- (void)removeContact:(id)a0 inSection:(long long)a1;

@end
