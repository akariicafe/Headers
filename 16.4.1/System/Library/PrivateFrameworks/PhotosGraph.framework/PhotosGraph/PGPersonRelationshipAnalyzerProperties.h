@interface PGPersonRelationshipAnalyzerProperties : NSObject

@property (nonatomic) double familyHolidayAttendanceRatio;
@property (nonatomic) BOOL hasParentContactName;
@property (nonatomic) BOOL hasSameFamilyNameAsMePerson;
@property (nonatomic) unsigned long long numberOfMomentsAtHome;
@property (nonatomic) BOOL hasAnniversaryDate;
@property (nonatomic) BOOL isTopTwoPersonSocialGroup;
@property (nonatomic) unsigned long long numberOfLoveEmojisExchanged;
@property (nonatomic) BOOL isTopPerson;
@property (nonatomic) double friendNightOutAttendanceRatio;
@property (nonatomic) double oneOnOneTripAttendanceRatio;
@property (nonatomic) double tripAttendanceRatio;
@property (nonatomic) double weekendAppearanceRatio;
@property (nonatomic) double calendarEventAttendanceRatio;
@property (nonatomic) double momentsAtWorkAppearancesRatio;
@property (nonatomic) BOOL personAgeDifferentThanMeNode;
@property (nonatomic) BOOL personOldEnoughToBeMeNodeParentOrGrandparent;
@property (nonatomic) BOOL personYoungEnoughToBeMeNodeChild;
@property (readonly, nonatomic) double partnerScore;
@property (readonly, nonatomic) double familyScore;
@property (readonly, nonatomic) double parentScore;
@property (readonly, nonatomic) double childScore;
@property (readonly, nonatomic) double friendScore;
@property (readonly, nonatomic) double coworkerScore;

- (id)description;
- (void)registerTopTwoPersonSocialGroup;
- (id)edgeProperties;
- (void)penalizePersonAgeCategoryDifferentThanMeNode;
- (void)registerAnniversaryDate;
- (void)registerAttendance:(unsigned long long)a0 amongFamilyHolidays:(unsigned long long)a1;
- (void)registerAttendance:(unsigned long long)a0 amongWorkCalendarEvents:(unsigned long long)a1;
- (void)registerNumberOfExchangedLoveEmojis:(unsigned long long)a0 amongExchangedLoveEmojis:(unsigned long long)a1;
- (void)registerNumberOfMomentsAtHome:(unsigned long long)a0 amongMomentsAtHome:(unsigned long long)a1;
- (void)registerNumberOfMomentsAtWork:(unsigned long long)a0 amongMomentsAtWork:(unsigned long long)a1;
- (void)registerNumberOfNightsOut:(unsigned long long)a0 amongNightsOut:(unsigned long long)a1;
- (void)registerNumberOfTrips:(unsigned long long)a0 withTripsScore:(double)a1 amongTrips:(unsigned long long)a2;
- (void)registerNumberOfWeekendMoments:(unsigned long long)a0 amongWeekends:(unsigned long long)a1;
- (void)registerOneOnOneTripAppearance:(unsigned long long)a0 amongOneOnOneTrips:(unsigned long long)a1;
- (void)registerParentContactName;
- (void)registerPersonOldEnoughToBeMeNodeParentOrMyGrandparent;
- (void)registerPersonYoungEnoughToBeMeNodeChild;
- (void)registerSameFamilyNameAsMePerson;
- (void)registerTopPersonAmongTopPeople:(unsigned long long)a0;

@end
