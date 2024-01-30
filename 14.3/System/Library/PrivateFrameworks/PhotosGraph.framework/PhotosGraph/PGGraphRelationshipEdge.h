@class MAEdgeFilter, NSString;

@interface PGGraphRelationshipEdge : PGGraphOptimizedEdge

@property (class, readonly) MAEdgeFilter *partnerFilter;
@property (class, readonly) MAEdgeFilter *fatherFilter;
@property (class, readonly) MAEdgeFilter *motherFilter;
@property (class, readonly) MAEdgeFilter *brotherFilter;
@property (class, readonly) MAEdgeFilter *sisterFilter;
@property (class, readonly) MAEdgeFilter *daughterFilter;
@property (class, readonly) MAEdgeFilter *sonFilter;
@property (class, readonly) MAEdgeFilter *parentFilter;
@property (class, readonly) MAEdgeFilter *familyFilter;
@property (class, readonly) MAEdgeFilter *familySocialGroupFilter;
@property (class, readonly) MAEdgeFilter *childFilter;
@property (class, readonly) MAEdgeFilter *friendFilter;
@property (class, readonly) MAEdgeFilter *coworkerFilter;
@property (class, readonly) MAEdgeFilter *coworkerSocialGroupFilter;
@property (class, readonly) MAEdgeFilter *acquaintanceFilter;
@property (class, readonly) MAEdgeFilter *vipFilter;

@property (readonly) NSString *relationship;
@property (readonly) float confidence;
@property (readonly) unsigned long long status;
@property (readonly) double familyHolidayAttendanceRate;
@property (readonly) unsigned char hasParentContactName : 1;
@property (readonly) unsigned char hasSameFamilyNameAsMePerson : 1;
@property (readonly) unsigned int numberOfMomentsAtHome : 32;
@property (readonly) unsigned char hasAnniversaryDate : 1;
@property (readonly) unsigned char isTopTwoPersonsSocialGroup : 1;
@property (readonly) unsigned int numberOfLoveEmojisExchanged : 32;
@property (readonly) unsigned char isTopPerson : 1;
@property (readonly) double friendNightOutAttendanceRate;
@property (readonly) double partnerTripAttendanceRate;
@property (readonly) double friendsAndFamilyTripAttendanceRate;
@property (readonly) double weekendAppearanceRatio;
@property (readonly) double momentsAtWorkAppearanceRate;
@property (readonly) double calendarAttendanceRatio;
@property (readonly) unsigned char isPersonAgeDifferentThanMeNode : 1;
@property (readonly) unsigned char isPersonOldEnoughToBeParentOrGrandparent : 1;
@property (readonly) BOOL isPersonYoungEnoughToBeMeNodeChild;

+ (id)filter;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)initWithRelationship:(id)a0 fromPersonNode:(id)a1 toPersonNode:(id)a2 withConfidence:(float)a3;
- (void)setLocalProperties:(id)a0;
- (id)_readableStringForProperty:(id)a0;
- (unsigned short)domain;
- (id)label;
- (float)weight;

@end
