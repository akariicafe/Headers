@class NSString, NSMutableSet;

@interface PGPersonContactMatchProperties : NSObject

@property (nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate;
@property (nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
@property (nonatomic) unsigned long long numberOfMomentsAtAddress;
@property (nonatomic) unsigned long long numberOfMomentsAtMentionedAddress;
@property (nonatomic) unsigned long long numberOfMomentsOverlappingWithCalendarEvents;
@property (nonatomic) unsigned long long numberOfAppearancesInSharedAssets;
@property (nonatomic) unsigned long long numberOfCMMSharedMomentsInMessageConversations;
@property (nonatomic) BOOL contactFaceprintMatch;
@property (nonatomic) double faceTimeFaceprintConfidence;
@property (retain, nonatomic) NSMutableSet *socialGroupDescriptions;
@property (retain, nonatomic) NSMutableSet *messageGroupDescriptions;
@property (nonatomic) double socialGroupsOverlapScore;
@property (nonatomic) unsigned long long numberOfMatchedRelationships;
@property (retain, nonatomic) NSMutableSet *matchedRelationships;
@property (nonatomic) unsigned long long sexMatch;
@property (nonatomic) double birthdayScore;
@property (nonatomic) double potentialBirthdayScore;
@property (nonatomic) double addressScore;
@property (nonatomic) double mentionedAddressScore;
@property (nonatomic) double calendarScore;
@property (nonatomic) double sharedAssetScore;
@property (nonatomic) double sharedCMMScore;
@property (nonatomic) double relationshipScore;
@property (nonatomic) double scoreAfterMessagePenalty;
@property (readonly, nonatomic) double matchScore;
@property (readonly, nonatomic) NSString *contactIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithContactIdentifier:(id)a0;
- (void)registerBirthdayWithPeopleCount:(unsigned long long)a0;
- (void)registerPotentialBirthdayWithPeopleCount:(unsigned long long)a0;
- (void)registerMomentAtAddressWithPeopleCount:(unsigned long long)a0;
- (void)registerMomentAtMentionedAddressWithPeopleCount:(unsigned long long)a0;
- (void)registerSharedAssetAppearanceWithPeopleCount:(unsigned long long)a0;
- (void)registerContactFaceprintMatch;
- (void)registerFacetimeFaceprintMatchConfidence:(double)a0;
- (void)registerCalendarEventWithPeopleCount:(unsigned long long)a0;
- (void)registerSocialGroupAndMessageGroupMatchScore:(double)a0 debugSocialGroupsDescription:(id)a1 debugMessageGroupsDescription:(id)a2;
- (void)registerCMMWithPeopleCount:(unsigned long long)a0;
- (void)registerMatchedRelationship:(unsigned long long)a0 withPeopleCount:(unsigned long long)a1;
- (void)registerBiologicalSexMatch:(unsigned long long)a0;
- (void)registerMessageFrequencyPenaltyNewScore:(double)a0;
- (id)_stringsForRelationshipMatch;
- (id)_socialGroupsDescription;
- (id)_messageGroupsDescription;
- (id)_relationshipsDescription;
- (id)edgeProperties;
- (void)setPersonContactMatchScore:(double)a0;

@end
