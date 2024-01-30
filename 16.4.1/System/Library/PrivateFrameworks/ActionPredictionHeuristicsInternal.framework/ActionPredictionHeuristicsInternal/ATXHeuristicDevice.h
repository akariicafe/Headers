@class CNContactStore, CNContact, ATXLocationManager, CNFavorites, NSDate, NSMutableDictionary;

@interface ATXHeuristicDevice : NSObject {
    CNContactStore *_contactStoreLazy;
    CNContact *_meContactLazy;
    BOOL _meContactChecked;
    CNFavorites *_favoriteContactsLazy;
    NSDate *_now;
    NSMutableDictionary *_wrappedObjects;
}

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) ATXLocationManager *locationManager;
@property (readonly, nonatomic) NSDate *now;

+ (id)sharedEventStore;
+ (id)sharedCalendarVisibilityManager;

- (void)setNow:(id)a0;
- (id)dictContactForCNContact:(id)a0;
- (id)_unwrap:(id)a0;
- (void)accessFavoriteContacts:(id /* block */)a0;
- (id)_wrap:(id)a0;
- (id)meContact;
- (id)_dictContactForParticipant:(id)a0 contactCache:(id)a1;
- (id)_dictForAttachment:(id)a0;
- (id)_dictContactForIdentifier:(id)a0;
- (id)_contactKeysToFetch;
- (id)dictForEvent:(id)a0 contactCache:(id)a1;
- (void)dealloc;
- (id)initWithLocationManager:(id)a0;
- (void)updateMeContact;
- (id)dictForEvent:(id)a0;
- (id)init;
- (id)wrap:(id)a0;
- (void).cxx_destruct;
- (id)_contactForPredicate:(id)a0;
- (id)contactsForPredicate:(id)a0;

@end
