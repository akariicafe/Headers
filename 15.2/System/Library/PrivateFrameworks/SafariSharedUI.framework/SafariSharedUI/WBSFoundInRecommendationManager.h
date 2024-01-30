@class NSObject;
@protocol OS_dispatch_queue, SGSuggestionsServiceURLsProtocol;

@interface WBSFoundInRecommendationManager : NSObject {
    NSObject<SGSuggestionsServiceURLsProtocol> *_suggestionsService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _changeNotificationToken;
}

+ (id)_linkRecommendationsFromSGSuggestions:(id)a0 contactStoreProvider:(id /* block */)a1;
+ (unsigned long long)foundInSourceFromBundleIdentifier:(id)a0;
+ (BOOL)isBundleIdentifierFromCalendar:(id)a0;
+ (BOOL)isBundleIdentifierFromMessages:(id)a0;

- (void)recentRecommendationsWithCompletionHandler:(id /* block */)a0;
- (void)beginListeningForURLSuggestionChanges;
- (void).cxx_destruct;
- (void)stopListeningForURLSuggestionChanges;
- (void)_createInternalQueueIfNecessary;
- (void)_recentURLRecommendationsWithCompletionHandler:(id /* block */)a0;

@end
