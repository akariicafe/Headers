@class NSString, EKEvent, EKEventStore;
@protocol CalSpotlightQueryPendingSearchProtocol;

@interface EKAutocompletePendingSearch : NSObject <EKAutocompletePendingSearchProtocol> {
    EKEventStore *_eventStore;
    unsigned long long _maximumResultCount;
    BOOL _ignoreScheduledEvents;
    EKEvent *_initialEvent;
    id<CalSpotlightQueryPendingSearchProtocol> _pendingSearch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_eventKitQueue;
+ (void)_updateResult:(id)a0 withEvent:(id)a1;
+ (id)_queue;

- (void)searchWithString:(id)a0 completionHandler:(id /* block */)a1;
- (id)firstNaturalLanguageResultWithSearchString:(id)a0;
- (BOOL)_shouldReturnResultForEvent:(id)a0;
- (id)initWithEventStore:(id)a0 searchString:(id)a1 maximumResultCount:(unsigned long long)a2 ignoreScheduledEvents:(BOOL)a3 initialEvent:(id)a4 completionHandler:(id /* block */)a5;
- (void).cxx_destruct;
- (void)cancel;

@end
