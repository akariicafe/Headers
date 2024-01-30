@class NSString, NSArray, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsFakeShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor> {
    struct ReadWriteQueue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _rwQueue;
    NSArray *_configuredResults;
    NSError *_configuredError;
    unsigned long long _calledPropose;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)suggestShortcutsOfType:(long long)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)configureResults:(id)a0;
- (unsigned long long)calledRequestSuggest;
- (void)reset;
- (id).cxx_construct;
- (id)initFromResourceDepot:(id)a0;
- (void)configureError:(id)a0;

@end
