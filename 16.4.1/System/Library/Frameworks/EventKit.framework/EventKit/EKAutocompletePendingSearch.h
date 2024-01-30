@class NSString, EKEvent, EKEventStore;
@protocol CalSpotlightQueryPendingSearchProtocol, EKAutocompleteSearchPasteboardItemProvider;

@interface EKAutocompletePendingSearch : NSObject <EKAutocompletePendingSearchProtocol> {
    EKEventStore *_eventStore;
    unsigned long long _maximumResultCount;
    BOOL _ignoreScheduledEvents;
    EKEvent *_initialEvent;
    id<EKAutocompleteSearchPasteboardItemProvider> _pasteboardItemProvider;
    id<CalSpotlightQueryPendingSearchProtocol> _pendingSearch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_queue;
+ (id)_eventKitQueue;
+ (void)_updateResult:(id)a0 withEvent:(id)a1;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithEventStore:(id)a0 searchString:(id)a1 maximumResultCount:(unsigned long long)a2 ignoreScheduledEvents:(BOOL)a3 initialEvent:(id)a4 pasteboardItemProvider:(id)a5 completionHandler:(id /* block */)a6;
- (BOOL)_shouldReturnResultForEvent:(id)a0 considerReadonlyEvents:(BOOL)a1;
- (id)firstNaturalLanguageResultWithSearchString:(id)a0;
- (void)searchWithString:(id)a0 completionHandler:(id /* block */)a1;

@end
