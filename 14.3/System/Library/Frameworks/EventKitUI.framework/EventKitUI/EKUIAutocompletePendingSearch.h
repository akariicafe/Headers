@class NSString, EKEventStore;
@protocol CalSpotlightQueryPendingSearchProtocol;

@interface EKUIAutocompletePendingSearch : NSObject <EKUIAutocompletePendingSearchProtocol> {
    EKEventStore *_eventStore;
    unsigned long long _maximumResultCount;
    id<CalSpotlightQueryPendingSearchProtocol> _pendingSearch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_queue;
+ (id)_eventKitQueue;
+ (void)_updateResult:(id)a0 withEvent:(id)a1;

@end
