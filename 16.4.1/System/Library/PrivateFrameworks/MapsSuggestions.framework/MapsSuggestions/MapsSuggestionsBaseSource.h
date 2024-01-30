@class NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource> {
    NSString *_name;
}

@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (id)initFromResourceDepot:(id)a0;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (unsigned long long)addOrUpdateMySuggestionEntries:(id)a0;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
