@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFQueryDispatcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *queriesPendingResponse;

- (void)locationForSearchCompletion:(id)a0 taskIdentifier:(id)a1 results:(id /* block */)a2;
- (void)cancelTaskWithIdentifier:(id)a0;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)a0 results:(id /* block */)a1;
- (void)removePendingQueryWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 taskIdentifier:(id)a1 results:(id /* block */)a2;
- (void)invalidateCacheWithIdentifier:(id)a0;
- (void)locationForString:(id)a0 taskIdentifier:(id)a1 results:(id /* block */)a2;
- (void)dispatchQuery:(id)a0;

@end
