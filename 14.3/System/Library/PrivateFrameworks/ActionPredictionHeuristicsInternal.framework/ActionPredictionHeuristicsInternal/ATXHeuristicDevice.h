@class CNContactStore, CNContact, NSMutableDictionary, CNFavorites, NSDate;

@interface ATXHeuristicDevice : NSObject {
    CNContactStore *_contactStoreLazy;
    CNContact *_meContactLazy;
    BOOL _meContactChecked;
    CNFavorites *_favoriteContactsLazy;
    NSDate *_now;
    NSMutableDictionary *_wrappedObjects;
}

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNFavorites *favoriteContacts;
@property (readonly, nonatomic) NSDate *now;

+ (id)sharedEventStore;
+ (id)sharedCalendarVisibilityManager;

- (id)meContact;
- (void).cxx_destruct;
- (id)_dictContactForIdentifier:(id)a0;
- (id)_contactForPredicate:(id)a0;
- (void)setNow:(id)a0;
- (id)dictContactForCNContact:(id)a0;
- (void)updateMeContact;
- (id)dictForEvent:(id)a0;
- (id)_dictContactForParticipant:(id)a0;
- (id)_wrap:(id)a0;
- (id)_dictForAttachment:(id)a0;
- (id)contactsForPredicate:(id)a0;
- (id)_unwrap:(id)a0;
- (id)_contactKeysToFetch;
- (id)wrap:(id)a0;

@end
