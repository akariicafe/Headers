@class NSDictionary, PGManager;

@interface PGGuessWhoRelationshipMetricEvent : PGAbstractMetricEvent {
    PGManager *_manager;
    NSDictionary *_payload;
}

@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long numberOfInferredFamilyMembers;
@property (nonatomic) unsigned long long numberOfInferredFriends;
@property (nonatomic) unsigned long long numberOfInferredParents;
@property (nonatomic) unsigned long long numberOfInferredCoworkers;
@property (nonatomic) unsigned long long numberOfInferredPartners;
@property (nonatomic) unsigned long long numberOfInferredChildren;
@property (nonatomic) unsigned long long numberOfFamilyHolidaySignalRegistrations;
@property (nonatomic) unsigned long long numberOfParentContactNameSignalRegistrations;
@property (nonatomic) unsigned long long numberOfSameFamilyNameSignalRegistrations;
@property (nonatomic) unsigned long long numberOfHomeMomentsSignalRegistrations;
@property (nonatomic) unsigned long long numberOfAnniversaryDateSignalRegistrations;
@property (nonatomic) unsigned long long numberOfTopTwoPersonSocialGroupSignalRegistrations;
@property (nonatomic) unsigned long long numberOfLoveEmojisSignalRegistrations;
@property (nonatomic) unsigned long long numberOfTopPersonSignalRegistrations;
@property (nonatomic) unsigned long long numberOfFriendNightOutSignalRegistrations;
@property (nonatomic) unsigned long long numberOfPartnerTripSignalRegistrations;
@property (nonatomic) unsigned long long numberOfFriendsFamilyTripSignalRegistrations;
@property (nonatomic) unsigned long long numberOfWeekendSignalRegistrations;
@property (nonatomic) unsigned long long numberOfCoworkersAtWorkSignalRegistrations;
@property (nonatomic) unsigned long long numberOfCoworkerCalendarSignalRegistrations;
@property (nonatomic) unsigned long long numberOfAgeDifferentThanMeSignalRegistrations;
@property (nonatomic) unsigned long long numberOfParentGrandparentOldSignalRegistrations;
@property (nonatomic) unsigned long long numberOfFamilyHolidaySignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfParentContactNameSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfSameFamilyNameSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfHomeMomentsSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfAnniversaryDateSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfLoveEmojisSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfTopPersonSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfFriendNightOutSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfPartnerTripSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfWeekendSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;

- (id)payload;
- (id)initWithGraphManager:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (void)gatherMetricsWithProgressBlock:(id /* block */)a0;
- (void)_incrementRelationshipSignalMetricsForRelationshipEdge:(id)a0 inferredRelationshipCorrect:(BOOL)a1;
- (id)_inferredRelationshipKeys;
- (id)_readableStringByRelationshipEdgeProperty;
- (id)_relationshipKeyForLabel:(id)a0;

@end
