@class CNContactStore, NSXPCConnection, BMSource, NSObject, _PSSuggesterConfiguration;
@protocol OS_dispatch_queue;

@interface _PSSuggester : NSObject {
    NSXPCConnection *_connection;
    NSXPCConnection *_userConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    BMSource *_feedbackSource;
    CNContactStore *_contactStore;
}

@property (readonly, nonatomic) _PSSuggesterConfiguration *configuration;

+ (id)suggesterWithDaemon;

- (void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)a0;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)a0;
- (id)contactStore;
- (id)rankedZKWSuggestionsFromContext:(id)a0;
- (id)shareSheetInteractionsFromContext:(id)a0;
- (id)initWithDaemonUsingConfiguration:(id)a0;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)a0;
- (void)provideFeedbackForSuggestions:(id)a0;
- (id)_getUserDaemonXPCConnection;
- (id)rankedSiriNLContactSuggestionsFromContext:(id)a0 maxSuggestions:(id)a1 interactionId:(id)a2;
- (id)initWithConfiguration:(id)a0;
- (void)writeFeedbackForContactsAutocompleteSuggestions:(id)a0;
- (id)rankedNameSuggestionsFromContext:(id)a0 name:(id)a1;
- (id)initWithConfiguration:(id)a0 feedbackRecording:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)shareExtensionSuggestionsFromContext:(id)a0;
- (void)provideFeedbackForContactsAutocompleteSuggestions:(id)a0;
- (id)rankedGlobalSuggestionsFromContext:(id)a0 contactsOnly:(BOOL)a1;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)a0;
- (id)autocompleteSearchResultsWithPredictionContext:(id)a0;
- (id)suggestInteractionsFromContext:(id)a0;
- (id)rankedFamilySuggestions;
- (id)shareSheetInteractionsFromContext:(id)a0 maximumNumberOfSuggestions:(long long)a1;
- (void)dealloc;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)a0 daysAgo:(long long)a1;
- (id)rankedAutocompleteSuggestionsFromContext:(id)a0 candidates:(id)a1;

@end
