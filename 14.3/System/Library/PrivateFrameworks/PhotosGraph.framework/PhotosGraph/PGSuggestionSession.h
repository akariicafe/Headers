@class PGSuggestionNotificationProfile, NSArray, NSDate, PHPhotoLibrary, PGManager, NSObject;
@protocol OS_os_log;

@interface PGSuggestionSession : NSObject {
    NSDate *_universalToday;
}

@property (readonly, nonatomic) unsigned char profile;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PGManager *graphManager;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (retain, nonatomic) NSArray *existingSuggestions;
@property (retain, nonatomic) NSArray *collidableMemories;
@property (readonly, nonatomic) PGSuggestionNotificationProfile *notificationProfile;
@property (retain, nonatomic) NSArray *deniedSuggestions;

+ (id)suggesterClassesWithProfile:(unsigned char)a0;
+ (id)suggestionTypesWithProfile:(unsigned char)a0;
+ (id)suggestionSubtypesWithProfile:(unsigned char)a0;
+ (id)availableSuggestionTypeInfosWithProfile:(unsigned char)a0;

- (void).cxx_destruct;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)initWithProfile:(unsigned char)a0 graphManager:(id)a1;
- (unsigned long long)reasonForSuggestion:(id)a0 collidingWithSuggestion:(id)a1 relaxCollisionRules:(BOOL)a2;
- (unsigned long long)singleAssetSuggestion:(id)a0 collidesWithSuggestion:(id)a1;
- (unsigned long long)outstanderSuggestion:(id)a0 collidesWithSuggestion:(id)a1 relaxCollisionRules:(BOOL)a2;
- (unsigned long long)deniedSuggestion:(id)a0 collidesWithSuggestion:(id)a1;
- (BOOL)supportsRelaxedCollisionRulesForSuggester:(id)a0;
- (id)anySuggestionCollidingWithSuggestion:(id)a0 inSuggestions:(id)a1 relaxCollisionRules:(BOOL)a2 collisionReason:(unsigned long long *)a3;
- (id)suggestionsByCollisionReasonCollidingWithSuggestion:(id)a0 inSuggestions:(id)a1 relaxCollisionRules:(BOOL)a2;
- (BOOL)suggestion:(id)a0 collidesWithMemories:(id)a1;
- (id)electedSuggestionsFromSuggestions:(id)a0 options:(id)a1 progress:(id /* block */)a2;
- (id)bestSuggestionBetween:(id)a0 and:(id)a1;
- (id)suggesterClasses;
- (BOOL)suggesterClass:(Class)a0 supportsOptions:(id)a1;
- (id)activeSuggestersWithOptions:(id)a0;
- (id)coordinatedSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)uncoordinatedSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (BOOL)_suggestionIsColliding:(id)a0 relaxCollisionRules:(BOOL)a1;
- (BOOL)suggestion:(id)a0 isEqualToSuggestion:(id)a1;
- (id)infoWithSuggestion:(id)a0;
- (id)infosWithSuggestions:(id)a0;
- (id)existingSuggestionsWithState:(unsigned short)a0 count:(unsigned long long)a1;

@end
