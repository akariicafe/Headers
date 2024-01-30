@class NSSet, ATXContactModeEntityDenyListModelWeights, ATXContactNotificationEngagementEventProvider;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXContactModeDenyListModel : NSObject {
    unsigned long long _mode;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
    NSSet *_cnContactIdsOfEmergencyContacts;
    NSSet *_cnContactIdsOfICloudFamilyMembers;
    ATXContactModeEntityDenyListModelWeights *_contactModeEntityDenyListModelWeights;
    ATXContactNotificationEngagementEventProvider *_contactNotificationEngagementEventProvider;
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
}

- (id)meContact;
- (id)initWithMode:(unsigned long long)a0;
- (id)contactKeysToFetch;
- (void).cxx_destruct;
- (void)addNotificationsSignalsForIdentifier:(id)a0 toContactSpecificFeatures:(id)a1;
- (id)purgeDeletedContacts:(id)a0;
- (double)scoreFromContactFeatures:(id)a0;
- (id)scoredEntities;

@end
