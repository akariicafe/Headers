@class NSString;

@interface PGGraphContactSuggestionEdge : PGGraphOptimizedEdge {
    unsigned long long _sexMatch;
    float _weight;
}

@property (readonly, nonatomic) double contactScore;
@property (readonly, nonatomic) unsigned long long numberOfMomentsAtHome;
@property (readonly, nonatomic) unsigned long long numberOfMomentsAtMentionedAddress;
@property (readonly, nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate;
@property (readonly, nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
@property (readonly, nonatomic) unsigned long long numberOfMomentsOverlappingWithCalendarEvents;
@property (readonly, nonatomic) unsigned long long numberOfAppearancesInSharedAssets;
@property (readonly, nonatomic) unsigned long long numberOfCMMMoments;
@property (readonly, nonatomic) double facetimeFaceprintConfidence;
@property (readonly, nonatomic) BOOL contactFaceprintMatch;
@property (readonly, nonatomic) NSString *relationshipsDebug;
@property (readonly, nonatomic) unsigned long long numberOfMatchedRelationships;
@property (readonly, nonatomic) unsigned long long numberOfMatchedMessageGroups;
@property (readonly, nonatomic) double socialGroupsConfidence;
@property (readonly, nonatomic) NSString *socialGroupsDebug;
@property (readonly, nonatomic) NSString *messageGroupsDebug;
@property (readonly, nonatomic) BOOL personContactBiologicalSexMatch;
@property (readonly, nonatomic) BOOL personContactBiologicalSexMismatch;
@property (readonly, nonatomic) double birthdayScore;
@property (readonly, nonatomic) double potentialBirthdayScore;
@property (readonly, nonatomic) double addressScore;
@property (readonly, nonatomic) double mentionedAddressScore;
@property (readonly, nonatomic) double calendarScore;
@property (readonly, nonatomic) double sharedAssetScore;
@property (readonly, nonatomic) double sharedCMMScore;
@property (readonly, nonatomic) double relationshipScore;
@property (readonly, nonatomic) double scoreAfterMessagePenalty;
@property (readonly) double confidence;
@property (readonly) BOOL isHighConfidence;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void)setWeight:(float)a0;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)label;
- (float)weight;
- (id)initFromPersonNode:(id)a0 toContactNode:(id)a1 weight:(float)a2;
- (id)_stringForBiologicalSexMatch:(unsigned long long)a0;
- (BOOL)isFilteredOut;
- (id)_readableStringForContactSuggestionProperty:(id)a0;

@end
