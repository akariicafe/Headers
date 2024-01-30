@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface ATXStackRotationSessionManager : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *stackIdToStackRotationSessions;
@property (readonly, nonatomic) NSMutableArray *completedSessions;
@property (readonly, nonatomic) NSMutableArray *recentHomeScreenCachedSuggestions;
@property (readonly, nonatomic) NSMutableSet *nPlusOneSuggestionUUIDsWithFirstRotation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)_tryEndStackRotationSessionWithStackId:(id)a0 homeScreenEvent:(id)a1;
- (void)_tryPruneSessionsOverMaxLimit;
- (void)_tryStartStackRotationSessionWithStackId:(id)a0 homeScreenEvent:(id)a1;
- (void)_tryUpdateNPlusOneStatusForSession:(id)a0 stackId:(id)a1;
- (void)_tryUpdateStackRotationSessionWithSystemSuggestLayout:(id)a0;
- (id)initWithStackIdToStackRotationSessions:(id)a0 completedSessions:(id)a1 recentHomeScreenCachedSuggestions:(id)a2 nPlusOneSuggestionUUIDsWithFirstRotation:(id)a3;
- (BOOL)isEqualToATXStackRotationSessionManager:(id)a0;
- (id)removeAllAndReturnCompletedSystemSuggestSessions;
- (id)removeAndReturnCompletedSessions;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;
- (id)uuidsOfNPlusOneSuggestionsFromCachedSuggestions:(id)a0;

@end
