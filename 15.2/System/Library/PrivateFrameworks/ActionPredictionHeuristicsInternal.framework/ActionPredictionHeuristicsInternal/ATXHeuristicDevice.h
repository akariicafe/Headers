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
@property (readonly, nonatomic) CNFavorites *favoriteContacts;
@property (readonly, nonatomic) NSDate *now;

+ (id)sharedCalendarVisibilityManager;
+ (id)sharedEventStore;

- (void)setNow:(id)a0;
- (id)meContact;
- (id)_dictForAttachment:(id)a0;
- (id)_dictContactForParticipant:(id)a0 contactCache:(id)a1;
- (id)contactsForPredicate:(id)a0;
- (id)_contactKeysToFetch;
- (id)dictContactForCNContact:(id)a0;
- (id)_dictContactForIdentifier:(id)a0;
- (id)initWithLocationManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateMeContact;
- (id)_wrap:(id)a0;
- (id)wrap:(id)a0;
- (id)dictForEvent:(id)a0;
- (id)_contactForPredicate:(id)a0;
- (id)dictForEvent:(id)a0 contactCache:(id)a1;
- (id)_unwrap:(id)a0;

@end
