@class NSXPCConnection, _PSSuggesterConfiguration;

@interface _PSSuggester : NSObject {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _PSSuggesterConfiguration *configuration;

+ (id)suggesterWithDaemon;

- (id)init;
- (void).cxx_destruct;
- (id)rankedSiriNLContactSuggestionsFromContext:(id)a0 maxSuggestions:(id)a1 interactionId:(id)a2;
- (void)dealloc;
- (id)shareExtensionSuggestionsFromContext:(id)a0;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)a0;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)a0;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)a0 daysAgo:(long long)a1;
- (id)initWithConfiguration:(id)a0;
- (id)rankedAutocompleteSuggestionsFromContext:(id)a0 candidates:(id)a1;
- (void)provideFeedbackForSuggestions:(id)a0;
- (id)shareSheetInteractionsFromContext:(id)a0 maximumNumberOfSuggestions:(long long)a1;
- (id)rankedGlobalSuggestionsFromContext:(id)a0 contactsOnly:(BOOL)a1;
- (id)initWithDaemonUsingConfiguration:(id)a0;
- (void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)a0;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)a0;
- (id)shareSheetInteractionsFromContext:(id)a0;
- (id)suggestInteractionsFromContext:(id)a0;
- (id)rankedZKWSuggestionsFromContext:(id)a0;
- (id)rankedNameSuggestionsFromContext:(id)a0 name:(id)a1;
- (id)rankedFamilySuggestions;

@end
