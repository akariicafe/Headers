@class NSString;

@interface PGGraphContactSuggestionEdge : PGGraphOptimizedEdge

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
@property (readonly, nonatomic) unsigned long long sexMatch;
@property (readonly) double confidence;
@property (readonly) BOOL isHighConfidence;

+ (id)filter;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)propertyDictionary;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)_readableStringForContactSuggestionProperty:(id)a0;
- (id)_stringForBiologicalSexMatch:(unsigned long long)a0;
- (id)initFromPersonNode:(id)a0 toContactNode:(id)a1 confidence:(double)a2 contactScore:(double)a3 numberOfMomentsAtHome:(unsigned long long)a4 numberOfMomentsAtMentionedAddress:(unsigned long long)a5 numberOfWeakBirthdayMomentsAroundBirthdayDate:(unsigned long long)a6 numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate:(unsigned long long)a7 numberOfMomentsOverlappingWithCalendarEvents:(unsigned long long)a8 numberOfAppearancesInSharedAssets:(unsigned long long)a9 numberOfCMMMoments:(unsigned long long)a10 facetimeFaceprintConfidence:(double)a11 contactFaceprintMatch:(BOOL)a12 relationshipsDebug:(id)a13 socialGroupsConfidence:(double)a14 socialGroupsDebug:(id)a15 messageGroupsDebug:(id)a16 birthdayScore:(double)a17 potentialBirthdayScore:(double)a18 addressScore:(double)a19 mentionedAddressScore:(double)a20 calendarScore:(double)a21 sharedAssetScore:(double)a22 sharedCMMScore:(double)a23 relationshipScore:(double)a24 scoreAfterMessagePenalty:(double)a25 sexMatch:(unsigned long long)a26;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (BOOL)isFilteredOut;

@end
