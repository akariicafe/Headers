@class NSObject, MRMediaSuggestionPreferences, NSDictionary, MRMediaSuggestionRequest, NSHashTable, NSCache;
@protocol OS_dispatch_queue;

@interface MRUMediaSuggestionsController : NSObject

@property (class, readonly, nonatomic) MRUMediaSuggestionsController *sharedController;
@property (class, readonly, nonatomic) unsigned long long minDisplayItemCount;

@property (retain, nonatomic) NSDictionary *suggestions;
@property (retain, nonatomic) MRMediaSuggestionRequest *request;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) MRMediaSuggestionPreferences *preferences;
@property (nonatomic) BOOL requestActive;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)requestNewSuggestionsWithCompletion:(id /* block */)a0;
- (void)notifySuggestionsDidChange:(id)a0;
- (id)artworkImageForSuggestion:(id)a0;
- (void)hasTimeOutElapsedForOrigin:(id)a0 completion:(id /* block */)a1;
- (id)suggestionsForContext:(id)a0;

@end
