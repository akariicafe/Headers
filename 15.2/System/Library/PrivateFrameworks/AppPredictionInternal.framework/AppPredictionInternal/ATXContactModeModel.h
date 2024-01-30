@class NSSet;

@interface ATXContactModeModel : NSObject {
    unsigned long long _mode;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
}

- (id)meContact;
- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)contactKeysToFetch;
- (id)scoredEntities;
- (id)purgeDeletedContacts:(id)a0;
- (double)scoreFromContactFeatures:(id)a0;

@end
