@class NSDate, NSArray, PGManagerWorkingContext, NSSet, PHPhotoLibrary, PGSuggestionNotificationProfile, NSObject, CLSCurationContext;
@protocol OS_os_log;

@interface PGSuggestionSession : NSObject {
    NSDate *_universalToday;
}

@property (readonly, nonatomic) unsigned char profile;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PGManagerWorkingContext *workingContext;
@property (readonly, nonatomic) CLSCurationContext *curationContext;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (retain, nonatomic) NSArray *existingSuggestions;
@property (retain, nonatomic) NSArray *collidableMemories;
@property (readonly, nonatomic) PGSuggestionNotificationProfile *notificationProfile;
@property (retain, nonatomic) NSArray *deniedSuggestions;
@property (retain, nonatomic) NSSet *forbiddenAssetUUIDs;

+ (id)availableSuggestionTypeInfosWithProfile:(unsigned char)a0;
+ (id)suggesterClassesWithProfile:(unsigned char)a0;
+ (id)suggestionSubtypesWithProfile:(unsigned char)a0;
+ (id)suggestionTypesWithProfile:(unsigned char)a0;

- (void).cxx_destruct;
- (id)initWithProfile:(unsigned char)a0 workingContext:(id)a1;
- (BOOL)suggesterClass:(Class)a0 supportsOptions:(id)a1;
- (BOOL)suggestion:(id)a0 isEqualToSuggestion:(id)a1;
- (BOOL)_suggestionIsColliding:(id)a0 relaxCollisionRules:(BOOL)a1;
- (id)activeSuggestersWithOptions:(id)a0;
- (id)anySuggestionCollidingWithSuggestion:(id)a0 inSuggestions:(id)a1 relaxCollisionRules:(BOOL)a2 collisionReason:(unsigned long long *)a3;
- (id)bestSuggestionBetween:(id)a0 and:(id)a1;
- (id)coordinatedSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (unsigned long long)deniedSuggestion:(id)a0 collidesWithSuggestion:(id)a1;
- (id)electedSuggestionsFromSuggestions:(id)a0 options:(id)a1 progress:(id /* block */)a2;
- (id)existingSuggestionsWithState:(unsigned short)a0 count:(unsigned long long)a1;
- (id)infoWithSuggestion:(id)a0;
- (id)infosWithSuggestions:(id)a0;
- (unsigned long long)outstanderSuggestion:(id)a0 collidesWithSuggestion:(id)a1 relaxCollisionRules:(BOOL)a2;
- (unsigned long long)reasonForSuggestion:(id)a0 collidingWithSuggestion:(id)a1 relaxCollisionRules:(BOOL)a2;
- (unsigned long long)singleAssetSuggestion:(id)a0 collidesWithSuggestion:(id)a1;
- (id)suggesterClasses;
- (BOOL)suggestion:(id)a0 collidesWithMemories:(id)a1;
- (id)suggestionsByCollisionReasonCollidingWithSuggestion:(id)a0 inSuggestions:(id)a1 relaxCollisionRules:(BOOL)a2;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (BOOL)supportsRelaxedCollisionRulesForSuggester:(id)a0;
- (id)uncoordinatedSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
