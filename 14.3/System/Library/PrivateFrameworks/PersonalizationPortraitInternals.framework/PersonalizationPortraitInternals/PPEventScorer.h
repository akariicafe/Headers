@class NSDictionary, EAEmailAddressSet, NSSet;

@interface PPEventScorer : NSObject {
    NSDictionary *_pastEventTitlesAndParticipants;
    double _earliestStartTime;
    BOOL _shouldConsiderAlarms;
    EAEmailAddressSet *_emailVIPEmailAddresses;
    NSSet *_favoritesEmailAddresses;
    int _rankingOptions;
    long long _pastTitlesCount;
}

+ (BOOL)scoreIsExtraordinary:(double)a0 rankingOptions:(int)a1;
+ (id)eventScorerConfig;
+ (id)cacheKeyforCoreRoutineCacheForStartDate:(id)a0 endDate:(id)a1;
+ (id)emailAddressFromEKAttendee:(id)a0;
+ (id)participantsInEvent:(id)a0;
+ (void)setLocationsOfInterestLocations:(id)a0 withReferenceDate:(id)a1;
+ (id)enrichDictionary:(id)a0 withEvent:(id)a1;
+ (void)clearAssetCache;

- (id)init;
- (id)scoreAvailabilityStatus:(id)a0 withFeatureSchema:(id)a1;
- (void).cxx_destruct;
- (id)scoreParticipantsInEmailVIPAndFavorites:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreDuration:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreRecurrenceRules:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreUnusualStartTime:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreNotes:(id)a0 withFeatureSchema:(id)a1;
- (id)favoriteEmailAddresses;
- (BOOL)isWorkCalendar:(id)a0;
- (void)setEmailVIPEmailAddresses:(id)a0;
- (id)scoreURL:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreTitle:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreParticipantStatusAndCount:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreSelfAttendeeRole:(id)a0 withFeatureSchema:(id)a1;
- (void)setFavoritesEmailAddresses:(id)a0;
- (id)scoreAttachments:(id)a0 withFeatureSchema:(id)a1;
- (id)coreRoutineLocationsOfInterestLocationsUsingDate:(id)a0;
- (id)scorePastEventVolumesWithFeatureSchema:(id)a0;
- (id)scoreParticipantsInPast:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreTravelTimeSet:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreCalendar:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreContentModifications:(id)a0 withFeatureSchema:(id)a1;
- (id)emailVIPEmailAddresses;
- (id)scoreEvent:(id)a0 usingDate:(id)a1;
- (BOOL)isHomeCalendar:(id)a0;
- (id)scoreAlarmIsSet:(id)a0 withFeatureSchema:(id)a1;
- (id)scoreCoreRoutine:(id)a0 usingDate:(id)a1 withFeatureSchema:(id)a2;
- (id)scoreSuggestionsInfo:(id)a0 withFeatureSchema:(id)a1;
- (id)initWithPastEventTitlesAndParticipants:(id)a0 andEarliestStartTime:(double)a1 shouldConsiderAlarms:(BOOL)a2 withOptions:(int)a3;

@end
