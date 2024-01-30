@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RadioRecentStationsController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasRefreshed;
    BOOL _hasValidStationGroups;
    NSMutableArray *_pendingRecentStations;
    NSArray *_serverRecentStationGroups;
    NSArray *_stationGroups;
}

@property (readonly, copy, nonatomic) NSArray *stationGroups;
@property (readonly, copy, nonatomic) NSArray *stations;

- (id)_newRecentStationsRequest;
- (void)_createStationGroups;
- (void)_insertPendingRecentStation:(id)a0;
- (void)removePendingRecentStation:(id)a0;
- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (void)_handleRecentStationsResponse:(id)a0 fromRequest:(id)a1 pendingRecentStations:(id)a2 isInitialCacheLoad:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (void)insertPendingRecentStation:(id)a0;
- (void)insertPendingRecentStationDictionary:(id)a0;
- (void)_postStationsDidChangeNotification;

@end
