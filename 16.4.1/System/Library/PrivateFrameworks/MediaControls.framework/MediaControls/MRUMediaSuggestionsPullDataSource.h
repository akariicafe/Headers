@class NSString, NSDictionary, MRMediaSuggestionRequest, NSDate, NSObject, MRMediaSuggestionPreferences;
@protocol OS_dispatch_queue, MRUMediaSuggestionsDataSourceDelegate;

@interface MRUMediaSuggestionsPullDataSource : NSObject <MRUMediaSuggestionsDataSource>

@property (retain, nonatomic) NSDictionary *mediaSuggestions;
@property (retain, nonatomic) MRMediaSuggestionRequest *request;
@property (retain, nonatomic) NSDate *lastRequestDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) MRMediaSuggestionPreferences *preferences;
@property (nonatomic) BOOL requestActive;
@property (weak, nonatomic) id<MRUMediaSuggestionsDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshMediaSuggestions;
- (id)init;
- (void).cxx_destruct;

@end
