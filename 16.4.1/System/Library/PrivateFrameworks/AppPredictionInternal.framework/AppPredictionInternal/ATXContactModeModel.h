@class NSSet, ATXContactModeEntityModelWeights, ATXContactNotificationEngagementEventProvider, ATXDenyListEligibilityThresholds;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXContactModeModel : NSObject {
    unsigned long long _mode;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
    NSSet *_cnContactIdsOfEmergencyContacts;
    NSSet *_cnContactIdsOfICloudFamilyMembers;
    ATXDenyListEligibilityThresholds *_denyListThresholds;
    ATXContactModeEntityModelWeights *_contactModeEntityModelWeights;
    ATXContactNotificationEngagementEventProvider *_contactNotificationEngagementEventProvider;
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
}

- (id)meContact;
- (id)initWithMode:(unsigned long long)a0;
- (id)init;
- (id)contactKeysToFetch;
- (void).cxx_destruct;
- (void)addNotificationsSignalsForIdentifier:(id)a0 toContactSpecificFeatures:(id)a1;
- (id)purgeDeletedContacts:(id)a0;
- (double)scoreFromContactFeatures:(id)a0;
- (id)scoredEntities;
- (id)scoredEntitiesForDenyListWithScoresAcrossAllModes:(id)a0;
- (BOOL)shouldSuggestContactForDenyListWithScoreInOtherMode:(id)a0 scoreInCurrentMode:(id)a1;

@end
