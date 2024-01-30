@interface ATXHomeScreenLogUploaderUtilities : NSObject

+ (id)abGroup;
+ (BOOL)isFirstPartyApp:(id)a0;
+ (BOOL)_isDwellLongEnoughForPseudoTap:(id)a0 endingEventTime:(double)a1;
+ (id)_keyByConcatenatingAccumulatorKey:(id)a0 withString:(id)a1;
+ (void)add:(unsigned long long)a0 toDictionary:(id)a1 forKey:(id)a2;
+ (void)add:(unsigned long long)a0 toTwoLevelDictionary:(id)a1 forKey1:(id)a2 key2:(id)a3;
+ (id)countsForRotationEngagementStatusHistory:(id)a0;
+ (void)incrementDictionary:(id)a0 forKey:(id)a1;
+ (void)incrementTwoLevelDictionary:(id)a0 forKey1:(id)a1 key2:(id)a2;
+ (BOOL)isRotationSessionDueToProactive:(id)a0;
+ (BOOL)isRotationSessionDueToUserScroll:(id)a0;
+ (BOOL)isValidAppLaunch:(id)a0;
+ (id)keyByConcatenatingAccumulatorKey:(id)a0 withLocation:(unsigned long long)a1;
+ (id)keyByConcatenatingAccumulatorKey:(id)a0 withSize:(unsigned long long)a1;
+ (id)stackShownEventsForPseudoTapIfPossible:(id)a0 currentEvent:(id)a1;
+ (int)suggestionReasonForSuggestionLayout:(id)a0;

@end
