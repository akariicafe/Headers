@class NSDate, MRMediaSuggestionRequest, NSHashTable, NSDictionary, NSObject, MRMediaSuggestionPreferences, NSCache;
@protocol OS_dispatch_queue;

@interface MRUMediaSuggestionsController : NSObject

@property (class, readonly, nonatomic) MRUMediaSuggestionsController *sharedController;
@property (class, readonly, nonatomic) unsigned long long minDisplayItemCount;

@property (retain, nonatomic) NSDictionary *suggestions;
@property (retain, nonatomic) MRMediaSuggestionRequest *request;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSDate *lastRequestDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) MRMediaSuggestionPreferences *preferences;
@property (nonatomic) BOOL requestActive;

- (void)requestNewSuggestions;
- (void)hasTimeOutElapsedForOrigin:(id)a0 completion:(id /* block */)a1;
- (void)notifySuggestionsDidChange:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)suggestionsForContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)artworkImageForSuggestion:(id)a0;

@end
